#include<stdio.h>
int main()
{
	int i,c=0;
	char s[50],ch;
	printf("enter the main string ");
	scanf("%s",s);
	printf("enter the character ");
	scanf(" %c",&ch); //space before %c is to consume the newline character
	for(i=0;s[i]!='\0';i++){
			if(s[i]==ch){
				c++;
			}
	}
	printf("occurence of %c in %s is %d times ",ch,s,c);
}
