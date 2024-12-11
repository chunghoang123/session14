#include<stdio.h>
#include<string.h>
int main (){
	// khai bao mang 
	char c[]="xin chao";
	// in ra tuong ki tu
	printf("chuoi ky tu: ");
	for(int i=0;i<sizeof(c);i++){
		printf("%c ",c[i]);
	}
}

