#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void auto_func();
//void static_func();
//
//int main()
//{
//    int i;
//
//    printf("일반 지역 변수(auto)를 사용한 함수...\n");
//    for (i = 0; i < 3; i++)
//    {
//        auto_func();
//    }
//
//    printf("정적 지역 변수(static)를 사용한 함수...\n");
//    for (i = 0; i < 3; i++)
//    {
//        static_func();
//    }
//}
//
//void auto_func()
//{
//    auto int a = 0;	// 지역 변수 선언과 초기화
//
//    a++;
//    printf("%d\n", a);
//}
//
//void static_func()
//{
//    static int a;		// 정적 지역 변수 선언
//
//    a++;				// a 값 1 증가
//    printf("%d\n", a);	// a 출력
//}

/* 8-1 실수를 제곱하여 반환하는 함수 double square(double) */
//#include <stdio.h>
//
//double square(double num) {
//	return num * num;
//}
//int main(void) {
//	double n;
//	printf("정수를 입력하세요: ");
//	scanf("%lf", &n);
//	printf("주어진 정수 %f의 제곱은 %f입니다", n, square(n));
//	return 0;
//}


/* 8-2 문자가 알파벳인지 아닌지 검사하는 함수 check_alpha() ('a' ~ 'z') */
//#include <stdio.h>
//
//void check_alpha(char text) {
//	if (text >= 'a' && text <= 'z') {
//		printf("%c는 알파벳 문자입니다.", text);
//	}
//}
//int main(void) {
//	char t;
//	printf("문자를 입력하시오: ");
//	scanf("%c", &t);
//	check_alpha(t);
//	
//	return 0;
//}


/* 8-18 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 연산 */
//#include <stdio.h>
//
//void print_option() {
//    printf("==================================\n");
//    printf("MENU\n");
//    printf("==================================\n");
//    printf("1.  덧셈\n");
//    printf("2.  뺄셈\n");
//    printf("3.  곱셈\n");
//    printf("4.  나눗셈\n");
//    printf("5.  나머지\n");
//}
//
//int add(int x, int y) {
//    return x + y;
//}
//int sub(int x, int y) {
//    return x - y;
//}
//int mul(int x, int y) {
//    return x * y;
//}
//int div(int x, int y) {
//    return x / y;
//}
//int rest(int x, int y) {
//    return x % y;
//}
//
//int main() {
//
//    while (1) {
//        int menu;
//        int a, b;
//        int result;
//        char input;
// 
//        print_option();
//        printf("원하는 메뉴를 선택하시오(1-5):");
//        scanf("%d", &menu);
//        printf("숫자 2개를 입력하시오:");
//        scanf("%d %d", &a, &b);
//
//        switch (menu) {
//        case 1:
//            result = add(a, b);
//            break;
//        case 2:
//            result = sub(a, b);
//            break;
//        case 3:
//            result = mul(a, b);
//            break;
//        case 4:
//            result = div(a, b);
//            break;
//        case 5:
//            result = rest(a, b);
//            break;
//        }
//
//        printf("연산결과: %d\n", result);
//        printf("계속하려면 y를 누르시오:");
//        scanf(" %c", &input);
//
//        /*if (input == 'y')
//            continue;
//        else
//            break;*/
// 
//        if (input != 'y')
//            break;
//    }
//}



/* 9-1 덧셈, 뺄셈, 곱셈, 나눗셈 (각 연산들이 몇 번씩 실행되었는지 기억하고 호출) */

