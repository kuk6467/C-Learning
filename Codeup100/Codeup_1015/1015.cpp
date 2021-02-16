//[기초 / 입출력] 실수 한 개 입력받아 소수점 이하 둘째 자리까지 출력하기

#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.2lf", x);
    return 0;
}