/*문제
두 자연수 A와 B가 주어진다.이때, A + B, A - B, A* B, A / B(몫), A% B(나머지)를 출력하는 프로그램을 작성하시오.

입력
두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10, 000)

출력
첫째 줄에 A + B, 둘째 줄에 A - B, 셋째 줄에 A* B, 넷째 줄에 A / B, 다섯째 줄에 A% B를 출력한다.
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int mod = a % b;

	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%d\n", div);
	printf("%d\n", mod);

	//printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
}