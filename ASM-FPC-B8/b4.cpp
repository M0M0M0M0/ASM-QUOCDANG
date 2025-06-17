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
	int sl;
	int temp=0;
	for(int i=0;i<size;i++){
		if(player[i]%2!=0 && player[i]%2>0){
			sl=player[i];
			temp=1;
		}
	}
	if(temp==1){
		printf("So le cuoi cung cua mang la %d",sl);
	}else{
		printf("Khong co so le nao trong mang.")
	}

}
