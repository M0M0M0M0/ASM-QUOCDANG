#include <stdio.h>

int main(){
	int a,b;
	int x=0;
	do{
		printf("Vui long nhap lan luot 2 so a va b (a<b).\n");
		printf("a = ");
		scanf("%d",&a);
		printf("b = ");
		scanf("%d",&b);
		if(a>=b) printf("Khong hop le.\n\n");
	}while(a>=b);
	if(b<=1){
		printf("Khong co so nguyen to nao trong khoang tu %d den %d.",a,b);
	}else{
		printf("Cac so nguyen to trong khoang tu %d den %d la: ",a,b);
		for(int i=a;i<=b;i++){
			for(int cnt=2;cnt<i-1;cnt++){
				if(i%cnt==0){
					x=1;
				}
			}
			if(x==0) printf("%d ",i);
			x=0;
		}
	}
}
