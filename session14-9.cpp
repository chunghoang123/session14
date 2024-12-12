#include<stdio.h>
#include<string.h>
int main(){
	char str[]="Hello World";
	char result[100];
	char xoa;
	int a;
	printf("moi nhap 1 ky tu can xoa: ");
	scanf("%c",&xoa);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=xoa){
			result[a++]=str[i];
		}
	}
	result[a]='\0';
	printf("chuoi sau khi xoa ky tu %c: %s",xoa,result);
	return 0;
}
