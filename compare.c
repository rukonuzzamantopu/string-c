#include<stdio.h>
int main(){
    int i = 0;
    char a[40],b[40];
    printf("Enter first string: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string: ");
    fgets(b,sizeof(b),stdin);

    while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0')
        i++;
    if(a[i] == b[i])
        printf("Same");
    else
        printf("Different");

    return 0;
}