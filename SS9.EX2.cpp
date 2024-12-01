#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int i=0, n, m;
	for(int a=0; a<5; a++){
		printf("%2d", arr[a]);
	}
	while(i<1){
		printf("\nNhap vi tri can thay the: ");
		scanf("%d", &n);
		if(n<5 && n>0){
			printf("\nVi tri hop le");
			i++;
		}else{
			printf("\nVi tri khong hop le");
		}
		
	}
		printf("Nhap gia tri thay the: ");
		scanf("%d", &m);
		arr[n] = m;
		
	for(int a=0; a<5; a++){
		printf("%2d", arr[a]);
	}
}
