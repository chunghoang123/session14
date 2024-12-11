#include<stdio.h>
#include<string.h>
int main(){
	char c[]="xin chao";
	printf("so ky tu trong chuoi: ");
	for(int i=0;i<sizeof(c);i++){
		printf("%d, ",i);
	}
	printf("\n");
	for(int j=0;j<sizeof(c);j++){
		printf("so %d la ky tu %c\n",j,c[j]);
	}
}
