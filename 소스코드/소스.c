#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void auto_func();
//void static_func();
//
//int main()
//{
//    int i;
//
//    printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
//    for (i = 0; i < 3; i++)
//    {
//        auto_func();
//    }
//
//    printf("���� ���� ����(static)�� ����� �Լ�...\n");
//    for (i = 0; i < 3; i++)
//    {
//        static_func();
//    }
//}
//
//void auto_func()
//{
//    auto int a = 0;	// ���� ���� ����� �ʱ�ȭ
//
//    a++;
//    printf("%d\n", a);
//}
//
//void static_func()
//{
//    static int a;		// ���� ���� ���� ����
//
//    a++;				// a �� 1 ����
//    printf("%d\n", a);	// a ���
//}

/* 8-1 �Ǽ��� �����Ͽ� ��ȯ�ϴ� �Լ� double square(double) */
//#include <stdio.h>
//
//double square(double num) {
//	return num * num;
//}
//int main(void) {
//	double n;
//	printf("������ �Է��ϼ���: ");
//	scanf("%lf", &n);
//	printf("�־��� ���� %f�� ������ %f�Դϴ�", n, square(n));
//	return 0;
//}


/* 8-2 ���ڰ� ���ĺ����� �ƴ��� �˻��ϴ� �Լ� check_alpha() ('a' ~ 'z') */
//#include <stdio.h>
//
//void check_alpha(char text) {
//	if (text >= 'a' && text <= 'z') {
//		printf("%c�� ���ĺ� �����Դϴ�.", text);
//	}
//}
//int main(void) {
//	char t;
//	printf("���ڸ� �Է��Ͻÿ�: ");
//	scanf("%c", &t);
//	check_alpha(t);
//	
//	return 0;
//}


/* 8-18 ����, ����, ����, ������, ������ ���� */
//#include <stdio.h>
//
//void print_option() {
//    printf("==================================\n");
//    printf("MENU\n");
//    printf("==================================\n");
//    printf("1.  ����\n");
//    printf("2.  ����\n");
//    printf("3.  ����\n");
//    printf("4.  ������\n");
//    printf("5.  ������\n");
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
//        printf("���ϴ� �޴��� �����Ͻÿ�(1-5):");
//        scanf("%d", &menu);
//        printf("���� 2���� �Է��Ͻÿ�:");
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
//        printf("������: %d\n", result);
//        printf("����Ϸ��� y�� �����ÿ�:");
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



/* 9-1 ����, ����, ����, ������ (�� ������� �� ���� ����Ǿ����� ����ϰ� ȣ��) */

/* ���� ���� ���� ���*/
//#include <stdio.h>
//
//int add(int x, int y) {
//	static int cnt;	// ���� ���� ����
//	cnt++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", cnt);
//	return x + y;
//}
//int sub(int x, int y) {
//	static int cnt; // ���� ���� ����
//	cnt++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", cnt);
//	return x - y;
//}
//int mul(int x, int y) {
//	static int cnt; // ���� ���� ����
//	cnt++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", cnt);
//	return x * y;
//}
//int div(int x, int y) {
//	static int cnt; // ���� ���� ����
//	cnt++;
//	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", cnt);
//	return x / y;
//}
// 
//int main(void) {
//	while (1) {
//		int num1, num2;
//		char op;	
//
//		printf("������ �Է��ϼ���: ");
//		scanf("%d%c%d", &num1, &op, &num2);
//		switch (op) {
//		case '+':
//			printf("���� ���: %d\n", add(num1, num2));
//			break;
//		case '-':
//			printf("���� ���: %d\n", sub(num1, num2));
//			break;
//		case '*':
//			printf("���� ���: %d\n", mul(num1, num2));
//			break;
//		case '/':
//			printf("���� ���: %d\n", div(num1, num2));
//			break;
//		}
//	}
//	return 0;
//}

