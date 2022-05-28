/* 5 ÀÔ·Â n = 5
   °ø¹é °¹¼ö | º° °¹¼ö
1 |     4          1
2 |     3          3
3 |     2          5
4 |     1          7
5 |     0          9
i |    n-i       2i-1
*/

#include <stdio.h>

int main() {
	int i, j;
	int n = 5;

	for (i = 1; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2*i-1; j++)
			printf("*");
		printf("\n");
	}
}