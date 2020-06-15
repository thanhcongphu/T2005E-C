#include <stdio.h>
int main(){
	int x,n=0;
	int S;
	printf("Nhap so phan tu cua chuoi : ");
	scanf("%d",&x);
	int a[x];
	for (int i=0;i<x;i++){
		printf("Nhap so thu %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Nhap so can tim trong chuoi : ");
	scanf("%d",&S);
	for (int i=0;i<x;i++){
		printf("%d\t",a[i]);
		if(a[i]==S){
			n++;
		}
	}
	if(n==0){
		printf("\nKhong ton tai so can tim trong chuoi");
	}else{
		printf("\nSo can tim co xuat hien trong chuoi %d lan",n);
	}
}
