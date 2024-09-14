#include<stdio.h>
int main(){
    int i,wordcount;
    char str[500];
    wordcount = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for (i = 0;str[i] != '\0'; i++){
        if((str[i] != ' ' && str[i] != '\n') && (i == 0 || str[i-1] == ' ' || str[i-1] == '\n')){
            wordcount++;
        }
    }
    printf("Totall word: %d\n",wordcount);
    return 0;
}