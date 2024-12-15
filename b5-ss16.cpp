#include <stdio.h>

void capNhatPhanTu(int *mang, int kichThuoc, int giaTriMoi, int viTri) {
    if (viTri >= 0 && viTri < kichThuoc) {
        *(mang + viTri) = giaTriMoi; 
    } else {
        printf("Vi tri can cap nhat khong hop le!\n"); 
    }
}
int main() {
    int mang[] = {10, 20, 30, 40, 50}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    int viTri, giaTriMoi;
    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &viTri);
    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTriMoi);
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

