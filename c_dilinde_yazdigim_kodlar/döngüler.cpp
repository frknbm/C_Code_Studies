#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	
// for d�ng�s�
/*
  int i;
  for(i=1;i<=10;i++)
  {
  	printf("%d\n",i);
  }
	*/
	

// while d�ng�s�
/*
  int i=1;
  while(i<=10)
  {
  	printf("%d\n",i);
  	i++;
	  }	
	
	*/
	
// do wihle d�ng�s�

/*
 int i=1;
   do{
   	printf("%d\n",i);
    i++;
   }
   while(i<=10);
	
	*/
	
	
	/*
	int i;
	for(i=20;i<=50;i++)
	{
		if(i%2==1)
			printf("%d sayisi tek sayidir.\n",i);
		
	}
	*/
	
	/*
	int i;
	for(i=100;i>=20;i--)
	{
	  if(i%3==0 && i%7==0 )
	  printf("%d\n",i);	
	}
	*/
	
	
	
	/// girilen 3 sayidan en b�y���n� se�me
	
	int i,girilen;
	int eb=0; //en b�y�k sayi k�saltmas�
	for(i=0;i<3;i++){
	
	{
		
		scanf("%d",&girilen);
		if(girilen>eb)
        eb=girilen;


	}
	printf("eb:%d",eb);
}
	
	
	
	
	
	
	
	return 0;
}
