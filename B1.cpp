#include <stdio.h>
#include <string.h>

int main(){
	char c[100];
	printf("Moi nhap vao mot chuoi bat ki: ");	gets(c);
	
	printf("Day la chuoi cua ban: %s\nDay la do dai cua chuoi: %d",c,strlen(c));
}
