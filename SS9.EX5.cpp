#include<stdio.h>
int main(){
	int n, sum, min=0, max=0, e, number, Value, position;
	int arr[100];
	int sumSNT = 0;
	while(1){
		printf("\n1.Nhap vao mang");
		printf("\n2.Hien thi mang");
		printf("\n3.In ra chan va tinh tong");
		printf("\n4.Tim lon nhat va nho nhat");
		printf("\n5.Tim SNT va tinh tong");
		printf("\n6.Tim so lan xut hien");
		printf("\n7.Them phan tu vao mang");
		printf("\n8.Thoat\n");
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &e);
		
		switch(e){
		
		case 1 :
			printf("\nNhap so phan tu muon nhap vao mang: ");
			scanf("%d", &n);
			
			printf("Nhap cac pha tu vao mang:\n ");
			for(int i=0; i<n; i++){
				printf("Nhap phan tu thu %d: ", i);
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			printf("Cac phan tu co trong mang:\n ");
			for(int i=0; i<n; i++){
				printf("%2d", arr[i]);	
			}
			break;
		case 3:
			printf("Cac phan tu chan trong mang la:\n ");
				for(int i=0; i<n; i++){
					if(i % 2 != 0){
						printf("%2d", arr[i]);
						sum += arr[i];
					} 
				}
				printf("\nTong cac phan tu chan trong mang la: %d", sum);
			break;
		case 4:
			printf("\nSo lon nhat trong mang la: ");
			for(int i=0; i<n; i++){
				if(arr[i]>max){
					max = arr[i];
				}
			}
			printf("%d", max);
			printf("\nSo nho nhat trong mang la: ");
			for(int i=0; i<n; i++){
				if(arr[i]<min){
					min = arr[i];
				}
			}
			printf("%d", min);
			break;
		case 5:
			printf("\nSNT trong mang: ");
            for (int i = 0; i < n; i++) {
                int SNT = arr[i];
                int KT = 1;
                if(SNT < 2){
                        KT = 0;
                }else{
                    for (int j = 2; j * j <= SNT; j++) {
                        if (SNT % j == 0) {
                            KT = 0;
                            break;
                            }
                        }
                    }

                    if (KT) {
                        printf("%2d ", SNT);
                        sumSNT+=SNT;
                    }
                }
                printf("\nTong cac SNT la: %d", sumSNT);
                break;
        case 6:
        	printf("Nhap so can duyet: ");
        	scanf("%d", &number);
        	int index = 0;
        	for(int i=0; i<n; i++){
        		if(number == arr[i]){
        			index++;
				}
			}
			printf("trong mang co %d phan tu %d", index, number);
			break;
		case 7:
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
		    break;
		case 8:
			printf("Thoat!");
			break;
			return 0;
		default: 
			printf("Lua chon khong hop le!");
			break;
			
		}
	}
}
