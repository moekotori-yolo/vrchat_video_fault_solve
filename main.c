#include <stdlib.h>

int main() {
    // 调用系统命令执行 curl 下载
    system("curl -L --create-dirs -o \"%USERPROFILE%\\AppData\\LocalLow\\VRChat\\VRChat\\Tools\\yt-dlp.exe\" https://github.com/yt-dlp/yt-dlp/releases/latest/download/yt-dlp.exe");
    return 0;
}