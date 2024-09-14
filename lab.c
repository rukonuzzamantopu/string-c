#include<stdio.h>
 void reverseword(char *start, char *end);
int main(){
    int i,start,end;
    char a[300];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);

    for (i=0;a[i] != '\0';i++){
        if (a[i] == '\n'){
            a[i] = '\0';
            break;
        }
    }
    start = 0;
    while(a[start] != '\0'){
        end = start;

        while(a[end] != ' ' && a[end] != '\0'){
            end++;
        }
        reverseword(&a[start],&a[end-1]);

        start = end;
        while(a[start == ' ']){
            start++;
        }
        printf("Reverserd string: %s",a);

        return 0;
    }
  void reverseword(char *start, char *end){
        char temp;
        if(start<end){
            temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
}