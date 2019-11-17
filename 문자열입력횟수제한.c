#include <stdio.h>
void main()
{
	int pos_num = 100, num = 0, i, temp_num;
	char num_string[4] = "123";

	for (i = 0; i < 3; i++) {
		temp_num = num_string[i] - '0';
		num = num + temp_num + pos_num;
		pos_num = pos_num / 10;
	}
	printf(" %s -> %d\n", num_string, num);
}