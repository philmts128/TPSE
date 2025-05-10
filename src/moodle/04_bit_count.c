/**
 * conta número de bits 0 ou 1 em variável de 32 bits
 * autor: Philippe Matias
*/

#include <stdio.h>
#include <stdbool.h>

#define NUM_BITS (sizeof(unsigned int) * 8)


/*-----------------------------------*/
typedef unsigned int u32;

/*-----------------------------------*/
int count_bits(bool w, u32 bits)
{
    int c = 0;
    u32 flag = 0x1;
    for (int i = 0; i < NUM_BITS; ++i)
    {
        if (w && (bits & flag) == flag) {
            c = c + 1;
         } else if (!w && (bits & flag) == 0) {
            c = c + 1;
        }
        flag = flag << 1;
    }

    return c;
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

    printf("** valor: %d\n", value);
    printf("** bits: ");
    print_bits(value);
    printf("\n** numeros de 1s: %d\n", count_bits(1, value));
    printf("** numeros de 0s: %d\n", count_bits(0, value));

    return 0;
}
