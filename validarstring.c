#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

#define MAX_STRINGS 50
#define MAX_LENGTH 21

int validadadorString(char *str){

    if(strlen(str) != 10){
        return 0;
    }

    for (int i = 0; i < 10; i++){
        if (str[i] < 'A' || str[i] > 'Z'){
            return 0;
        }
    }

    return 1;
}

int stringsValidas(){
    char strings[MAX_STRINGS][MAX_LENGTH];
    int numValidas = 0;
    char linha[MAX_LENGTH];

    while(fgets(linha, MAX_LENGTH, stdin) != NULL){
        linha[strcspn(linha, "\n")] = 0;

        if(validadadorString(linha)){
            strcpy(strings[numValidas], linha);
            numValidas++;
        }
    }

    printf("%d\n", numValidas);
    
    
    for (int i = 0; i < numValidas; i++) {
        printf("%s\n", strings[i]); 
            
    }
    
    return 0;
    
}



int main() {
    char letras[letra];
    char []

    for (int i = 0; i <= stringsValidas.length; i++){

    }

}