#include<stdio.h>
int main()
{
	int i,j;
	char str1[50],str2[50];
	printf("enter the first string \n");
	scanf("%s",str1);
    printf("enter the second string \n");
    scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++){
		}
		for(j=0;str2[j]!='\0';j++,i++){
			str1[i]=str2[j];
		}
	str1[i]='\0';
	printf("concatenated string is %s\n",str1);
}
