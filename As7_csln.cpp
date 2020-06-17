#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n : ");
	scanf("%d",&n);
	int s;
	s=n%10;
	while(n>0){
		int n2;
		n2 = n%10;
		n=n/10;
		if(n2>s){
			s=n2;
		}
	}
	printf("Chu so lon nhat cua n la : %d",s);
}
