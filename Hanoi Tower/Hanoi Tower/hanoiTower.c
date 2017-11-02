#include <stdio.h>

void hanoiTower(int n, char A, char B, char C);

int main(void) {
	// �ϳ��� Ÿ�� �Լ� ����
	hanoiTower(3, 'A', 'B', 'C');
	return 0;
}

void hanoiTower(int n, char A, char B, char C) {
	if (n == 1) {
		printf("���� 1�� %c ���� %c �� �̵�\n", A, C);
	}
	else {
		hanoiTower(n - 1, A, C, B);
		printf("���� %d(��)�� %c ���� %c �� �̵�\n", n, A, C);
		hanoiTower(n - 1, B, A, C);
	}
}