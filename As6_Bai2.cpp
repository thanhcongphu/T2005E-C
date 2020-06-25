#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	int c=0,S=0;
	for(int i=0;i<n;i++){
		printf("Nhap phan tu so %d : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			S=a[i];
			c++;
		}
	}
	if(c==0){
		printf("Day khong co so chan");
	}else{
		for(int i=0;i<n;i++){
			if(a[i]%2==0&&a[i]<S)
				S=a[i];
		}
		printf("So chan nho nhat trong day la : %d",S);
	}
}
