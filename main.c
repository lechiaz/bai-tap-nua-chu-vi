#include <stdio.h>

int nuaChuVi (int a, int b,int c){
    return ((a + b + c)/2);
}
int main() {
    int canhThuNhat, canhThuHai, canhThuBa,tongHaiCanh;
    printf("Nhap vao 3 canh cua tam giac");
    printf("Canh thu nhat \n");
    scanf("%d",&canhThuNhat);
    if (canhThuNhat <= 0) {
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0");
        return 0;
    }
    printf("Canh thu hai \n");
    scanf("%d",&canhThuNhat);
    if (canhThuHai <= 0) {
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0");
        return 0;
    }
    printf("Canh thu ba \n");
    scanf("%d",&canhThuNhat);
    if (canhThuBa <= 0) {
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0");
        return 0;
    }
    tongHaiCanh = canhThuNhat + canhThuHai;
    if (tongHaiCanh < canhThuBa){
        printf("Tong hai canh cua 1 tam giac phai lon hon canh con lai (Theo bat dang thuc tam giac)");
        return 0;
    }
    printf("%d",nuaChuVi(canhThuNhat,canhThuHai,canhThuBa));
    return 0;
}