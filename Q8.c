#include<Stdio.h>
void arrayrev(int arr[]){
	int temp;
	for(int i=0;i<7/2;i++){
		temp=arr[i];
		arr[i]=arr[6-i];
		arr[6-i]=temp;
	}
	
}
void arrayprint(int arr[]){
	for(int i=0;i<7;i++){
		printf("The value of element %d is %d\n",i,arr[i]);
	}
}
int main(){
	int arr[]={5,6,215,93,25,16,78};
	printf("Before reversing\n");
	arrayprint(arr);
	arrayrev(arr);
	printf("After reversing\n");
	arrayprint(arr);
}