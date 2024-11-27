#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <queue>

using namespace std;

enum TokenType {
    tok_number,
    tok_symbol,
    tok_eof,
    tok_if,
    tok_if,
    tok_if,
    tok_if,
    tok_if,
    tok_if,
};

struct Token {
    TokenType type;
    double value=0;
    string name="";
};

unique_ptr<queue<Token>> getalltoken(string filename);