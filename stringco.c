#include<stdio.h>
int main(){
    int i;
    char a[50],b[50];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    //scanf("%[^\n]",a);
    for (i=0;a[i] != '\0';i++)
            b[i] = a[i];
            b[i] = '\0';
        printf("%s",b);
    return 0;
}