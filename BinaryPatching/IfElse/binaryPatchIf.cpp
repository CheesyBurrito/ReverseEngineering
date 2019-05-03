#include <stdio.h>

void neverPrint()
{
	printf("This should never print!\n");
}

void alwaysPrint()
{
	printf("This should always print!\n");
}

int main()
{
    // Interesting: Compiler optimises by removing any statement that are know to always be false on compile time
    int value = 0;
    if(value == 1)
    {
        neverPrint();
	}
    else
    {
        alwaysPrint();
    }
}

