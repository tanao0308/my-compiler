#include <iostream>
#include <spdlog/spdlog.h>

#include "lexical.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout<<"wrong usage"<<endl;
        return 1;
    }
    string filename = argv[1];
    getalltoken(filename);


    // 设置日志级别
    spdlog::set_level(spdlog::level::debug);  // 设置最低日志级别为 DEBUG

    // INFO 级别日志
    spdlog::info("This is an info message");

    // DEBUG 级别日志
    spdlog::debug("This is a debug message");

    // ERROR 级别日志
    spdlog::error("This is an error message");

    return 0;
}