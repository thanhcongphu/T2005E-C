#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap 3 so tim so nho nhat \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("So nho nhat la %d",a);
		}else{
			printf("So nho nhat la %d",c);
		}
	}else{
		if(b<c){
			printf("So nho nhat la %d",b);
		}else{
			printf("So nho nhat la %d",c);
		}
	}
}
