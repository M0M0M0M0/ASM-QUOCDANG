#include <stdio.h>

int main() {
    int size;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &size);

    int player[size];
    for (int i = 0; i < size; i++) {
        printf("Vui long nhap phan tu thu %d vao mang: ", i + 1);
        scanf("%d", &player[i]);
    }
    int min;
    int temp = 0;
    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            min = player[i];
            temp = 1;
            break; 
        }
    }
    if (temp==1) {
        for (int i = 0; i < size; i++) {
            if (player[i] > 0 && player[i] < min) {
                min = player[i];
            }
        }
        printf("So nguyen duong nho nhat la %d\n", min);
    } else {
        printf("Mang khong co so nguyen duong nao.\n");
    }
}

