#include <stdio.h>

const char* usage_text = "Usage: fosssyc [option] file...\n";

int main (int argc, char* argv[]){
    printf("%s", usage_text);
    return 0;
}