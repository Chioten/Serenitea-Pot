# git 常用命令（够用版）

> **你现在只需要记住 4 条。** 其他等用到再翻。

## 每天用的 4 条

```cmd
git status                      :: 我改了什么？（随时敲，最安全）
git add .                       :: 把所有改动加入"待提交"
git commit -m "feat: 完成XX"     :: 存档（拍快照）
git push                        :: 推到 GitHub
```

## 三条心智模型

- `add` = **挑东西**
- `commit` = **打包存档**
- `push` = **寄出去**

## 需要时再翻

| 我想…… | 命令 |
|---|---|
| 我改了啥 | `git status` |
| 看改动细节 | `git diff` |
| 看历史 | `git log --oneline -10` |
| 撤掉某个文件的改动 | `git restore <文件名>` |
| 拉最新代码 | `git pull` |

## 第一次用（进一个新仓库）

```cmd
git clone <仓库地址>          :: 克隆到本地
cd /d D:\\AI\\Serenitea-Pot     :: 切到那个目录（Windows 记得加 /d）
```

## 常见小坑

- **提交前忘了 add** → `git commit` 会说 "nothing to commit"，先 `git add .`
- **push 弹浏览器** → 正常，登录一次就记住了
- **文件没变但 git 说变了** → 多半是换行符或编码，别慌，`git diff` 看一眼
