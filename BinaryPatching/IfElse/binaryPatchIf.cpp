#include <stdio.h>

int main()
{
    // Interesting: Compiler optimises by removing any statement that are know to always be false on compile time
    int value = 0;
    if(value == 1)
    {
        printf("This should never print!\n");
    }
    else
    {
        printf("This should always print!\n");
    }
}