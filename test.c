#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <limits.h>
 
int main(void)
{
    unsigned int input;
    read(0, &input, 4);

    if(input < UINT_MAX >> 1)
    {
        if(input < UINT_MAX >> 2)
        {
            if(input < UINT_MAX >> 3)
            {
                raise(SIGSEGV);
            }
        }
    }
    return 0;
}
