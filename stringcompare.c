#include<stdio.h>
int main(){
    int i,j;
    char a[40],b[30];
    printf("Enter the first string: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter the second string: ");
    fgets(b,sizeof(b),stdin);
    i=0;
    while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0')
    i++;
    if ( a[i] == b[i])
        printf("Same");
    else
        printf("Different");
    return 0;
}