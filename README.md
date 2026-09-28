# Serenitea-Pot

个人编程练习仓库 —— C 语言作业与练习题。

## 内容

| 路径 | 说明 |
|---|---|
| `C_test/` | C 语言作业（Visual Studio 项目） |

## 已完成

### 菱形打印
- 输入非负整数 `n`，输出 `2n+1` 行的菱形
- 思路：利用图形的**对称性**，引入「离中间行的距离 `d`」统一上下两半
  - 缩进 = `2d`
  - 星号数 = `2(n-d)+1`
- 源码：`C_test/Find the pattern in a rhombus.c`

## 环境

- Visual Studio 2026 (MSVC)
- 代码兼容 gcc（未使用仅 MSVC 提供的 `scanf_s`）
