#include<stdio.h>
struct student{
    int id;
    char name[20];
    char dept[20];
    float cgpa;

} ob[100];
int main(){
    
    int n,i;
    //freopen("a.txt","r",stdin);
    printf("How many Student: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
    scanf("%d %s %s %f",&ob[i].id,ob[i].name,ob[i].dept,&ob[i].cgpa);
    }
    printf("\n%s \t%-20s \t%s \t%s\n","ID","Name","Dept","CGPA");
    for (i=0;i<n;i++){
    printf("%d \t%-20s \t%s \t%.2f\n",ob[i].id,ob[i].name,ob[i].dept,ob[i].cgpa);
    }

return 0;
}