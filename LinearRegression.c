#include <stdio.h>

int main(void) {
	float xToplam=0, yToplam=0,x2Toplam=0,xyToplam=0;
	float dizi[5]={0.0,0.3,0.4,0.7,0.8};
	float diziY[5]={-5.0,-3.75,-3.15,0.5,1.25};
  
	for(int i=0;i<5;i++){
  
		xToplam+=dizi[i];
		yToplam+=diziY[i];
		x2Toplam+=dizi[i]*dizi[i];
		xyToplam+=dizi[i]*diziY[i];

	}

  printf(" xToplam=%f\n yToplam=%f\n x2Toplam=%f\n xyToplam=%f",xToplam,yToplam,x2Toplam,xyToplam);
 
 float a1=(5*xyToplam-xToplam*yToplam)/(5*x2Toplam-(xToplam*xToplam));
 printf("\na1=%f", a1);
 
 float a0=(yToplam/5)-(a1*(xToplam)/5);
 printf("\na0=%f\nX girin: ", a0);
 
 float X;
 scanf("%f",&X);
 
 float y=a0+a1*X;
 printf("\n\n\ny=%f+(%f)x",a0,a1);
 printf("\ny= %f",y);
 return 0;
}
