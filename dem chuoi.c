#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char Chuoi[100];
	printf("Nhap chuoi: ");	gets(Chuoi);
	printf("Chuoi vua nhap la: ");	puts(Chuoi);
	int dem = strlen(Chuoi);
	printf("So ki tu cua chuoi: %d", dem);
}
