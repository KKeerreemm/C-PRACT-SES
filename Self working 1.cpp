/*Ön iþlemci komutlarý*/
#include <stdio.h>
#include  <conio.h>
#define PISAY 3.14
#define dairealan(r) PISAY*r*r
 float alan,cevre,r ;
 int main(void){
 	printf("Dairenin alani:\n");
 	printf("Yaricapi giriniz:"); scanf("%f",&r);
 	alan=dairealan(r);
	printf("Dairenin alani = %f\n",alan);
 	#undef PISAY
 	getch();
 	return 0 ;
 }
