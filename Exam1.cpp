#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int a[n],s=1;
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			s=a[i];
		}
	}
	if(s==1)
		printf("Khong co so chan trong day");
	else 
		printf("So chan cuoi cung trong day la : %d ",s);
	return 0;
}
