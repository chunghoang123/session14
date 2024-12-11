#include<stdio.h>
#include<string.h>
int main(){
	char c[]="cchaoo ban";
	int a;
	int count=0;
	printf("moi nhap 1 ky tu: ");
	scanf("%c",&a);
	for(int i=0;i<sizeof(c);i++){
		if(a ==c[i]){
			count++;
		}
	}
	printf("ky tu %c xuat hien %d",a,count);
	
	return 0;
}
