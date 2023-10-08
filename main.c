#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
TokenLiteral *generate_number(char current, FILE *file){
    TokenLiteral *token = malloc(sizeof(TokenLiteral));
    token->type = INT;
    char *value = malloc(sizeof(int) * 8);
    int value_index = 0;
    while(isdigit(current) && current != EOF){
        if(!isdigit(current)){
            break;
        }
        value[value_index] = current;
        value_index++;
        //printf("%c", current);
        current = fgetc(file);
    }
    token->value = value;
    //free(value);
    return(token);
}

void lexer(FILE *file){
    char current = fgetc(file); ///////*current points to a character in file*/

    while(current != EOF){

        if (current == ';'){
            printf("Found SEMICOLON\n");
        }
        else if(current == '('){
            printf("OPEN PAREN\n");
        }
        else if(current == ')'){
            printf("CLOSE PAREN\n");
        }
        else if (isdigit(current)){
            //printf("FOUND DIGIT %d\n", current - '0');
            TokenLiteral *test_token = generate_number(current, file);
            printf("TEST TOKEN VALUE %s\n", test_token->value);
        }
        else if (isalpha(current)){
            printf("FOUND CHARACTER %c\n", current);
        }

        current = fgetc(file); //moves to the next character?
        /////current++; // increase the pointer by one | next character
    }
}

int main(){
    FILE *file;
    file = fopen("test.fosy", "r");
    
    lexer(file);
}