#include <stdio.h>
#include <string.h>

int main(){
	char str[]="dinhhlu";
	char c,cnt=0;	printf("Moi nhap vao ki tu bat ki: ");	scanf("%c",&c);
	for(int i=0;i<strlen(str);i++){
		if(c == str[i])	cnt++;
	}
	if(!cnt)	printf("Khong co ki tu nao trung lap !!!");
	else	printf("Co %d ki tu trong chuoi",cnt);
	
}
