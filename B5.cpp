#include <stdio.h>
#include <string.h>

int main(){
	char str[100];	printf("Moi nhap vao mot chuoi bat ki: ");	gets(str);
	int cnt=0;
	
	for(int i=0;i<strlen(str);i++){
		if(str[i] == ' ' && str[i+1] != ' ' && i!=strlen(str)-1 || (i==0 && str[i] != ' '))	cnt++;
	}
	
	printf("Tat ca so tu trong mang la: %d", cnt);
}
