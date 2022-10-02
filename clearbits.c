#include <stdio.h>
#include <stdint.h>

void printBits(size_t const size, void const * const ptr);

int main(void)
{
    uint32_t value = 255;
    // printf("Enter a value:\n");
    // scanf("%d", &value);

    // clear the first and 4th bit. 
    // 11101110 = 238
    uint32_t mask = 0xEE;
    uint32_t output = value & mask;

    printf("input: 0x%x \noutput: 0x%x \n", value, output);

    printBits(sizeof(output), &output);

    return 0;
}

void printBits(size_t const size, void const * const ptr) {
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}