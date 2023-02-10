#include<stdio.h>
#include<stdlib.h>
int islemtekrari(){
	int d;
	printf("\n\n\n yeni bir islem yapmak istiyor musunuz? \n islemlere devam etmek icin :  1 \n cikis icin :  0\n\n\n");
	scanf("%d",&d);
	return d;
}
void cikis(){
	printf("\n cikis yapildi");
}
void karsilastirma(char * string1, char * string2){
	int esit=1;
	while(*string1!='\0' || *string2!='\0'){
	if(*string1!=*string2){
 			esit=0;
}
	string2++;
	string1++;
	}
	if(esit){
	printf("\n esittir");
	}
	else{
	printf("\n esit degildir");
	}
}
void kopyalama(char * kop, char * string){
	char *tmp = string;
	int i=0;
	while(*kop!='\0'){

		*tmp=*kop;
		tmp++;
		kop++;
	}
	*tmp='\0';
}
void ekleme(char * ek, char * ekle){
	char * tmp = ek;
	char * tmp2= ekle;
	while(*tmp!='\0'){
		tmp++;
	}
	while(*tmp2!='\0'){
		*tmp = *tmp2;
		tmp++;
		tmp2++;
	}
	*tmp='\0';
}
void eklensayida(char * ek, char * ekle){
	char * tmp = ek;
	char * tmp2= ekle;
	int n,i;
	printf("\n kac harf eklemek istiyorsunuz ?");
	scanf("%d",&n);
	while(*tmp!='\0'){
		tmp++;
	}
	for(i=0 ; i<n ; i++){
		*tmp = *tmp2;
		tmp++;
		tmp2++;
	}
	*tmp='\0';
}
int main(){
	
	char  string1[1000]="STRING1";
	char  string2[1000]="STRING2"; 
	int d;
	
	printf("\n stringler ====\t 1- %s ###### 2- %s",string1,string2);
	tekrar:
	printf("\n lutfen yapmak istediginiz islemi secin ? ");
	printf("\n stringleri karsilastirmak istiyorsaniz : 1");
	printf("\n birinci stringin icindeki degeri ikinciye kopyalamak istiyorsaniz : 2");
	printf("\n ikinci stringi birincinin pesine eklemek istiyorsaniz : 3");
	printf("\n birinci stringin n harften fazla olmamak uzere harflerini ikinci stringin pesine eklemek istiyorsaniz : 4\n");
	scanf("%d",&d);
	switch(d){	
		case 1:
			     karsilastirma(string2,string1);      	break;
		case 2:
		         kopyalama(string2,string1);	        break;
		case 3:
		      	 ekleme(string1,string2);	            break;
		case 4:
		    	eklensayida(string2,string1);         	break;
		default:
			printf("\n bu islem bulunmamaktadir!!!   tekrar secim yapiniz."); break;		
	}		
	if(islemtekrari()){
		goto tekrar;
	}	
	cikis();
	return 0;
}
