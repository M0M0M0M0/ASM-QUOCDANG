#include <stdio.h>

int main(){
	int x;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	int money;
	do{
		printf("Nhap so tien can rut (So tien phai la boi so cua 10000): ");
		scanf("%d",&x);
		if( x<10000 || x%10000!=0){
			printf("Vui long nhap so tien hop le.\n");			
		}
	}while( x<10000 || x%10000!=0);
	money = x;
	if (x >= 500000) {
        a = x / 500000;
        x %= 500000;
    }
    if (x >= 200000) {
        b = x / 200000;
        x %= 200000;
    }
    if (x >= 100000) {
        c = x / 100000;
        x %= 100000;
	}
    if (x >= 50000) {
        d = x / 50000;
        x %= 50000;
    }
    if (x >= 20000) {
        e = x / 20000;
        x %= 20000;
    } 
    if (x >= 10000) {
        f = x / 10000;
        x %= 10000;
    }
    
	printf("So luong tung loai tien can tra cho so tien %d la: \n",money);
	if(a>0){
		printf("%d to 500.000 VND\n",a);
	}
	if(b>0){
		printf("%d to 200.000 VND\n",b);
	}
	if(c>0){
		printf("%d to 100.000 VND\n",c);
	}
	if(d>0){
		printf("%d to 50.000 VND\n",d);
	}
	if(e>0){
		printf("%d to 20.000 VND\n",e);
	}
	if(f>0){
		printf("%d to 10.000 VND\n",f);
	}
}
