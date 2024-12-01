#include<stdio.h>
int main(){
	int n, t, s, x, m, e, Value, position, xoa;
	int arr[100];
	while(1){
		printf("1. Nhap vao mang\n");
		printf("2. Hien thi mang\n");
		printf("3. Them vao mang\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Thoat\n");
		printf("Nhap lua chon cua ban: ");
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
			printf("\nNhap gia tri them: ");
		    scanf("%d", &Value);
		    printf("\nNhap vi tri them : ");
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
		
		    	printf("Mang sau khi them:\n ");
		    for (int i = 0; i < n; i++) {
		        printf("%d ", arr[i]);
		    }
		    printf("\n");
		    break;
		case 4:
				printf("\nNhap vi tri can thay the: ");
				scanf("%d", &s);
			if(s<n && s>0){
				printf("\nVi tri hop le");
				s++;
			}else{
				printf("\nVi tri khong hop le");
			}
			
				printf("Nhap gia tri thay the:\n ");
				scanf("%d", &m);
				arr[s] = m;
			
			for(int a=0; a<5; a++){
				printf("%2d", arr[a]);
			}
			break;
		case 5:
				printf("\nNhap vi tri can xoa: ");
		    	scanf("%d", &xoa);
		
		    if (xoa<0 || xoa>=n) {
		        printf("Vi tri xoa khong hop le!\n");
		        return 1;
		    }
		
		    for (int i = xoa; i < n-1; i++) {
		        arr[i] = arr[i+1];
		    }
		    	n--;
		
		    	printf("\nMang sau khi xoa: ");
		    for (int i=0; i < n; i++) {
		        printf("%d ", arr[i]);
		    }
		    	printf("\n");
		    	break;
		case 6:
			e++;
			break;
	}
			
	}
	return 0;
}
