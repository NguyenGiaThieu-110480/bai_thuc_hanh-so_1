#include <stdio.h>

int main() {
	int a, b, a0, b0, r, bcnn;
	printf("Nhap hai so nguyen duong: ");
	scanf("%d%d", &a, &b);
	a0 = a;
	b0 = b;
	while(b!=0) {
		r = a%b;
		a = b;
		b = r;
	}
	bcnn= a0 * b0 / a;
	printf("Boi chung nho nhat la: %d", bcnn);
	return 0;
}
