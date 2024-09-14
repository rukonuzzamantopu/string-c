/*write a c program to reverse string using without buildin function*/
#include<stdio.h>
int main(){
    int i,j,k;
    char a[50],b[50];
    printf("Enter your reversing string: ");
    scanf("%[^\n]",a);
    i = 0;
    for (i = 0; a[i] != '\0'; i++);
    for (j = i-1; j>= 0; j--)
    {
        b[k] = a[j];
        k++;
    }
    b[k] ='\0';
    printf("%s",b);

    return 0;

}