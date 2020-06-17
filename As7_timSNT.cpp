#include <stdio.h>
int main(){
	int x;
	printf("Nhap so phan tu trong mang : ");
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++){
		printf("nhap phan tu thu %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Cac so nguyen to trong mang la : \n");
	int n=0;
	for(int i=0;i<x;i++){
		if(a[i]>1){
			int s=0;
			for(int j=2;j<a[i];j++){
				if(a[i]%j==0)
					s++;
			}
			if(s==0){
				printf("%d\t",a[i]);
				n++;
			}
		}
	}
	if(n==0)
		printf("Khong co so nguyen to trong mang");
}
