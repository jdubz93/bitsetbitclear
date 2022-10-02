#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t userValue;
    printf("Enter 8 bit value:\n");
    scanf("%d", &userValue);

    // use hex value representation of binary.
    uint32_t mask = 0x90;

    uint32_t output = userValue | mask;

    // use %x to show hex values
    printf("input = 0x%x\noutput = 0x%x\n", userValue, output);

    return 0;
}