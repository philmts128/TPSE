/*
** macro que verifica se caractere é maiusculo.
** autor: Philippe Matias 
*/

#include <stdio.h>

/*--------------------------------------------*/
#define IS_UPPER(ch) (ch >= 'A' && ch <= 'Z')
 

/*--------------------------------------------*/
int main()
{
	char ch;
	printf("| digite um caractere: ");
	scanf(" %c", &ch);
	
	if (IS_UPPER(ch))
		printf("| %c eh maiusculo!\n", ch);
	else
		printf("| %c eh minusculo ou outro tipo de caractere!\n", ch);
	
	return 0; 
}