#include <iostream>
#include <assert.h>
#include "TShirts.h"

char GetTShirtSize(int cms)
{
    char sizeName = '\0';
    if (cms < 38)
    {
        sizeName = 'S';
    }
    else if (cms > 38 && cms < 42)
    {
        sizeName = 'M';
    }
    else if (cms > 42)
    {
        sizeName = 'L';
    }

    return sizeName;
}