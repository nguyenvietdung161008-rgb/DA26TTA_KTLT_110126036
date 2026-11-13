#include <stdio.h>
#include <stdlib.h>

int main(){
	float n, a;
	
	printf("Nhap n:");
	scanf("%f",&n);
	printf("Nhap a:");
	scanf("%f",&a);
	
	printf("Tong=%f\n",n+a );
	printf("Hieu=%f\n", n-a);
	printf("Tich=%f\n", n*a);
	if (a!=0);
	
	printf("Thuong=%.2f",(float)n/a);
	return 0;
}

