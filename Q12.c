#include<Stdio.h>
int ispalindrome(int num){
	int rev=0;
	int original=num;
	while(num!=0){
		rev=rev*10 + num%10;
		num=num/10;
	}
	printf("The reversed number is %d\n",rev);
	if(original==rev){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int num;
	printf("Enter the number to check whether it is a palindrome or not\n");
	scanf("%d",&num);
	if(ispalindrome(num)){
		printf("This number is a palindrome\n");
	}
	else{
		printf("This number is not a palindrome\n");
	}
}