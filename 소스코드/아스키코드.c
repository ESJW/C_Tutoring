/*문제
알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.

입력
알파벳 소문자, 대문자, 숫자 0-9 중 하나가 첫째 줄에 주어진다.

출력
입력으로 주어진 글자의 아스키 코드 값을 출력한다.
*/

/*
0 : 48
~
9 : 57

A : 65
~
Z : 90

a : 97
~
z : 122
*/
#include <stdio.h>

int main() {
	/*char ch;
	scanf("%c", &ch);
	printf("%d", ch);*/

	//int num;
	//scanf("%d", &num);
	//printf("%c", num);

	int n=97;
	printf("%c", n);
	printf("%c", n + 1);
	printf("%c", n + 2);
}