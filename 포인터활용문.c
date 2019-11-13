#include <stdio.h>
void main()
{
	int t = 0;
	char a = 0x12, b = 0x34;
	short c = 0x5678;
	short d = 0;
	char* add = (char*)& d;
	*add = b;
	*(add + 1) = a;
	short *temp = (short*)& t;
	*temp = c;
	*(temp + 1) = (short*)d;
	printf("%X", t);
}