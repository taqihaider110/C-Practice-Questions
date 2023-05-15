#include<Stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr =(int*)malloc(10*sizeof(int));
	for(int i=0;i<3;i++){
		printf("Enter the value no %d of this array \n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<3;i++){
		printf("The value at %d of this array is %d \n",i,ptr[i]);
	}
	free(ptr);
	int n;
	printf("Enter the size of an array you want to create\n");
	scanf("%d",&n);
	ptr =(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter the value no %d of this array \n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf("The value at %d of this array is %d \n",i,ptr[i]);
	}
}

