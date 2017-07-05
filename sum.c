#include "sum.h"

int sum(int n)
{
    int res = 0, i;
    for(i=1;i<=n;i++)
    {
        res += i;
    }
    return res;
}
