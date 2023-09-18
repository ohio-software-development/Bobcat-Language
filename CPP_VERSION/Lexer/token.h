
#define TOKEN_H
#ifdef TOKEN_H

#include <iostream>

#include "Constants.cc"

namespace lexer_namespace {

class token {

private:
    TOKEN_TYPE type;
    std::string text; 
    size_t token_position;

public:
    token() {};
    token(TOKEN_TYPE type, std::string text, size_t token_position); 

    TOKEN_TYPE get_type() const;
    std::string get_text() const;
    size_t get_token_position() const;

};

}

#endif 
