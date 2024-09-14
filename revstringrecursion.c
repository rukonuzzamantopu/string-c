#include<stdio.h>
void rev(int i,char []);
int main(){
    char a[30];
    printf("Enter a strring: ");
    fgets(a,sizeof(a),stdin);
    rev(0,a);
}
void rev(int i,char a[]){
    if (a[i] != '\0')
        rev(i+1,a);
    printf("%c",a[i]);
}