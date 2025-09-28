#include <stdio.h>

int main()
{
    //alert (\a)
    printf("\a");

    //backspace (\b)
    printf("Hello \bWorld\n");

    //horizontal tab(\t) dan newline space (\n)
    printf("\tHello World\n");

    //carriage return (\r)
    printf("Hello Wo\rrld\n");

    //single and double quote (\") (\')
    printf("\"Hello World, my name is \'Rapha\'\"\n");

    //hexadecimal notation (\xdd)
    printf("\x41\n");

    //octal notation (\ddd)
    printf("\102\n");

    return 0;
}