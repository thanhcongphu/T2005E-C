#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	printf ("Tim dien tich va chu vi tam giac \n");
	printf ("Nhap lan luot 3 canh cua tam giac : \n");
	scanf ("%d",&a);
	scanf ("%d",&b);
	scanf ("%d",&c);
	if (a>0 and b>0 and c>0 and a+b>c and b+c>a and c+a>b){
		int C = a+b+c;
		float S = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
		printf ("Chu vi tam giac la %d \n",C);
		printf ("Dien tich tam giac la %f \n",S);
	}else{
		printf ("%d, %d, %d khong la 3 canh 1 tam giac",a,b,c);
	}
}
