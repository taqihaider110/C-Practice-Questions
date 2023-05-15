#include<Stdio.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
int main(){
	int a=21,b=12;
	printf("%d and %d before swap\n",a,b);
	swap(&a,&b);
	printf("%d and %d after swap\n",a,b);
	
}