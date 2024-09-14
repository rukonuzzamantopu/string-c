#include<stdio.h>
int main(){
    int i,vowels,consonants;
    char a[200];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    for (i=0;a[i] != '\0';i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){ vowels++; }
        else if((a[i]>= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
            consonants++;
        }
    }
    printf("Vowels:%d\n",vowels);
    printf("Consonants: %d\n",consonants);
    return 0;
}