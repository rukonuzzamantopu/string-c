/*write a c program to copy a string without builtding function*/
#include<stdio.h>
int main(){
    int i,n;
    char a[40],b[40];
    printf("enter a string:");
    scanf("%[^\n]",a);
    for (i=0;i[a] != '\0'; i++){
        b[i] = a[i];
    }
        b[i] = '\0';
        printf("%s",b);
    return 0;
}