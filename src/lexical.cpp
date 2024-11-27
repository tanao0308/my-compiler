#include "lexical.h"

using namespace std;

queue<Token>;

unique_ptr<queue<Token>> getalltoken(string filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening source file!" << std::endl;
        exit(1);
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string raw_code = buffer.str();
    std::cout << "code:\n" << raw_code << std::endl;
    file.close();  // 关闭文件

    return nullptr;
}