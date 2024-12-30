#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Moi nhap vao mot chuoi bat ki: ");	gets(str);
	printf("Day la chuoi cua ban sau khi dao nguoc\n");
	
	for(int i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
