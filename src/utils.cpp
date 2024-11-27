#include <iostream>
#include <string>
#include <ctime>

// 定义日志级别
enum LogLevel {
    INFO,
    DEBUG,
    ERROR
};

// 获取当前时间作为日志的时间戳
std::string getCurrentTime() {
    std::time_t t = std::time(nullptr);
    char buf[100];
    std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
    return buf;
}

// 打印日志的函数
void LOG(LogLevel level, const std::string& message) {
    std::string levelStr;
    switch (level) {
        case INFO:
            levelStr = "INFO";
            break;
        case DEBUG:
            levelStr = "DEBUG";
            break;
        case ERROR:
            levelStr = "ERROR";
            break;
    }

    std::cout << "[" << getCurrentTime() << "] [" << levelStr << "] " << message << std::endl;
}

int main() {
    LOG(INFO, "This is an informational message.");
    LOG(DEBUG, "This is a debug message.");
    LOG(ERROR, "This is an error message.");

    return 0;
}
