#include <stdio.h>
#include "SimpleObject.cpp"

int main()
{
    SimpleObject simpleObject;
    int returnValue = simpleObject.SimpleMethod();
    printf("%d\n", returnValue);
}