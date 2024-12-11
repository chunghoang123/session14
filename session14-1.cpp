#include<stdio.h>
#include<string.h>
int main(){
	// khai bao chuoi ky tu
	char c[100];
	printf("moi nhap chuoi ki tu: ");
	// nhap chuoi ky tu
	fgets(c, sizeof(c) , stdin);
	// in ra chuoi va do dai
	printf("chuoi ki tu vua nhap: %s",c);
	printf("do dai cua chuoi: %d ",strlen(c));
	return 0;
}
