#include <stdio.h>

int main() {
    int arr[100];
    int n, xoa ;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (tu 0 den %d): ", n-1);
    scanf("%d", &xoa);

    if (xoa<0 || xoa>=n) {
        printf("Vi tri xoa khong hop le!\n");
        return 1;
    }

    for (int i = xoa; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

