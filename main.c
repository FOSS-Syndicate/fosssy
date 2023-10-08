#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef enum{
    SEMI,
    OPEN_PAREN,
    CLOSE_PAREN,
}TypeSeperator;

typedef enum{
    EXIT,
}TypeKeyword;

typedef enum{
    INT,
}TypeLiteral;

typedef struct{
    TypeKeyword type;
}TokenKeyword;

typedef struct{
    TypeSeperator type;
}TokenSeperator; 

typedef struct{
    TypeLiteral type;
    char *value;
}TokenLiteral;

/*Function Returns a struct of TokenLiteral Type*/
TokenLiteral *generate_number(char *current, int *current_index){
    TokenLiteral *token = malloc(sizeof(TokenLiteral));
    token->type = INT;
    char *value = malloc(sizeof(int) * 8);
    int value_index = 0;
    while(isdigit(current[*current_index]) && current[*current_index] != '\0'){
        if(!isdigit(current[*current_index])){
            break;
        }
        value[value_index] = current[*current_index];
        value_index++;
        current_index++;
        //printf("%c", current);
        //current = fgetc(file);
    }
    token->value = value;
    //free(value);
    return token;
}

/* int *current_index gets dereferenced to gets the original value */
TokenKeyword *generate_keyword(char *current, int *current_index){
    TokenKeyword *token = malloc(sizeof(TokenKeyword));
    char *keyword = malloc(sizeof(char) * 8);
    int keyword_index = 0;
    while(isalpha(current[*current_index]) && current[*current_index] != '\0'){
        keyword[keyword_index] = current[*current_index];
        printf("keyword %c", current[*current_index]);
        
        keyword_index++;
        //current = fgetc(file);
        current_index++;
    }
    printf("keyword_index: %d\n", keyword_index);
    if (strcmp(keyword, "exit") == 0){
        printf("TYPE EXIT\n");
        token->type = EXIT;
        ////printf("RETURN TOKEN TYPE EXIT");
    }
    return token;
}

void lexer(FILE *file){
    /////printf("MAKE IT HERE\n");
    int length;
    char *buffer = 0;
    fseek(file, 0, SEEK_END);
    length = ftell(file);
    fseek(file, 0, SEEK_SET);
    buffer = malloc(sizeof(char) * length);
    fread(buffer, 1, length, file);
    fclose(file);
    buffer[length + 1] = '\0';
    char *current = malloc(sizeof(char) * length + 1);
    current = buffer;
    int current_index = 0; ///////*current points to a character in file*/


    while(current[current_index] != '\0'){
        if (current[current_index] == ';'){
            printf("Found SEMICOLON\n");
        }
        else if(current[current_index] == '('){
            printf("OPEN PAREN\n");
        }
        else if(current[current_index] == ')'){
            printf("CLOSE PAREN\n");
        }
        else if (isdigit(current[current_index])){
            //printf("FOUND DIGIT %d\n", current - '0');
            TokenLiteral *test_token = generate_number(current, &current_index);
            printf("TEST TOKEN VALUE %s\n", test_token->value);
        }
        else if (isalpha(current[current_index])){
            TokenKeyword *test_keyword = generate_keyword(current, &current_index);
            ////current = fgetc(file) - 1;
            //printf("FOUND CHARACTER:%c\n", current[current_index]);
            //printf("MAKE IT HERE\n");
            //printf("FOUND TYPE %d\n", test_keyword->type);
            // if (test_keyword->type == EXIT){
            //     printf("EXIT\n");
            // }
        }

        current_index++; //moves to the next character?
        /////current++; // increase the pointer by one | next character
    }
}

int main(){
    FILE *file;
    file = fopen("test.fosy", "r");

    lexer(file);
}