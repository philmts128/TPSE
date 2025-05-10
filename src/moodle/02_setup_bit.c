/**
* ativa segundo bit (do mais significativo para o menos significativo) em uma vriável do tipo char
* autor: Philippe Matias
*/

#include <stdio.h>

/*-----------------------------------*/
typedef unsigned char byte;

/*-----------------------------------*/
void print_bits(char ch) //checa bit por bit e imprime
{
    byte flag = 0x80; //1000 0000 em binário

    for (int i = 0; i < 8; ++i) {
        int bit = (flag & ch) == flag;
        printf("%d", bit);
        flag = flag >> 1;
    }
}

/*-----------------------------------*/
int main()
{
    byte reg = 0x0;   //0b00000000
    byte flag = 0x1; //0b00000001
    reg |= (flag << 1); //seta o segundo bit com OR
    print_bits(reg); //imprime 0100 0000, resultado esperado
    return 0;
}
