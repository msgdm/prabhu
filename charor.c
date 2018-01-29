#include<stdio.h>
int main()
{
	char c;
	printf("enter the alphabet\n");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	printf("Alphabet%c\n",c);
	else
	printf("%c not a alphabet",c);
	return 0;
}
