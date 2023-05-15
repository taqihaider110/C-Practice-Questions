#include<Stdio.h>
#include<string.h>
int main(){
	char s1[]="Taqi";
	char s2[]="Haider";
	char s3[]={};
	printf("The strcmp for s1 and s2 returned %d\n",strcmp(s1,s2));//%d use for askee value
	puts(strcat(s1,s2));
	printf("The Length for string s1 is %d and s2 is %d\n",strlen(s1),strlen(s2));
	printf("The reversed string for s1 is %s and s2 is %s\n",strrev(s1),strrev(s2));
	strcpy(s3,strcat(s2,s1));
	puts(s3);
}