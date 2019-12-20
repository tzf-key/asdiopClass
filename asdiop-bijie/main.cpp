#include <stdio.h>
#include <string.h>

int myFunc(int s1,int s2,int s3,int s4)
{
	int e = 0;
	e = s1 + s2 + s3 + s4;
	printf("11\n")
	return e;
}

int main()
{
	int a = 0x50;
	int b = 0x100;
	myFunc(a, b, 0x200, 0x300);
	printf("hello asdiop\n");
	return 0;
}