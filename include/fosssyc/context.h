#ifndef FOSSSYC_CONTEXT_H
#define FOSSSYC_CONTEXT_H

#include "fosssyc/source.h"

typedef struct fosssyc_context fosssyc_context;

struct fosssyc_context
{
    fosssyc_source_buffer* sources;
    long long sources_capacity;
    long long sources_count;
};

fosssyc_context* fosssyc_context_create(void);
void fosssyc_context_destroy(fosssyc_context* context);

int fosssyc_context_get_r_add_source_buffer_from_file(fosssyc_context* context, const char* file_path);

fosssyc_source_buffer fosssy_context_get_source_buffer(fosssyc_context* context, int source_id);

#endif 