#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char name[3][10]; /*이름을 저장할 2차원배열*/
	int kor[3], eng[3], math[3]; /*과목별 점수를 저장할 변수*/
	int total[3];
	double average[3];
	int first, second, third;

	for (int i = 0; i < 3; i++) {
		printf("%d 번째 학생 이름 : ", i + 1); scanf("%s", name[i]);
		printf("국어 점수 : "); scanf("%d", &kor[i]);
		printf("영어 점수 : "); scanf("%d", &eng[i]);
		printf("수학 점수 : "); scanf("%d", &math[i]);
		printf("\n");
	}
	total[0] = kor[0] + eng[0] + math[0];
	total[1] = kor[1] + eng[1] + math[1];
	total[2] = kor[2] + eng[2] + math[2];

	average[0] = total[0] / 3.0;
	average[1] = total[1] / 3.0;
	average[2] = total[2] / 3.0;

	if (average[0] < average[1])
	{
		if (average[1] < average[2])
		{
			first = 2;
			second = 1;
			third = 0;
		}
		else if (average[0] < average[2])
		{
			first = 1;
			second = 2;
			third = 0;
		}
		else
		{
			first = 1;
			second = 0;
			third = 2;
		}
	}
	else if (average[2] < average[1])
	{
		first = 0;
		second = 1;
		third = 2;
	}
	else if (average[2] < average[0])
	{
		first = 0;
		second = 2;
		third = 1;
	}
	else
	{
		first = 2;
		second = 0;
		third = 1;
	}
	printf("------------------------------------------\n");
	printf("이름    국어  영어  수학  총점  평균  등수\n");
	printf("------------------------------------------\n");
	printf("%s    %d   %d  %d  %d  %.1f  1등\n", name[first], kor[first], eng[first], math[first], total[first], average[first]);
	printf("%s    %d   %d  %d  %d  %.1f  2등\n", name[second], kor[second], eng[second], math[second], total[second], average[second]);
	printf("%s    %d   %d  %d  %d  %.1f  3등\n", name[third], kor[third], eng[third], math[third], total[third], average[third]);
}