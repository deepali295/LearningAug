#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> //tolower func in this
int main()
{
char character;
printf("Enter a character: ");
scanf(" %c",&character);

character= tolower(character);

switch(character)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	printf("The char is a vowel\n");
	break;
	default:
	if(character>='a' && character<='z')
		printf("The character is a consonent\n");
	else
		printf("Enter a valid alphabet character\n");
	break;
}
return 0;
}
