#include "main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
        _printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        _printf("%s\n", "really");
        int x = _printf("%%");
        printf("%d\n", x);

        return (0);
}