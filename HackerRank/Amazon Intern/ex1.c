#include <stdio.h>

int main(void)
{
	int x= 100, c=0;
	while(x)
	{
		c += x&1;
		c>>1;
	}
	printf("%d", c);
	return 0;
}

