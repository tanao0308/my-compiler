#include "lexical.h"

using namespace std;

Token getNextToken(int p, string& raw_code) {
    while(raw_code[p] && (raw_code[p] == ' ' || raw_code[p] == '\n'))
        p++;
    if(!raw_code[p])
        return Token{.type = };
}

unique_ptr<queue<Token>> getAllToken(string filename) {
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

    while()
    return nullptr;
}