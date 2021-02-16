#include <stdio.h>
// 1014 : [기초 - 입출력] 문자 2개 입력받아 순서 바꿔 출력하기
int main()
{
	int a, b;
	scanf("%c %c", &a, &b);
	printf("%c %c", b, a);
	return 0;
}