#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char metin[256];
	int i=0;
	
	
	printf("bir metin giriniz:");
	gets(metin);
	
	while(metin[i]!='\0'){
		printf("%c\n",metin[i]);
		i++;
	}
	printf("%d kez alta alta yazilmistir.",i);
}
