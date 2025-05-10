/**
 * seta intervalo de bits com 0 ou 1 em variável de 32 bits
 * autor: Philippe Matias
*/

#include <stdio.h>
#include <stdbool.h>

#define NUM_BITS (sizeof(unsigned int) * 8)


/*-----------------------------------*/
typedef unsigned int u32;

/*-----------------------------------*/
u32 set_bits(bool w, u32 i, u32 j, u32 value)
{
    u32 flag = 0x80000000;
    flag = flag >> i;

    for (int i = 0; i < j; ++i) {
        if (w) value |= flag;
        else value &= ~flag;
        flag >>= 1;
    }

    return value;
}

/*-----------------------------------*/
void print_bits(u32 ch) //checa bit por bit e imprime
{
    u32 flag = 0x80000000; //1000 0000 0000 0000 0000 0000 0000 0000

    for (int i = 0; i < NUM_BITS; ++i) {
        int bit = (flag & ch) == flag;
        printf("%d", bit);
        flag = flag >> 1;
    }
}

/*-----------------------------------*/
int main()
{
    printf("| digite um inteiro 32-bit: ");
    u32 value;
    scanf(" %d", &value);

    printf("| zero ou um: ");
    int zero_one;
    scanf(" %d", &zero_one);

    printf("| digite o intervalo [ex: 1 16]: ");
    int i, j;
    scanf(" %d %d", &i, &j);

    printf("** valor: %d\n", value);
    printf("** bits: ");
    print_bits(value);
    printf("\n** intervalo de bits modificado: ");
    print_bits(set_bits(zero_one, i-1, j, value));

    return 0;
}