/* ���� ���� ��� */
//#include <stdio.h>
//int add_cnt, sub_cnt, mul_cnt, div_cnt;		// ���� ����
//
//int add(int x, int y) {
//	add_cnt++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", add_cnt);
//	return x + y;
//}
//int sub(int x, int y) {
//	sub_cnt++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", sub_cnt);
//	return x - y;
//}
//int mul(int x, int y) {
//	mul_cnt++;
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n", mul_cnt);
//	return x * y;
//}
//int div(int x, int y) {
//	div_cnt++;
//	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", div_cnt);
//	return x / y;
//}
// 
//int main(void) {
//	while (1) {
//		int num1, num2;
//		char op;	
//
//		printf("������ �Է��ϼ���: ");
//		scanf("%d%c%d", &num1, &op, &num2);
//		switch (op) {
//		case '+':
//			printf("���� ���: %d\n", add(num1, num2));
//			break;
//		case '-':
//			printf("���� ���: %d\n", sub(num1, num2));
//			break;
//		case '*':
//			printf("���� ���: %d\n", mul(num1, num2));
//			break;
//		case '/':
//			printf("���� ���: %d\n", div(num1, num2));
//			break;
//		}
//	}
//	return 0;
//}



/* 9-2 �ֻ��� 100�� ������ �� ���� �� �� ���Դ��� ��� / �ֻ����� ������ �Լ� (get_dice_face()) */
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

/* ���� ���� ���� ��� */
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void get_dice_face() {
//	int num;
//	static int n1, n2, n3, n4, n5, n6;
//	static int cnt;		// ȣ�� Ƚ��
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



/* 9-3 �α��� ��й�ȣ 3�� Ʋ���� "�α��� �õ� Ƚ�� �ʰ�" ����ϴ� �Լ� check() 
   �Լ� �ȿ� ���� ���� �����Ͽ� �ۼ� / ��й�ȣ ��ġ ���θ� 0�� 1�� ��ȯ */

//#include <stdio.h>
//
//int check()
//{
//	static int call_count;
//	call_count++;
//
//	if (call_count > 3) {
//		printf("�α��� �õ�Ƚ�� �ʰ�\n ");
//		return 0;
//	}
//
//	printf("��й�ȣ: ");
//	int n;
//	scanf("%d", &n);
//
//	if (n == 1234) {	// ��й�ȣ ��ġ�ϸ� 1 ��ȯ
//		return 1;
//	}
//	return 0;			// ��й�ȣ ��ġ���� ������ 0 ��ȯ
//}
//
//int main(void)
//{
//	int result;
//	for (int i = 0; i < 4; i++) {
//		result = check();
//		if (result == 1) {
//			printf("�α��� ����!!\n ");
//			break;
//		}
//	}
//	return 0;
//}



/* 9-5 1~n������ �� ��� ��ȯ��� �̿�(����Լ�) */
//#include <stdio.h>
//int sum(int n);
//
//int main()
//{
//	int num, result;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &num);
//
//	result = sum(num);
//
//	printf("1���� %d������ ��=%d\n", num, result);
//}
//
//int sum(int n)
//{
//	if (n != 0)
//		return n + sum(n - 1);
//	else
//		return n;
//}


/* 9-6 ġ���� ��� �Լ� power(int base, int porwer_rasised) ��ȯ��� (����Լ�) / base ^ power_raised */
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
//	printf("�ؼ�: ");
//	scanf("%d", &base);
//	printf("����: ");
//	scanf("%d", &raised);
//
//	printf("%d^%d = %d", base, raised, power(base, raised));
//	return 0;
//}


/* 9-8 ������ �ڸ��� ��� (����Լ�) */
//#include <stdio.h>
//
//int digits(int a) {
//	static int count = 1;	// ���� ���� ����
//	if (a / 10 != 0) {
//		count++;
//		digits(a / 10);
//	}
//	return count;
//}
//int main(void) {
//	int num;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &num);
//	printf("�ڸ����� ����: %d", digits(num));
//	return 0;
//}

//#include <stdio.h>
////
////void print_line();		// �Լ� ����
////
////int main()
////{
////    print_line();		// �Լ� ȣ��
////
////    printf("�й�     �̸�     ����     ����\n");
////
////    print_line();		// �Լ� ȣ��
////}
////
////void print_line() {
////    for (int i = 0; i < 50; i++)		// 50�� �ݺ��Ͽ� '-' ���
////        printf("-");
////
////    printf("\n");
////}
//
//void fruit(int count)		// ȣ�� Ƚ���� �Ű������� ����
//{
//	printf("apple\n");
//	if (count == 3) return;		// ȣ�� Ƚ���� 3�̸� ��ȯ�ϰ� �Լ��� ����ȴ�.
//	fruit(count + 1);			// ��ȣ���� �� ȣ�� Ƚ���� 1 ����
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