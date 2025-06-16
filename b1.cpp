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
	int tong=0;
	int x=0;
	float tbc;
	for(int i=0;i<size;i++){
		if(player[i]%2!=0){
			tong += player[i];
			x++;
		}
	}
	if (x > 0) {
        tbc = (float)tong / x;  
        printf("Trung binh cong cua cac so le la %f\n", tbc);
    } else {
        printf("Mang khong co so le nao.\n");
    }
}

