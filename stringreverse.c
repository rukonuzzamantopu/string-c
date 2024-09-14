/*Write a c program input a string from user and reversly print this string*/
#include<stdio.h>
int main(){
    int i,j;
    char a[40];
    printf("Enter the string: ");
    scanf("%[^\n]",a);
    for (i=0;a[i] != '\0';i++);
    for (j=i-1;j>=0;j--)
        printf("%c",a[j]);
    return 0;
}