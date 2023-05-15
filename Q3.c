#include<Stdio.h>
void printstr(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
}
int main(){
	char str[]={'t','a','q','i','\0'};
	printstr(str);
}