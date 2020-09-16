#include<stdio.h>
#include "primeNumber.h"

int main(void)
{
	int n,p;
	printf("enter positive number to be checked");
	scanf("%d",&n);
	p = primeNumber(n);
	switch(p)
	{
    case 1:
        printf("prime");
    case 0:
        printf("negative number");
    case -1:
        printf("not prime");
	}
	return 0;
}
