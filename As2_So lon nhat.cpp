#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap 3 so tim so lon nhat \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("So lon nhat la %d",a);
		}else{
			printf("So lon nhat la %d",c);
		}
	}else{
		if(b>c){
			printf("So lon nhat la %d",b);
		}else{
			printf("So lon nhat la %d",c);
		}
	}
}
