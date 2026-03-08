# vrchat_video_fault_solve# 🚀 VRChat yt-dlp Auto Updater

![Build Status](https://img.shields.io/github/actions/workflow/status/你的用户名/你的仓库名/build.yml?style=flat-square)
![Platform](https://img.shields.io/badge/Platform-Windows-blue?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)

这是一个极其轻量的 Windows 可执行程序，专门用于一键更新 VRChat 内置视频播放器所依赖的 `yt-dlp.exe`。

当你在 VRChat 中遇到视频无法播放、解析失败等问题时，通常是因为 `yt-dlp` 版本过旧。运行此工具即可自动拉取官方最新版本并覆盖安装。

## ✨ 特性

* **⚡ 极速轻量**：由原生 C 语言编写，编译后体积极小，几乎不占用系统资源。
* **🤖 自动编译**：基于 GitHub Actions 云端自动编译，确保代码透明、安全，无毒无木马。
* **🎯 精准替换**：自动定位到 `%USERPROFILE%\AppData\LocalLow\VRChat\VRChat\Tools\` 目录并执行更新。
* **👀 进度可见**：运行原生 `curl` 命令，自带下载进度条，告别假死等待。

## 📥 如何获取与使用

由于本项目配置了 GitHub Actions，你不需要自己配置编译环境，直接下载编译好的成品即可：

1.  进入本仓库顶部的 **[Actions]** 标签页。
2.  点击左侧的 **Build VRChat yt-dlp Updater** 工作流。
3.  点击列表中最新的一次运行记录（带有绿色 ✔️ 的那一条）。
4.  滑到页面最下方的 **Artifacts** 区域，点击 `VRChat_Updater` 下载压缩包。
5.  解压后，双击运行 `Update_VRChat_ytdlp.exe`。

> **💡 提示**：运行工具时会弹出一个黑色的命令行窗口显示下载进度，下载完成后窗口会自动关闭，此时 VRChat 的 yt-dlp 就已经更新完毕了。

## 🛠️ 源码编译 (进阶)

如果你想自己在本地编译，只需要拥有 GCC 环境：

```bash
gcc main.c -o Update_VRChat_ytdlp.exe
