#include<Stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number to find it's factorial:-\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The Factorial of %d is %d",n,fact);
}