#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <queue>

using namespace std;

enum TokenType {
    tok_number = -1,
    tok_symbol = -2,
    tok_eof = -3
};

struct Token {
    TokenType type;
    double value=0;
    string name="";
};

unique_ptr<queue<Token>> getalltoken(string filename);