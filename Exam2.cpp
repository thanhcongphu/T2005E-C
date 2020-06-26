#include <stdio.h>
float trungbinh(int s[], int n){
	int a=0;
	float t;
	for (int i=0;i<n;i++){
		a=a+s[i];
	}
	t= float(a)/float(n);
	return t;
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&s[i]);
	}
	float tb= trungbinh(s,n);
	printf("Trung binh cong mang da nhap la : %0.2f",tb);
	return 0;
}
