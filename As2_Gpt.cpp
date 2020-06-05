#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d;
	float d1,x1,x2;
	printf ("Giai phuong trinh ax^2 + bx + c = 0 \n");
	printf ("Nhap vao lan luot 3 so a,b,c : \n");
	scanf ("%d",&a);
	scanf ("%d",&b);
	scanf ("%d",&c);
	printf ("Nghiem phuong trinh %dx^2 + %dx + %d = 0 la \n",a,b,c);
	if (a==0){
		if (b==0){
			if (c==0){
				printf("Phuong trinh dung voi moi x");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x1=-c/b;
			printf ("%f",x1);
		}
	}else{
		d= b*b-4*a*c;
		if (d<0){
			printf("Phuong trinh vo nghiem");
		}else{
			if (d==0){
				x1 = -b/2;
				printf ("%f",x1);	
			}else{
				d1 = sqrt(d);
				x1 = -b/2 + d1/2;
				x2 = -b/2 - d1/2;
				printf ("%f\n",x1);	
				printf ("%f",x2);	
			}
		}
	}
}
