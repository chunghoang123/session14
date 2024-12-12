#include<stdio.h>
#include<string.h>
int main(){
	char str[]="Hello my gmail is test123@gmail.com";
	int chuCai=0,chuSo=0,dacBiet=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			chuCai++;
		}else if(str[i]>='0' && str[i]<='9'){
			chuSo++;
		}
	}
	dacBiet=strlen(str)-(chuCai+chuSo);
	printf("so chu cai la: %d\n",chuCai);
	printf("so chu cai la: %d\n",chuSo);
	printf("so chu cai la: %d\n",dacBiet);
	return 0;
}
	
