#include <stdio.h>

int main(void) 
{
	char c;
	scanf("%c",&c);
	int lower,upper;
	lower=((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'));
	upper=((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'));
	if(lower||upper)
	{
		printf("%c is vowel",c);
		
	}
	
	else
	printf("%c is constant",c);
	return 0;
}
