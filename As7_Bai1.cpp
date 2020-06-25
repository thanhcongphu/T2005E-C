#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu mang : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]<a[j]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("Mang sau khi sap xep la :\n");
	for(int i=0;i<n;i++)
		printf("%d   ",a[i]);
}
