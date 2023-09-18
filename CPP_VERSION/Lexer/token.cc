
#include "token.h"

using namespace std;
using namespace lexer_namespace;

token::token(TOKEN_TYPE type, string text, size_t token_position) {

    type = type;
    text = text;
    token_position = token_position;

}

TOKEN_TYPE token::get_type() const {

    return type;

}

string token::get_text() const {

    return text;

}

size_t token::get_token_position() const {

    return token_position; 

}

