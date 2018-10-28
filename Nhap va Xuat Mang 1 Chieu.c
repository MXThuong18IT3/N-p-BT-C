#include<stdio.h>
void NhapMang(int A[100], int N){
	int i;
	for(i=0; i<N; i++){
		printf("Mang[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
void XuatMang(int A[100], int N){
	int i;
	for(i=0; i<N; i++){
		printf("Mang[%d] = %d",i,A[i]);
		printf("\n");
	}
}
int main(){
	int A[100], n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	NhapMang(A,n);
	printf("Cac phan tu cua mang da nhap la: \n");
	XuatMang(A,n);
}
