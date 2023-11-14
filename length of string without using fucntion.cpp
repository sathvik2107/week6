/*length of string without stlen*/
#include<stdio.h>
int main()
{
	int length=0;
	char str[]="hello world";
	while(str[length] !='\0'){
		length++;
	}
	printf("length of string is %d\n",length);
}
