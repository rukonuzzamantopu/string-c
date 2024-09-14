#include<stdio.h>
int main(){
    int i,j;
    char a[40],b[30];
    printf("Enter the first string: ");
    fgets(a,sizeof(a),stdin);

    printf("Enter the second string: ");
    fgets(b,sizeof(b),stdin);

    for (i=0;a[i] != '\0';i++){
        if(a[i] == '\n'){
            a[i] = '\0';
            break;
        }
    }
    for (j=0;a[j] != '\0';j++){
        if (b[j] == '\n'){
            b[j] = '\0';
        break;
        }
    }
        a[i] = ' ';
        i++;
        
    for (j=0;b[j] != '\0';j++,i++)
        a[i] = b[j];

    a[i] = '\0';

    printf("concated string: %s",a);

    return 0;
}