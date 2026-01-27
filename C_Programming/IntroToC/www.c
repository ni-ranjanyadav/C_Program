#include<stdio.h>
struct student{
    int id;
    char name;
    float marks;
};
int main(){
 struct student s[3];
 int i;
 for(i=0;i<3;i++){
    printf("enter details of student %d:\n",i+1);
 }
 scanf("%d", &s[i].id );
printf("name: ");
scanf("%s",s[i].name);
printf("marks: ");
scanf("%f" , &s[i].marks);
printf ("%f", &s[i]. marks);
printf("student details:\n");
for (i=0;i<3;i++){
    printf("id: %d,name :%s, name: %s marks: k%2f \n ", s[i].id, s[i].name ,  s[i]. marks);}
    return 0;}