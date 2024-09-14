#include<stdio.h>
int main(){
    int i,j;
    char a[60],b[40];
    printf("Enter the first string: ");
    fgets(a,sizeof(a),stdin);
    for (i=0;a[i] != '\0';i++)
        if (a[i] == '\n'){
            a[i] = '\0';
            break;
        }
    printf("Enter the second string: ");
    fgets(b,sizeof(b),stdin);
    for (j=0;b[j] != '\0';j++){
        if (b[j] == '\n'){
            b[i] = '\0';
            break;
        }
    }
    for (i=0;a[i] != '\0';i++);
    for (j=0;b[j] != '\0';j++)
        a[i+j] = b[j];
        a[i+j] = '\0';
    printf("Concated string: %s",a);
    return 0;

}