#include<stdio.h>
void NhapMang(int A[100], int N){
	int i;
	for(i=0; i<N; i++){
		printf("Mang[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
long GT(int n){
	int i; long gt=1;
	for(i=2; i<=n; i++){
		gt *= i;
	}
	return gt;
}
int main(){
	int A[100], n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	NhapMang(A,n);
	double Tgt=0; int i;
	for(i=1; i<=n; i++){
		Tgt += GT(A[i]);
	}
	printf("Tong giai thua cua giai thua cac phan tu mang la: %.0lf", Tgt);
}
