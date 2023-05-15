#include <stdio.h>
#include <conio.h>
struct student{
	char name[20],dept[20],course[20];
	int roll, year_join;
}stud[450];
void student_year(int year){
	printf("\n Search name of the following year students: ");
	scanf("%d",&year);
	printf("The Name of the students\n------------------\n");
	for(int i=0;i<450;i++){
		if(stud[i].year_join==year){
			printf("%s\n",stud[i].name);
		}
	}
}
void student_rollno(int rn){
	printf("\n Search Roll no for the whole data of the students: ");
	scanf("%d",&rn);
	printf("The Data of the following student\n------------------\n");
	for(int i=0;i<450;i++){
		if(stud[i].roll==rn){
			printf("\nName of student is %s \n",stud[i].name);
			printf("Departemt of student is %s\n ",stud[i].dept);
			printf("Roll no of student is %d \n",stud[i].roll);
			printf("Year of joining is %d \n",stud[i].year_join);
			printf("Course of student is %s\n ",stud[i].course);
		}
	}
}
void main (){
	int i,n,year;
	printf("Enter the number of student(s):");
	scanf("%d",&n);
	printf("Enter the record of student(s)\n");
	for(i=0;i<n;i++){
		printf("Enter name:");
		scanf("%s",&stud[i].name);
		printf("Enter Department:");
		scanf("%s",&stud[i].dept);
		printf("Enter Roll no:");
		scanf("%d",&stud[i].roll);
		printf("Enter year of joining:");
		scanf("%d", &stud[i].year_join);
		printf("Enter course:");
		scanf("%s",&stud[i].course);
		}		
	printf("\n-------------------\n");
	printf("\nData of all students\n");
	for(i=0;i<n;i++){
	printf("\nName of student is %s \n",stud[i].name);
	printf("Departemt of student is %s\n ",stud[i].dept);
	printf("Roll no of student is %d \n",stud[i].roll);
	printf("Year of joining is %d \n",stud[i].year_join);
	printf("Course of student is %s\n ",stud[i].course);
	}
	printf("\n-------------------\n");
	student_year(stud[i].name);
	getch();
	student_rollno(stud[i].roll);
	getch();
	}