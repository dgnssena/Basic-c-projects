#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	char metin[256];
	char metin_tersi[256];
	
	printf("bir metin giriniz:");
	gets(metin);
	
	while(metin[i]!='\0'){
		metin[i]=metin_tersi[i];
		metin_tersi[i]=metin[i-1];
		i++;
		
	}
	printf("%c",metin_tersi[i]);
}
