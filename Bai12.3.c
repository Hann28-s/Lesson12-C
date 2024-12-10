#include <stdio.h>

int tinhGiaiThua(int n) {
    int ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int n;

    printf("Nhap so nguyen ban chon: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Phai la so nguyen duong.\n");
    } else {
        int giaiThua = tinhGiaiThua(n);
        printf("Giai thua %d là: %d\n", n, giaiThua);
    }

    return 0;
}
