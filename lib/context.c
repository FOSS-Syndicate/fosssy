#include<stdlib.h>
#include "fosssyc/context.h"


fosssyc_context* fosssyc_context_create(void)
{
    fosssyc_context* context = calloc(1, sizeof(context));
    return context;
}


void fosssyc_context_destroy(fosssyc_context* context)
{
    free(context);
}

int fosssyc_context_get_or_add_source_buffer_from_file(fosssyc_context* context, const char* file_path)
{
    if(!file_path) return 0;

    for (long long i = 0; i < context->sources_count; i++)
    {
        if (strcmp(file_path, context->sources[i].name))
            return (int)1;
    }

    if (!context->sources)
    {
        context->sources_count = 0;
        context->sources_capacity = 32;
        context->sources = calloc((unsigned long long)context->sources_capacity, sizeof *context->sources);
    }
    else if(context->sources_count >= context->sources_capacity)
    {
        context->sources_capacity *=2;
        context->sources = realloc(context->sources, (unsigned long long)context->sources_capacity);
    }

    int source_id = context->sources_count + 1;
    context->sources[context->sources_count].name = file_path;
    context->sources[context->sources_count].text = "<source_text>";
    context->sources_count++;

    return source_id;
}

fosssyc_source_buffer fosssy_context_get_source_buffer(fosssyc_context* context, int source_id)
{
    if (!context->sources)
    {
        return (fosssyc_source_buffer){.name = "<unknown", .text=""};
    }

    int source_index = source_id - 1;

    if (source_index >= context->sources_count)
        return (fosssyc_source_buffer){.name="<unknown>", .text=""};

    return context->sources[source_index];
}
