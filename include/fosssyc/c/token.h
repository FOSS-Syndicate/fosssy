#ifndef FOSSSYC_C_TOKEN_H
#define FOSSSYC_C_TOKEN_H

#include "fosssyc/source.h"

typedef struct fosssyc_c_token fosssy_c_token;

struct fosssy_c_token
{
    int kind;
    fosssyc_location location;

    char *string_value;
    long long string_length;
    
    long long int_value;
    
    double real_value;
};

#endif