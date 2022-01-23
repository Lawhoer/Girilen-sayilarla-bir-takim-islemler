#include <stdio.h>    

int main(){    

int n,na,ne,d,sayi,toplam,fark,emax,emin,amax,amin;
float eort,aort,etoplam,atoplam;
n = 0;
na = 0;
ne = 0;
emin = 0;


while(d>-1) {
	
	printf("Sayi girin: ");
	scanf("%d",&sayi);	
	n++;
/*------------------------------ARTILAR----------------------------------------------*/							
if((d == 0) && (sayi != 0) && (amax == 0) && (sayi > 0)){
	amax = sayi;
	amin = amax;
}
if((sayi > amax) && (sayi != 0) && (sayi > 0)){
	amax = sayi;
}
if((sayi < amin) && (sayi != 0) && (sayi > 0)){
	amin = sayi;
}
/*------------------------------EKSÝLER---------------------------------------------*/
if((d == 0) && (sayi != 0) && (emax == 0) && (sayi < 0)){
	emax = sayi;
	emin = emax;
}
if((sayi > emax) && (sayi != 0) && (sayi < 0)){
	emax = sayi;
}
if((sayi < emin) && (sayi != 0) && (sayi < 0)){
	emin = sayi;
}	
/*------------------------------ÝÞLEMLER-------------------------------------------*/
fark = amax - emin;
toplam = amin + emax;		
/*--------------------------ORTALAMA ÝÞLEMLERÝ-------------------------------------*/	
if(sayi < 0){	
    ne++;
	etoplam += sayi;
	eort = etoplam/ne;
}
if(sayi > 0){
    na++;	
	atoplam += sayi; 
	aort = atoplam/na;	
}	
/*--------------------------------SUNUM--------------------------------------------*/
if(sayi == 0) {
	n--;
	d=-1;
	printf("||--------------Sonuclar--------------||\n");
	printf("Pozitif sayilarin ortalamasi: %.2f\n",aort);
	printf("Negatif sayilarin ortalamasi: %.2f\n",eort);
	printf("fark: %d\n",fark);	
	printf("toplam: %d\n",toplam);
	printf("||---------Kontrol Degiskenleri--------||\n");
	printf("na: %d\nne: %d\n",na,ne);	
	printf("amax: %d\n",amax);
	printf("amin: %d\n",amin);
	printf("emax: %d\n",emax);
	printf("emin: %d\n",emin);
	printf("n: %d\n",n);	
}	
}
system("pause");
return 0;

}  
