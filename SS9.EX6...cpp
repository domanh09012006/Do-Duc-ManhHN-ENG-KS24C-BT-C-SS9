#include<stdio.h>

int main() {
    int n, e, a, b, sum = 0;
    int array[100][100];

    while(1) {
        printf("\n1.Nhap vao mang");
        printf("\n2.Hien thi mang");
        printf("\n3.In ra so le va tinh tong");
        printf("\n4.In ra phan tu duong bien va tinh tich");
        printf("\n5.In ra phan tu duong cheo chinh");
        printf("\n6.In ra phan tu duong cheo phu");
        printf("\n7.In ra dong co tong gia tri lon nhat");
        printf("\n8.Thoat\n");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &e);
        
        switch(e) {
            case 1:
                printf("Nhap gia tri rows cho mang: ");
                scanf("%d", &a);
                printf("Nhap gia tri cols cho mang: ");
                scanf("%d", &b);
                for(int i = 0; i < a; i++) {
                    for(int j = 0; j < b; j++) {
                        printf("array[%d][%d]: ", i, j);
                        scanf("%d", &array[i][j]);
                    }
                }
                break;
            case 2:
                printf("Cac phan tu trong mang la:\n");
                for(int i = 0; i < a; i++) {
                    for(int j = 0; j < b; j++) {
                        printf("%2d ", array[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                sum = 0;
                printf("Cac so le trong mang la: ");
                for(int i = 0; i < a; i++) {
                    for(int j = 0; j < b; j++) {
                        if(array[i][j] % 2 != 0) {
                            printf("%2d ", array[i][j]);
                            sum += array[i][j];
                        }
                    }
                }
                printf("\nTong cac so le trong mang la: %d", sum);
                break;
            case 4:
                {
                    int Tich = 1; // Kh?i t?o Tích = 1 thay vì 0
                    printf("Cac phan tu duong bien cua mang: ");
                    for(int i = 0; i < a; i++) {
                        for(int j = 0; j < b; j++) {
                            if(i == 0 || i == a-1 || j == 0 || j == b-1) {
                                printf("%2d ", array[i][j]);
                                Tich *= array[i][j];
                            }
                        }
                    }
                    printf("\nTich cac phan tu duong bien: %d", Tich);
                }
                break;
            case 5:
                if(a == b) {
                    printf("Cac phan tu nam tren duong cheo chinh la: ");
                    for(int i = 0; i < a; i++) {
                        printf("%2d ", array[i][i]);
                    }
                } else {
                    printf("Day khong phai ma tran vuong!");
                }
                break;

            case 6:
                if(a != b){
                    printf("Day khong phai ma tran vuong\n");
                } else {
                    printf("Cac phan tu nam tren duong cheo phu la: ");
                    for(int i = 0; i < a; i++) {
                        printf("%2d ", array[i][a-1-i]);
                    }
                }
                break;
            case 7:
                printf("\nThoat\n");
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }
}

