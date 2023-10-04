#ifndef FOSSSYC_SOURCE_H
#define FOSSSYC_SOURCE_H

typedef struct fosssyc_location fosssyc_location;
typedef struct fosssyc_source_buffer fosssyc_source_buffer;

struct fosssyc_location
{
    int source_id;
    long long offset;
    long long length;
};

struct fosssyc_source_buffer
{
    const char* name;
    const char* text; 
};

#endif