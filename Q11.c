#include<Stdio.h>
int main(){
	int a=34;
	int *ptr=a;
	if(ptr!=NULL){
		printf("The address of a is %d and %p",a,ptr);
	}
	else{
		printf("The pointer is Null pointer and can't be dereferenced");
	}
}
