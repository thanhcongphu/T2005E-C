#include <stdio.h>
int main(){
	int x;
	printf("Nhap so phan tu cu mang : ");
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++){
		printf("Nhap so thu %d : ",i+1);
		scanf("%d",&a[i]);
	}
	int n;
	printf("Nhap so can so sanh : ");
	scanf("%d",&n);
	int s=n-a[0];
	for(int i=0;i<x;i++){
		if(a[i]<=n&&(n-a[i])<s)
			s=n-a[i];
	}
	if(s<0){
		printf("Khong co so nao tiem can duoi so %d",n);
	}else{
		printf("So tiem can duoi voi so %d la : %d",n,(n-s));
	}
}
