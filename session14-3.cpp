#include<stdio.h>
#include<string.h>
int main(){
	char c[]="chao ban";
	printf("chuoi ban dau: %s\n",c);
	printf("chuoi da dao nguoc: ");
	for(int i=sizeof(c)-1;i>=0;i--){
		printf("%c",c[i]);
	}
	
	return 0;
}
