

#include <cctype>

#include "lexer.h"

using namespace std;
using namespace lexer_namespace;

lexer::lexer() {

    usable_lexer = false;
    last_token = 0;

}

lexer::lexer(string file_name) {

    usable_lexer = true; 

    ifstream in_stream; 
    last_token = 0;

}

bool lexer::is_usable() const {

    return usable_lexer;

}

string lexer::remove_whitespace(string removing) const {

    size_t i = 0;
    while (i < removing.size()) {

        if (isspace(removing[i])) {

            removing.erase(removing.begin() + i);

        } else {

            i++; 

        }

    }

    return removing; 

}

bool lexer::add_token(token adding) {

    if (is_usable() && last_token + 1 < MAX_TOKEN) {

        tokens[last_token] = adding; 
        last_token++;

        return true; 

    }

    return false;

}

bool lexer::run() {


    return false; 

}


