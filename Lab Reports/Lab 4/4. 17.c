#include<stdio.h>
#include<string.h>
int main()
{
	char s[80];
	int length,i,vowel=0,consonant=0,space=0,fullstop=0;
	printf("Enter a string:\t");
	gets(s);
	length=strlen(s);
	for(i=0;i<length;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			vowel++;
		else if(s[i]==' ')
			space++;
		else if(s[i]=='.')
			fullstop++;
		else
			consonant++;
	}
	printf("\n The number of vowels are %d",vowel);
	printf("\n The number of consonant are %d",consonant);
}
