#include<stdio.h>
int sum(int a, int b){
	return a + b;
}
int main(){
	printf("The sum of 1 and 2 is %d\n",sum(1,2));
	int(*fptr)(int,int);
	fptr=&sum;
	int d=(*fptr)(4,6);
	printf("The Value of d is %d\n",d);
	
}