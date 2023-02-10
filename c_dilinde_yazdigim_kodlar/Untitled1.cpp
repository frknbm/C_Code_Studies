#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main (){
	/*
	//while , do while,for 
	
	//while
	baslanic
	while(kosul){
		
		islem
		
	}
	
	//do while
	baslangic
	
	do{
		
		islem
	}
   while(kosul)
	
	//for
	
	for(baslangic;kosul;islem;){
		islem....
	}
	*/
	
	// sayi tabanli döngü=sayac    koþul ise=flag 
	
 
 /*
     int i;
     while(i<10)
     {
     	printf("merhaba dunya\n");
     	i++;
	 }
	printf("dongu sonlandi...");
*/


/*
int i=1;
while(i<=10){
	printf("%d\n",i);
	i++;
	
}	
*/
/*
int i;
while(i<=10)
{
	printf("%d nin karesi=%d\n",i,i*i);
	i++;
}
*/

/*
int i=1;
while(i<=10)
{
	printf("%d nin karesi=%d\t",i,i*i);
	printf("%d nin kupu=%d\n",i,i*i*i);
	i++;
	}	
	*/
	
	/*
	int i=1;
	while(i<=10)
	{
		printf("%d nin 1 ile carpimi=%d\t",i,i*1);
		printf("%d nin 2 ile carpimi=%d\t",i,i*2);
		printf("%d nin 3 ile carpimi=%d\n",i,i*3);
		i++;
		
	}
	*/
	
	
	/*
	int i=1;
	while(i<=10)
	{
		if(i%2==0){
			printf("%d cifttir\n",i);
		}
		else{
			printf("%d tektir\n",i);
		}
		i++;
	}
	*/
	
	
	/*
	int i,sayi;
	while(i<=10){
		printf("sayi giriniz:");  scanf("%d",&sayi);
		printf("%d nin karekoku=%.1f\n",sayi,sqrt(sayi));
		
		i++;
	}
	
	*/
	/*
	int i=1,sayi;
	do{
		printf("sayi giriniz:",sayi);  scanf("%d",&sayi);
		i++;
	}
	while(i<=10);
	*/
	/*
int sayi;
do{
	printf("sayi giriniz:");   scanf("%d",&sayi);
	printf("%d nin %d ile carpimi=%d\n",sayi,sayi,sayi*sayi);
}	
while(sayi>0);
	printf("program sonlandi\n");
	
	*/
	/*
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	
	*/
	/*
	
	int i;
	for(i=1;i<=10;i++){
		printf("%d nin kupu=%d\n",i,i*i*i);
		
	}
	*/
	
	/*
	int i,sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		printf("%d nin karesi=%d\t",i,i*i);
		printf("%d nin karekoku=%.1f\n",i,sqrt(i));
				
	}
	*/
	
	/*
	int i,sayi;
	printf("sayi giriniz:");  scanf("%d",&sayi);
	
for(i=sayi;i>=1;i--)
{
	printf("%d\n",i);
	}	
	*/
	
	/*
	int i,toplam=0;
	for(i=1;i<=10;i++){
		toplam=toplam+i;
		printf("%d\n",toplam);
	}
*/
/*

int toplam=0,sayi,i;
printf("sayi giriniz:");
scanf("%d",&sayi);

for(i=sayi;i>=1;i--){
	toplam=toplam+i;
	printf("%d\n",toplam);
}

	*/
	
	/*
	
	int i,toplam=0;
	for(i=5;i<=15;i++)
	{
	toplam+=i;
		printf("%d\n",toplam);
	}
	
*/

/*

int s1,i,s2,toplam=0;
printf("sayi giriniz:");
scanf("%d   %d",&s1,&s2);
	if(s1<s2){
		
		for(i=s1;i<=s2;i++){
			toplam=toplam+i;
		}
					printf("%d\n",toplam);

		
			}
	else if(s2<s1){
		for(i=s2;i<=s1;i++)
		{
			toplam=toplam+i;
		}
					printf("%d\n",toplam);

	}
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
