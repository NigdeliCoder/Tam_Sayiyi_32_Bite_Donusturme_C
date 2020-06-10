#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


/*tam sayıları ikili sayilara dönüştürmek için gerekli fonksiyon*/
int binary_donustur(int n)
{
	int a[8],i;        
   for(i=0;n>0;i++)    
  {     
    a[i]=n%2;    
    n=n/2;    
  }    
    for(i=i-1;i>=0;i--)    
      {     
        printf("%d",a[i]);    
     }    
}
int main()

{   //değişkenleri tanımladım.   
    int i;
    float gecici;
	int sayac=0;
	int a;
	int n;
	int us;
	float k;
	int bias=127;
	int sayi_isareti;
	float sayi;
	int son_kisim[23];
	int  x;
	printf("=======================================================\n");
	printf("Lutfen 32 bite donusturmek istediginiz sayiyi giriniz:");
	scanf("%f",&sayi);
	
	if(sayi>0)
	{
		printf("\nGirdiginiz sayi pozitiftir.\n");
		printf("Isaret:0\n");
		sayi_isareti=0;
	}
	else
	{
		printf("Girdiginiz sayi negatiftir.\n");
		printf("Isaret:1\n");
		sayi_isareti=1;
	}
	

if(sayi_isareti==0)
{
	while(sayi/2>=1)
    {
    	sayac++;
    	sayi=sayi/2;
	}
	
	//k elde etmek için
	k=sayi-1;
	
}
else
{
	sayi=sayi*(-1);//negatif sayilarda k yi hesaplarken hata olmamasi için
	while(sayi/2>=1)
    {
    	sayac++;
    	sayi=sayi/2;
	}
	
	//k elde etmek için
	k=sayi-1;
	
}
	
	
	printf("\n------------------------------\nSayac degeri:%d",sayac);
	printf("\n k degeri:%f ",k);
	
	  gecici=k*2;
   for(i=0;i<23;i++)
{
   	if(gecici>=1){
	 son_kisim[i]=1;
	gecici=gecici-1;
	   }
	   else
	   {
	   	son_kisim[i]=0;
	   }
gecici=gecici*2;
}
printf("\n");

   x=sayac+bias;
   printf("\n------------------------------------------\n");
   printf("Sayinin 32-bit IEEE754 donusturulmus hali\n ");
   printf("\n");
   printf("Isaret---Bias--------Son Kisim");
   printf("\n");
   printf("%d-",sayi_isareti);
   binary_donustur(x);
   printf("-");
   for(i=0;i<23;i++)
   {
   	printf("%d",son_kisim[i]);
   }
   printf("\n");
   printf("==========================================================================\n Bu kod 46570708366 Emre TURAC tarafindan yazilmistir.\n");
   printf("==========================================================================\n");
   return 0;
}
	
