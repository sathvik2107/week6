#include<stdio.h>
int main()
{
	int i=0;
	char str[50];
	printf("enter the string in uppercase ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A'&& str[i]<='Z'){
			str[i]=str[i]+32;
		}
	}
	printf("string in lowercase is %s ",str);
}
