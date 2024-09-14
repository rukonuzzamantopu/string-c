#include<stdio.h>
int main(){
    int i,j,k;
    char a[30],b[30];
    printf("Enter your checked string: ");
    scanf("%[^\n]",a);
    for (i=0;a[i] != '\0';i++);

    k=0;
    for (j=i-1;j>=0;j--){
        b[k] = a[j];
        k++;
    }
    b[k] = '\0';
    printf("Reversed string: %s\n",b);

    i=0;
    while (a[i] == b[i] && a[i] != '\0'){
        i++;
    }
    if(a[i] == '\0'){
        printf("This string is palindromic");
    }
    else
    {
        printf("This string is not palindromin");
    }
    return 0;
}