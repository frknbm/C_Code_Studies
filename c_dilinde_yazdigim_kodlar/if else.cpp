#include<stdio.h>
#include<stdlib.h>

int main(){
	/*
	int a=5,b=7;
	
	if(a<=b)
	{
		printf("b'a dan buyuktur. ");
	}
	else{
		printf("a'b den kucuktur.");
	}
	*/
	
	/*
	int a;
	printf("a pozitif sayisini giriniz:");
	scanf("%d",&a);
	if(0<=a && a<=10){
		printf("a 0 ile 10 arasindadir.");
	}
	else if(a>10 && a<=20)
	{
		printf("a 10 ile 20 arasindadir.");
	}
	else
	{
	printf("20 den buyuktur.")	;
	}
	
	*/
	
	/*
	
	int a,b;
	printf("a ve b sayisihni giriniz:");   scanf("%d   %d",&a,&b);
	if(a==b){
		printf("a ve b esittir.");
	}
	else if(a<b)
	{
		printf("b adan buyuktur.");
	}
	else{
		printf("a b den buyuktur");
	}
	*/
	/*
	int yas;
	printf("yasinizi giriniz:");
	scanf("%d",&yas);
	
	if(yas<=18 && yas>=0)
	{
		printf("ccocuksunuz.");
	}
	else if(yas>18 && yas<=24)
	{
		printf("gencsiniz.");
	}
	else if(yas>24 && yas<=40)
	{
		printf("olgunsunuz.");
	}
	else{
		printf("yaslisiniz.");
	}
	
	
	*/
	
	
	/*
	int vize,final;
	float ort;
	printf("vize final sonuclarinizi giriniz:");
	scanf("%d  %d",&vize,&final);
	ort=(vize+final)/2;
    if(ort<=55){
    	printf("ortalamaniz:%.1f kaldiniz ",ort);
	}		
	else if(ort>55 && ort<=80)
	{
		printf("ortalamaniz:%.1f  gectiniz.  BB",ort);
	}
	else
	{
		printf("ortalamaniz:%.1f gectiniz AA",ort);
	}
	
	*/
	
	
	/*
	//cinsiyet yaþ iliþkisi
	
	char cinsiyet;
	printf("cinsiyetinizi giriniz (E/K):");
	scanf("%s",&cinsiyet);
	int yas;
    printf("yasinizi giriniz:");
    scanf("%d",&yas);
    if(cinsiyet=='E' && yas<=18 ){
    	printf("oynayamassiniz.");
	}
	else if(cinsiyet=='K'&& yas<=18){
		printf("oynayabilirsiniz.");
	}
	else if(cinsiyet=='E'&& yas>=18)
	{
		printf("oynayabilirsiniz.");
	}
	else
	{
		printf("oynayabilirsiniz.");
		
	}
	*/
	
	int maas,zam,miktar;
	
	printf("maasiniz nedir:");
	scanf("%d",&maas);
	printf("kac urun satýyorsunuz:");
	scanf("%d",&miktar);
	if(miktar<=10 && miktar>=1){
		zam=miktar*5;
		printf("zamminiz:%d\n yeni maasiniz:%d",zam,maas+zam);
	}
	else if(miktar<=20 && miktar>=11)
	{
		zam=miktar*10;
		printf("zamminiz:%d\n  yeni maasiniz:%d",zam,maas+zam);
	}
	else if(miktar>=21 && miktar<=30)
	{
		zam=miktar*15;
		printf("zamminiz:%d\n  yeni maasiniz:%d",zam,maas+zam);
	}
	else
	{
		printf("tekrar giriniz.");
	}

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

