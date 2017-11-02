#include <stdio.h>

// 재귀호출을 통한 팩토리얼
int Factorial(int n);

int main(void) {
	
	int result;
	result = Factorial(4);
	// 4 * 3 * 2 * 1 = 24
	printf("%d\n", result);

	return 0;
}

// 만약 n이 1이라면 1을 반환 아니라면 
// 자기자신 * n-1을 반환한다.
int Factorial(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * Factorial(n - 1);
	}
}