#include <stdio.h>

int main() {
	int n, i;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(n<2) {
		printf("%d khong phai la so nguyen to", n);
	} else {
		for(i=2; i<n; i++) {
			if(n%i==0) {
				break;
			}
		}
		if(i>n/2) {
			printf("%d la so nguyen to", n);
		} else {
			printf("%d khong la so nguyen to", n);
		}
	}
	return 0;
}
