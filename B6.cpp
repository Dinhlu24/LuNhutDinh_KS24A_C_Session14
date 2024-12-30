#include <stdio.h>
#include <string.h>

int main(){
	char str[100];	printf("Vui long nhap chuoi ki tu bat ki: "); gets(str);
	int cnt=0;
	
	for(int i=0;i<strlen(str);i++){
		int dec=str[i];
		if(dec >= 65 && dec <= 90 || dec >= 97 && dec <= 122)	cnt++;
	}
	
	printf("Co tat ca %d ki tu la chu cai trong chuoi",cnt);
}
