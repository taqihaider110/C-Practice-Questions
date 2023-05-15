#include<Stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number to find its factorial\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fact=fact*i;
    }
    printf("The Factorial of this %d is %d",n,fact);
}