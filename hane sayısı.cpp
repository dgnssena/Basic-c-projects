#include<stdio.h>

int main(){
	
	int N;
	int toplam=0;
	int hane=0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&N);
	
	
	do{
		toplam+=N%10;
	    hane++;
		N=N/10;
		
		
		
	}
	while(N>0);
	
	printf("sayinin toplami %d %d hane sayisi",toplam,hane);
	
	return 0;
}
