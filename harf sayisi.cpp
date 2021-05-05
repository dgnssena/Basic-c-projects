#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i;
	int j;
	char metin[256];
	int toplam=0;
	int strlen(char metin[256]);
	
	printf("bir metin giriniz:");
	gets(metin);
	
	for(i=0; i<=strlen(metin); i++){
		for(j=0; j<=strlen(metin); j++){
			if(metin[i]==metin[j]){
				toplam++;
				printf("girilen metinde %d tane %s harfi bulunur:",toplam,metin[i]);
				i++;
			
			}
		}
	}
}
