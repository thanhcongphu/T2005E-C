#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	int S=0;
	for(int i=0;i<n;i++){
		printf("Nhap phan tu so %d : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
			S=a[i];
	}
	if(S==0){
		printf("Day khong co so le");
	}else{
		printf("So le cuoi cung cua mang la : %d",S);
	}
}
