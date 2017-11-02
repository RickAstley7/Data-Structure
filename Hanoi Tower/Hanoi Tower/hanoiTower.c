#include <stdio.h>

void hanoiTower(int n, char A, char B, char C);

int main(void) {
	// 하노이 타워 함수 실행
	hanoiTower(3, 'A', 'B', 'C');
	return 0;
}

void hanoiTower(int n, char A, char B, char C) {
	if (n == 1) {
		printf("원반 1을 %c 에서 %c 로 이동\n", A, C);
	}
	else {
		hanoiTower(n - 1, A, C, B);
		printf("원반 %d(을)를 %c 에서 %c 로 이동\n", n, A, C);
		hanoiTower(n - 1, B, A, C);
	}
}