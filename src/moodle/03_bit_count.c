/**
 * conta número de bits 1 em um byte
 * autor: Philippe Matias
*/

#include <stdio.h>


/*-----------------------------------*/
typedef unsigned char byte;

/*-----------------------------------*/
int count_one_bits(byte b)
{
    int c = 0;
    byte flag = 0x1;
    for (int i = 0; i < 8; ++i) {
        c += (int)((b & flag) == flag);
        flag = flag << 1;
    }

    return c;
}

/*-----------------------------------*/
int main()
{
    byte values[] =
    {
        0xA, //2
        0xF, //4
        0x1, //1
        0x3 //2
    };

    printf("valor: %d -- bits 1: %d\n", values[0], count_one_bits(values[0]));
    printf("valor: %d -- bits 1: %d\n", values[1], count_one_bits(values[1]));
    printf("valor: %d -- bits 1: %d\n", values[2], count_one_bits(values[2]));
    printf("valor: %d -- bits 1: %d\n", values[3], count_one_bits(values[3]));

    return 0;
}
