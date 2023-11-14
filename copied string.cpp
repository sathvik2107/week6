#include<stdio.h>
int main()
{
	int i=0;
	char str1[50],str2[50];
	scanf("%[^\n]s",str1);
	scanf("%[^\n]s",str2);
	for(i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("copied string is %s\n",str2);
	
}
