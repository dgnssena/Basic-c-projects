#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	char metin[256];
	
	printf("bir metin giriniz:");
	gets(metin);
	
	while(metin[i]!='\0'){
		char karakter=metin[i];
		if((metin[i]==32)&& (metin[i+1]!=32)){
			if(karakter>=97 && karakter<=122){
				karakter+=32;
				i++;
			}
			printf("%s",metin[i]);
		}
	}
}