/* 정적 지역 변수 사용*/
//#include <stdio.h>
//
//int add(int x, int y) {
//	static int cnt;	// 정적 지역 변수
//	cnt++;
//	printf("덧셈은 총 %d번 실행되었습니다.\n", cnt);
//	return x + y;
//}
//int sub(int x, int y) {
//	static int cnt; // 정적 지역 변수
//	cnt++;
//	printf("뺄셈은 총 %d번 실행되었습니다.\n", cnt);
//	return x - y;
//}
//int mul(int x, int y) {
//	static int cnt; // 정적 지역 변수
//	cnt++;
//	printf("곱셈은 총 %d번 실행되었습니다.\n", cnt);
//	return x * y;
//}
//int div(int x, int y) {
//	static int cnt; // 정적 지역 변수
//	cnt++;
//	printf("나눗셈은 총 %d번 실행되었습니다.\n", cnt);
//	return x / y;
//}
// 
//int main(void) {
//	while (1) {
//		int num1, num2;
//		char op;	
//
//		printf("연산을 입력하세요: ");
//		scanf("%d%c%d", &num1, &op, &num2);
//		switch (op) {
//		case '+':
//			printf("연산 결과: %d\n", add(num1, num2));
//			break;
//		case '-':
//			printf("연산 결과: %d\n", sub(num1, num2));
//			break;
//		case '*':
//			printf("연산 결과: %d\n", mul(num1, num2));
//			break;
//		case '/':
//			printf("연산 결과: %d\n", div(num1, num2));
//			break;
//		}
//	}
//	return 0;
//}

/* 전역 변수 사용 */
//#include <stdio.h>
//int add_cnt, sub_cnt, mul_cnt, div_cnt;		// 전역 변수
//
//int add(int x, int y) {
//	add_cnt++;
//	printf("덧셈은 총 %d번 실행되었습니다.\n", add_cnt);
//	return x + y;
//}
//int sub(int x, int y) {
//	sub_cnt++;
//	printf("뺄셈은 총 %d번 실행되었습니다.\n", sub_cnt);
//	return x - y;
//}
//int mul(int x, int y) {
//	mul_cnt++;
//	printf("곱셈은 총 %d번 실행되었습니다.\n", mul_cnt);
//	return x * y;
//}
//int div(int x, int y) {
//	div_cnt++;
//	printf("나눗셈은 총 %d번 실행되었습니다.\n", div_cnt);
//	return x / y;
//}
// 
//int main(void) {
//	while (1) {
//		int num1, num2;
//		char op;	
//
//		printf("연산을 입력하세요: ");
//		scanf("%d%c%d", &num1, &op, &num2);
//		switch (op) {
//		case '+':
//			printf("연산 결과: %d\n", add(num1, num2));
//			break;
//		case '-':
//			printf("연산 결과: %d\n", sub(num1, num2));
//			break;
//		case '*':
//			printf("연산 결과: %d\n", mul(num1, num2));
//			break;
//		case '/':
//			printf("연산 결과: %d\n", div(num1, num2));
//			break;
//		}
//	}
//	return 0;
//}



