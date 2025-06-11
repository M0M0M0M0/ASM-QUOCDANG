#include <stdio.h>

int main(){
	int n;
	int fn = 0;    
	int x1 = 0;     
	int x2 = 1;     
	int i = 2;
	int max=0;
	printf("Vui long nhap n = ");
	scanf("%d",&n);
		if(n == 0){
		printf("Khong co so nao tiem can duoi voi %d ma thuoc day fibonacci.",n);
		} else if(n == 1){
		printf("So tiem can duoi voi %d ma thuoc day fibonacci la 0",n);
		} else {
			while(fn<n){
				fn = x1 + x2;
				x1 = x2;
				x2 = fn;
				i++;
				if(fn<n){
				max = fn;
				}
			}
		}
	printf("So tiem can duoi voi %d ma thuoc day fibonacci la %d",n,max);
}
