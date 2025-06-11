#include <stdio.h>

int main(){
	int n;
	int fn = 0;    
	int x1 = 0;     
	int x2 = 1;     
	int i = 2;

	printf("Vui long nhap n = ");
	scanf("%d", &n);

	if(n == 0){
		fn = 0;
	} else if(n == 1){
		fn = 1;
	} else {
		while(i <= n){
			fn = x1 + x2;
			x1 = x2;
			x2 = fn;
			i++;
		}
	}

	printf("So thu %d trong day fibonacci la %d\n", n, fn);
}

