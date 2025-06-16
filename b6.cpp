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
	int chuoi=0;
	int temp=0;
	for(int i=0;i<size;i++){
		if(player[i]>0){
			temp++;
			if(temp>chuoi){
				chuoi=temp;
			}
		}else{
			temp=0;
		}
	}
	if(chuoi>0){
		printf("So luong cac so duong lien tiep nhieu nhat la %d",chuoi);
	}else{
		printf("Khong co so duong nao trong mang.")
	}
}
