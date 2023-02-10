#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	
	/*
	int i;
	for(i=0;i<=10;i++)
	{
		printf("%dmerhaba dunya\n",i);
	}
	
	*/
	
	/*
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d nin kupu:%d\n",i,i*i*i);
	}
	*/
	
	/*
	int s1,i;
	printf("s1 sayisini giriniz:");
	scanf("%d",&s1);
	for(i=1;i<=s1;i++)
	{
		printf("%d ni karekoku:%.1f\n",i,sqrt(i));
	}
	*/
	
	/*
	int s1,i;
	printf("s1 sayisini girinz:");
	scanf("%d",&s1);
	for(i=s1;i>=1;i--)
	{
		printf("%d\n",i);
	}
	
	*/
	
	/*
	int i,toplam=0;
	for(i=1;i<=10;i++)
	{
		toplam=i+toplam;
	}
			printf("%d\n",toplam);

*/
 /*
  int i,sayi,toplam=0;
  printf("sayi giriniz:");
  scanf("%d",&sayi);
  for(i=1;i<=sayi;i++)
  {
  	toplam=toplam+i;
  	printf("%d\n",toplam); 
	  }	
	*/
	
	/*
	int a,b,i,toplam=0;
	printf("a ve b sayilarini girin:");
	scanf("%d %d",&a,&b);
	if(a<b){
		for(i=a;i<=b;i++)
	{
		toplam=toplam+i;

	}
			printf("%d",toplam);

	}
	else{
		for(b=i;i<=a;i++){
			toplam=i+toplam;
		}
								printf("%d",toplam);
								

	}
*/
	
	
	/*
 int i,ciftsayi=0,teksayi=0;
 for(i=1;i<=10;i++)
 {
 	if(i%2==0){
      ciftsayi=ciftsayi+1; //cift sayi adetini bellekte saklar	
	 }
    else
    {
    	teksayi=teksayi+1;
	}
 }
	 		printf("ciftsayi adeti:%d\n",ciftsayi);
           	printf("teksayi adeti:%d\n",teksayi);

	*/
	
	
	/*
	int a,b,i,ciftsayi=0,teksayi=0;
	printf("a ve b sayilarini girin:");
	scanf("%d %d",&a,&b);
	if(a<b){
		for(i=a;i<=b;i++)
	{
		if(i%2==0){
			ciftsayi++;
		}
		else{
			teksayi++;
		}
		
	}
		printf("%d ile %d arasindaki cift sayi adeti:%d\n",a,b,ciftsayi);
		printf("%d ile %d arasindaki tek sayi adeti:%d\n",a,b,teksayi);

		
		
		
	}
	else 
	{
		for(i=b;i<=a;i++)
	{
	  if(i%2==0){
	  	ciftsayi++;
	  }	
	  else{
	  	teksayi++;
	  }
	  }
	  printf("%d ile %d arasindaki cift sayi adeti:%d\n",b,a,ciftsayi);	
printf("%d ile %d arasindaki tek sayi adeti:%d\n",b,a,teksayi);
	  
	}


	*/
	
	/*
	int i,sayi,max=0;
	for(i=1;i<=10;i++)
	{
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi>max)
		{
          max=sayi;
		}
	}
	printf("en buyuk sayi:%d",max);
	*/
	
	
	/*
	int i,sayi,min=0;
	for(i=1;i<=10;i++)
	{
		printf("sayi girin:");
		scanf("%d",&sayi);
	if(sayi<min){
		min=sayi;
			}
	}
	printf("en kucuk sayi:%d",min);
	
	
	*/
	
	/*
	int i,faktor=1;
	for(i=1;i<=4;i++)
	{
		faktor*=i;
	}
	printf("%d\n",faktor);
	
	*/
	
	/*
	int i,faktor=1,sayi;
	
	printf("sayi girin:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		faktor*=i;
	}
	printf("%dun faktoriyeli:%d\n",sayi,faktor);
	
	*/
	
	// iç içe döngüler
	
	/*
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=5;j++){
			printf(" merhaba dunya\n");
		}
		printf("www.furkan.bayram.com\n");
	}
	*/
	
	
	/*
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
		printf("%d * %d=%d\n",i,j,i*j);
		}
		printf("\n\n\n");
	}
	*/
	
	// içi dolu kare
	
	/*
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=20;j++){
			printf("*");
		}
		printf("\n");
	}
	*/
	// h harfi yapma
	
	
	/*
	for(int i=1;i<=1;i++){
		
		for(int j=1;j<=5;j++)
		{
			printf("*\t *\n");
		}
		for(int k=1;k<=1;k++)
		{
			printf("----------\n");
		}
			for(int j=1;j<=5;j++)
		{
			printf("*\t *\n");
		}
	}
	
	*/
	
	
	return 0;
}
