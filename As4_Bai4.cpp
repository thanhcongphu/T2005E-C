#include <stdio.h>
int main(){
	int n;
	printf ("Nhap so n : ");
	scanf("%d",&n);
	int c=0,S=0;
	if(n>0){
		for(int i=1;i<=n;i++){
			if(n%i==0){
				S=S+i;
				c++;
			}
		}
		printf("So uoc cua n la : %d\n",c);
		printf("Tong uoc cua n la : %d",S);
	}else{
		printf("So nhap vao khong thoa man");
	}
}
