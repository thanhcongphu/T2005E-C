#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n : ");
	scanf("%d",&n);
	if(n>=2){
		printf("Cac so chan be hon n la \n");
		for (int i=0;i<n;i=i+2){
			printf("%d   ",i);
		}
	}else{
		printf("Khong co so chan nao be hon n");
	}
}