/* 9-2 주사위 100번 굴려서 각 눈이 몇 번 나왔는지 출력 / 주사위를 던지는 함수 (get_dice_face()) */
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void get_dice_face() {
//	int i, num = 0;
//	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
//	while (1) {
//		for (i = 0; i < 100; i++) {
//			num = rand() % 6 + 1;
//			if (num == 1)
//				n1++;
//			if (num == 2)
//				n2++;
//			if (num == 3)
//				n3++;
//			if (num == 4)
//				n4++;
//			if (num == 5)
//				n5++;
//			if (num == 6)
//				n6++;
//		}
//		if (n1 + n2 + n3 + n4 + n5 + n6 == 100)
//			break;
//	}
//	printf("1->%d\n", n1);
//	printf("2->%d\n", n2);
//	printf("3->%d\n", n3);
//	printf("4->%d\n", n4);
//	printf("5->%d\n", n5);
//	printf("6->%d", n6);
//}
//int main(void) {
//	srand(time(NULL));
//	get_dice_face();
//
//	return 0;
//}

/* 정적 지역 변수 사용 */
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void get_dice_face() {
//	int num;
//	static int n1, n2, n3, n4, n5, n6;
//	static int cnt;		// 호출 횟수
//
//	num = rand() % 6 + 1; // 1~6
//	cnt++;
//	if (num == 1)
//		n1++;
//	if (num == 2)
//		n2++;
//	if (num == 3)
//		n3++;
//	if (num == 4)
//		n4++;
//	if (num == 5)
//		n5++;
//	if (num == 6)
//		n6++;
//
//
//	if (cnt == 100) {
//		printf("1->%d\n", n1);
//		printf("2->%d\n", n2);
//		printf("3->%d\n", n3);
//		printf("4->%d\n", n4);
//		printf("5->%d\n", n5);
//		printf("6->%d", n6);
//	}
//}
// 
//int main() {
//	srand(time(NULL));
//	for(int i = 0; i < 100; i++)
//		get_dice_face();
//}



/* 9-3 로그인 비밀번호 3번 틀리면 "로그인 시도 횟수 초과" 출력하는 함수 check() 
   함수 안에 정적 변수 선언하여 작성 / 비밀번호 일치 여부를 0과 1로 반환 */

//#include <stdio.h>
//
//int check()
//{
//	static int call_count;
//	call_count++;
//
//	if (call_count > 3) {
//		printf("로그인 시도횟수 초과\n ");
//		return 0;
//	}
//
//	printf("비밀번호: ");
//	int n;
//	scanf("%d", &n);
//
//	if (n == 1234) {	// 비밀번호 일치하면 1 반환
//		return 1;
//	}
//	return 0;			// 비밀번호 일치하지 않으면 0 반환
//}
//
//int main(void)
//{
//	int result;
//	for (int i = 0; i < 4; i++) {
//		result = check();
//		if (result == 1) {
//			printf("로그인 성공!!\n ");
//			break;
//		}
//	}
//	return 0;
//}



/* 9-5 1~n까지의 합 계산 순환기법 이용(재귀함수) */
//#include <stdio.h>
//int sum(int n);
//
//int main()
//{
//	int num, result;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &num);
//
//	result = sum(num);
//
//	printf("1부터 %d까지의 합=%d\n", num, result);
//}
//
//int sum(int n)
//{
//	if (n != 0)
//		return n + sum(n - 1);
//	else
//		return n;
//}


/* 9-6 치수값 계산 함수 power(int base, int porwer_rasised) 순환기법 (재귀함수) / base ^ power_raised */
//#include <stdio.h>
//
//int power(int base, int power_raised) {
//	if (power_raised != 1) {
//		return base * power(base, power_raised - 1);
//	}
//	else {
//		return base;
//	}
//}
//int main(void) {
//	int base, raised;
//	printf("밑수: ");
//	scanf("%d", &base);
//	printf("지수: ");
//	scanf("%d", &raised);
//
//	printf("%d^%d = %d", base, raised, power(base, raised));
//	return 0;
//}


/* 9-8 정수의 자리수 계산 (재귀함수) */
//#include <stdio.h>
//
//int digits(int a) {
//	static int count = 1;	// 정적 지역 변수
//	if (a / 10 != 0) {
//		count++;
//		digits(a / 10);
//	}
//	return count;
//}
//int main(void) {
//	int num;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &num);
//	printf("자리수의 개수: %d", digits(num));
//	return 0;
//}

//#include <stdio.h>
////
////void print_line();		// 함수 선언
////
////int main()
////{
////    print_line();		// 함수 호출
////
////    printf("학번     이름     전공     학점\n");
////
////    print_line();		// 함수 호출
////}
////
////void print_line() {
////    for (int i = 0; i < 50; i++)		// 50번 반복하여 '-' 출력
////        printf("-");
////
////    printf("\n");
////}
//
//void fruit(int count)		// 호출 횟수를 매개변수에 저장
//{
//	printf("apple\n");
//	if (count == 3) return;		// 호출 횟수가 3이면 반환하고 함수가 종료된다.
//	fruit(count + 1);			// 재호출할 때 호출 횟수를 1 증가
//	printf("jam\n");
//}
//
//int main() {
//	fruit(1);
//}

#include <stdio.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	int i1; int i2;

	for (int i = 0; i < 100;i++)
	{
		i2 = rand() % 3;
		i1 = rand() % 3;
		printf("%d", i1);
		printf("%d\n", i2);
	}
}