
#define LEXER_H
#ifdef LEXER_H

#include <cstddef>
#include <iostream>
#include <fstream>

#include "token.h"

namespace lexer_namespace {

class lexer {


private:    
    size_t last_token;
    token tokens[MAX_TOKEN];
    bool usable_lexer;
    
    std::string remove_whitespace(std::string) const;

public:
    lexer();
    lexer(std::string file_name); 
    bool add_token(token adding);
    bool is_usable() const; 
    bool run(); 


};

}


#endif 

