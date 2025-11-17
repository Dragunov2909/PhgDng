#include <bits/stdc++.h>

int main() {
    double a, b;
    printf("Nhap 2 so: ");
    scanf("%lf %lf", &a, &b);

    if(b != 0) {
        double thuong = a / b;
        printf("Thuong cua %lf va %lf la: %lf\n", a, b, thuong);
    } else {
        printf("Loi: Khong the chia cho 0!\n");
    }

    return 0;
}

