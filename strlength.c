/*write a c program to find string length without library function*/
#include<stdio.h>
int main(){
    int i;
    char a[30];
    printf("Enter a string: ");
    scanf("%[^\n]",a);
    // Using while loop
    i =0;
    while(a[i] != '\0'){
        i++;
    }
    printf("Length of String: %d\n",i);

    //Using for loop
    //for (i=0;a[i] !='\0';i++);
      //  pirntf("%d",i);
    return 0;
}