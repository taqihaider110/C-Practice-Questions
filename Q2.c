#include<Stdio.h>
int func1(int array[]){
	for(int i=0;i<5;i++){
		printf("The Value at %d is %d\n",i,array[i]);
	}
}
int main(){
	int arr[]={23,15,8,9,19};
	func1(arr);
}