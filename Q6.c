/*Program to specify data of students*/
#include <stdio.h>
#include <conio.h>
struct student
{
char name[20],dept[20],course[20];
int roll, year_join;
}stud[450];
void main ()
{
int i,n;
printf("Enter the number of student(s)");
scanf("%d",&n);
printf("Enter the record of student(s)\n");
for(i=0;i<n;i++)
{
printf("Enter name\n");
gets(stud[i].name);
printf("Enter Department\n");
gets(stud[i].dept);
printf("Enter Roll no\n");
scanf("%d",&stud[i].roll);
printf("Enter year of joining\n");
scanf("%d", &stud[i].year_join);
printf("Enter course\n");
gets(stud[i].course);
}
printf("Data of students are");
for(i=0;i<n;i++)
{
printf("Name of student is %s\t",stud[i].name);
printf("Departemt of student is %s\t",stud[i].dept);
printf("Roll no of student is %d\t",stud[i].roll);
printf("Year of joining is %d\t",stud[i].year_join);
printf("Course of student is %s\t",stud[i].course);
}
getch();
}