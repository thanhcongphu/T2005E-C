#include <stdio.h>
int main(){
	int x,n=0;
	float S=0;
	printf("Nhap so phan tu cua chuoi : ");
	scanf("%d",&x);
	int a[x];
	for (int i=0;i<x;i++){
		printf("Nhap so thu %d : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2!=0&&i%2!=0){
			S=S+a[i];
			n++;
		}	
	}
	for (int i=0;i<x;i++){
		printf("%d\t",a[i]);
	}
	if(n==0){
		printf("\nKhong ton tai so le tai vi tri chan trong chuoi");
	}else{
		S=S/n;
		printf("\nTrung binh cong so le o vi tri chan trong chuoi la %f",S);
	}
}
