#include<stdio.h>
struct student{
    int id;
    char name[30];
    char dept[20];
    float cgpa;
} std[100];
int t=0;
void insert(){
    printf("Enter the student information: ");
    scanf("%d %s %s %f",&std[t].id,std[t].name,std[t].dept,&std[t].cgpa);
    t++;

}
void view(){
    printf("\n%s \t%-20s \t%s \t%s\n","ID","Name","Dept","CGPA");
    for(int i=0;i<t;i++)
        printf("%d \t%-20s \t%s \t%.2f\n",std[i].id,std[i].name,std[i].dept,std[i].cgpa);

}
void search(){
    int Id,f=-1;
    printf("Enter your search Id: ");
    scanf("%d",&Id);
    for (int i=0;i<t;i++)
        if (Id == std[i].id){
            printf("\nInformation found\n");
            printf("\n%s \t%-20s \t%s \t%s\n","ID","Name","Dept","CGPA");
            printf("%d \t%-20s \t%s \t%.2f\n",std[i].id,std[i].name,std[i].dept,std[i].cgpa);
            f++;
            break;
        }
        if (f==-1)
        printf("Information not found");

}
void edit(){
int Id,f=-1;
    printf("Enter your Edit Id: ");
    scanf("%d",&Id);
    for (int i=0;i<t;i++)
        if (Id == std[i].id){
            printf("\n Edit the Information\n");
            scanf("%d %s %s %f",&std[i].id,std[i].name,std[i].dept,&std[i].cgpa);
            f++;
            break;
        }
        if (f==-1)
        printf("Information not found");
}
void delete(){

}

int main(){
    int n;
    do{
        printf("\n1.Insert\n2.View\n3.Search\n4.Edit\n5.Delelte\n6.Exit\nEnter Your Option: ");
        scanf("%d",&n);
        if (n==1)
            insert();
        else if (n==2)
            view();
        else if (n==3)
            search();
        else if(n==4)
            edit();
        else if (n==5)
            delete();
    }while(n<6);
    

}