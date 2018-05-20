#include <stdio.h>
#include <stdlib.h>

/***********************************************************/
/* Fonction qui affiche un binaire en un décimal 0 ou 1 **/
/***********************************************************/
int main(int argc, char *argv[])
{
    char binaryNumberChar;
    int decimalNumber = 0;

    while (binaryNumberString != '\n')
    {
    	scanf("%c", &binaryNumberChar);
    	if(bynaryNumberChar == '1') 
    		decimalNumber = decimalNumber * 2 + 1;
    	else
    		decimalNumber *= 2; 
    }
    printf("%d\n", decimalNumber);
    return 0;
}

