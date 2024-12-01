#include <stdio.h>

int main() {
    int arr[100];
    int n, Value, position;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri them: ");
    scanf("%d", &Value);
    printf("Nhap vi tri them : ", n);
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Vi tri them khong hop le!\n");
        return 1;
    }

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = Value;
    n++;

    printf("Mang sau khi them: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


}

