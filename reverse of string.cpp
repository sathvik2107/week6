#include<stdio.h>
int main()
{
	int i,j,l=0;
	char str[50],t;
	printf("enter a string ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		l++;
		
	}
	for(i=0,j=l-1;i<j;i++,j--){
		t=str[i];
		str[i]=str[j];
		str[j]=t;
	}
	printf("reversed string is %s ",str);
	
}
