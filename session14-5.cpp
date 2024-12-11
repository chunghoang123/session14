#include<stdio.h>
#include<string.h>
int main(){
	char c[]="xin chao";
	int count=1;
	for(int i=0;c[i]!='\0';i++){
		if(c[i]==' '){
			count ++;
		}
	}
	printf("so tu trong chuoi la: %d",count);
	return 0;
}
