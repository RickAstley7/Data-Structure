#include <stdio.h>

// ���ȣ���� ���� ���丮��
int Factorial(int n);

int main(void) {
	
	int result;
	result = Factorial(4);
	// 4 * 3 * 2 * 1 = 24
	printf("%d\n", result);

	return 0;
}

// ���� n�� 1�̶�� 1�� ��ȯ �ƴ϶�� 
// �ڱ��ڽ� * n-1�� ��ȯ�Ѵ�.
int Factorial(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * Factorial(n - 1);
	}
}