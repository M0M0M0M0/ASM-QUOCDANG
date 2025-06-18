#include <stdio.h>

int main(){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	int player[n];
	for(int i=0;i<n;i++){
		printf("Vui long nhap phan tu thu %d vao mang: ",i+1);
		scanf("%d",&player[i]);
	}
	int tong=0;
	int temp=0;
	for(int i=0;i<n;i++){
		if(player[i]>0){
			temp+=player[i];
			if(temp>tong){
				tong=temp;
			}
		}else{
			temp=0;
		}
	}
	if(tong>0){
		printf("Chuoi so duong co tong lon nhat la %d",tong);
	}else{
		printf("Khong co so duong nao trong mang.");
	}
}
