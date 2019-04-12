#include <stdio.h>

class SimpleObject
{
    public:
        int SimpleMethod()
        {
            printf("Call from inner method!\n");
            return 10;
        }
};