# update-readme.ps1 - regenerate the AUTO block in README.md
# Called by 一键上传.cmd before git add.
$ErrorActionPreference = 'Stop'
$tools = Split-Path -Parent $MyInvocation.MyCommand.Path
$root  = Split-Path -Parent $tools
Set-Location $root

$files = Get-ChildItem -Path $root -Recurse -File -Include *.c,*.cpp,*.py,*.java,*.js -ErrorAction SilentlyContinue |
         Where-Object { $_.FullName -notmatch '\\\.git\\' } |
         Sort-Object FullName

$out = New-Object System.Collections.Generic.List[string]
$out.Add('<!-- AUTO:BEGIN -->')
$out.Add('')
$out.Add('| # | 程序 | 文件 |')
$out.Add('| --- | --- | --- |')
$i = 0
foreach ($f in $files) {
    $i++
    $rel = $f.FullName.Substring($root.Length + 1).Replace('\','/')
    $out.Add('| ' + $i + ' | ' + $f.BaseName + ' | [' + $f.Name + '](' + $rel + ') |')
}
$out.Add('')
$out.Add('<!-- AUTO:END -->')
$block = ($out -join "`r`n")

$p = Join-Path $root 'README.md'
$readme = [IO.File]::ReadAllText($p, [Text.Encoding]::UTF8)
$m = [regex]::Match($readme, '(?s)<!-- AUTO:BEGIN -->.*?<!-- AUTO:END -->')
if ($m.Success) {
    $readme = $readme.Remove($m.Index, $m.Length).Insert($m.Index, $block)
} else {
    $readme = $readme.TrimEnd() + "`r`n`r`n## 作业清单`r`n`r`n" + $block + "`r`n"
}
[IO.File]::WriteAllText($p, $readme, (New-Object Text.UTF8Encoding($false)))
Write-Host ('  README updated: ' + $i + ' program(s) listed')
