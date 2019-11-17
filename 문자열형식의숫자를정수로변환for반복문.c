#include <stdio.h>
#include <string.h>
void main()
{
	int pos_num = 1, num = 0, i, count;
	char num_string[4] = "123";
	count = strlen(num_string);
	for (i = 0; i < count - 1; i++) {
		pos_num = pos_num * 10; /*pos_num = 100*/
	}
	for (i = 0; i < count; i++) {
		num = num + (num_string[i] - '0') * pos_num; /*num = 100, 120, 123*/
		pos_num = pos_num / 10; /*pos_num = 10, 1, 0*/
	}
	printf(" %s -> %d\n", num_string, num);
}