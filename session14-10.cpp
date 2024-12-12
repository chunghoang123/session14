#include<stdio.h>
#include<string.h>
int main(){
	char str[]="hello world";
	int count[256]={0};
	for(int i=0;str[i]!='\0';i++){
		count[(unsigned char)str[i]]++;
	}
	printf("ky tu va so lan xuat hien: \n");
	for(int i=0;i<256;i++){
		if(count[i]>0){
			printf("'%c': %d\n", i, count[i]);
		}
	}
	return 0;
}
