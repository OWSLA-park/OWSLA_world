#include <stdio.h>
/*이 함수의 return값이 1이면 정상입력 0이면 초과입력*/
int GetMyString(char buffer[], int limit)/*buffer는 사용자가 입력한 문자열을 저장할 배열, limit는 최대 입력 가능한 문자의 개수*/
{
	int i;
	for (i = 0; i < limit; i++) { /*최대 개수(9개)만큼 반복함*/
		buffer[i] = getchar();
		if (buffer[i] == '\n') { /*[Enter] 키를 입력하면*/
			buffer[i] = 0; /*[Enter]키를 입력한 위치에 0을 넣어서 문자열을 완성함*/
			return 1; /*1을 반환해 정상 입력 했음을 알림*/
		}
	}
	buffer[i] = 0;
	rewind(stdin); /*입력 버퍼에 남아있는 문자들을 제거함*/
	return 0; /*0을 반환해 입력 초과 현상이 발생했음을 알림*/
}

void main()
{
	char temp[10];
	int state;
	state = GetMyString(temp, 9); /*사용자에게 최대 9까지만 입력 받겠다고 제한함*/

	if (state == 1) printf("input : %s\n", temp); /*정상입력시 출력*/
	else printf("input : %s -> out of range\n", temp); /*초과입력시 출력*/
}