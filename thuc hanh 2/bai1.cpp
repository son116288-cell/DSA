#include <stdio.h>
#include <stdlib.h>
int main() {
    int soluong;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &soluong);
    float *mang = (float *)malloc(soluong * sizeof(float));
    printf("Nhap cac phan tu:\n");
    for (int chiso = 0; chiso < soluong; chiso++) {
        scanf("%f", mang + chiso);
    }
    printf("Cac phan tu trong mang la:\n");
    for (int chiso = 0; chiso < soluong; chiso++) {
        printf("%.2f ", *(mang + chiso));
    }
    free(mang);
   return 0;
}
