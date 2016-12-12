#include <stdio.h>
#include "platform.h"

void print(char *str);

int main()
{
    init_platform();
    int first = 0;
    int second = 1;
    int next;
    int c;
    for( c = 0; c < 5; ++c)
    {
    	if(c <= 1)
    	{
    		next = c;
    	}
    	else
    	{
    		next = first + second;
    		first = second;
    		second = next;
    	}
    	xil_printf("%d\r\n", next);
    }

    cleanup_platform();

    return 0;
}
