#include <stdio.h>

int main(){
	int size;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&size);
	int player[size];
	for(int i=0;i<size;i++){
		printf("Vui long nhap phan tu thu %d vao mang: ",i+1);
		scanf("%d",&player[i]);
	}
	int x;
	int temp=0;
	printf("Vui long nhap so nguyen x = ");
	scanf("%d",&x);
	for(int i=0;i<size;i++){  
		if(x==player[i]){
			temp=1;
			break;
		}	
	}
	if(temp==1){
		printf("Co so %d o trong mang.",x);
	}else{
		printf("Khong co so %d o trong mang.",x);
	}
}
