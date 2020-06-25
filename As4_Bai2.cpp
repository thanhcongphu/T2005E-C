#include <stdio.h>
int main(){
	char a;
	do{
		printf("Nhap ky tu y/Y hoac n/N : ");
		scanf("%c",&a);
	}while(a!='n'&&a!='N'&&a!='y'&&a!='Y');
}
