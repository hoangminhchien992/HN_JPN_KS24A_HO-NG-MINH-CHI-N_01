#include<stdio.h>
int main(void) {
    int choice;
    int n,sum,giaTriThem,viTri,viTriXoa,giaTri;
    int arr[100];
    int min;
    int max;
    int flag = -1;
    int chon;
    do {
        printf("\t\t\t\t\t\t MENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang:\n");
        printf("2. In ra gia tri cac phan tu trong mang theo dang (ar[0]=1,arr[1]=5....):\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang:\n");
        printf("4. In ra tong cua cac phan tu:\n");
        printf("5. Them mot phan tu vao cuoi mang,phan tu moi them vao mang phai do nguoi dung nhap vao:\n");
        printf("6. Xoa phan tu tai vi tri cu the:\n");
        printf("7. Sap xep mang theo thu tu giam dan:\n");
        printf("8. Cho nguoi dung nhap vao mot phan tu,tim kiem xem phan tu do co ton tai trong mang hay khong\n");
        printf("9. In ra toan bo so nguyen to trong mang:\n\ta. Neu khong co so nguyen to nao thi hien thi ra la khong co so nguyen to nao trong mang.\n\tb. Neu co so nguyen to trong mang thi hien thi toan bo so nguyen to do.\n");
        printf("10. Sap xep mang theo thu tu tang dan:\n");
        printf("11. Thoat\n");
        printf("Moi ban nhap vao lua chon\n");
        scanf("%d",&choice);
    }while(choice != 9);
    switch(choice) {
        case 1 :// nhap so phan tu va gia tri cho mang
            printf("moi ban nhap so phan tu ");
        scanf("%d",&n);
        for(int i = 0;i < n;i++){
            printf("arr[%d]=",i);
            scanf("%d",&arr[i]);
        }
        break;
        case 2 ://in ra gia tri cac phan tu trong mang
            for(int i=0;i<n;i++){
                printf("arr[%d] = %d\n",i,arr[i]);
            }
        break;
        case 3 ://gia tri nho nhat va lon nhat trong mang
            min =arr[0];
        max =arr[0];
        for(int i = 0;i<n;i++){
            if(arr[i] > max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
        printf("min = %d\n",min);
        printf("max = %d\n",max);
        break;
        case 4 :
            sum =0;
        for(int i =0;i < n;i++){
            sum += arr[i];
        }
        printf("sum = %d\n",sum);
        break;
        case 6 ://xoa 1 phan tu
            printf("moi ban nhap vi tri muon xoa cua mang");
        scanf("%d",&viTriXoa);
        if(viTriXoa <= n){
            for(int i = viTriXoa-1; i < n - 1; i++){
                arr[i] = arr[i + 1];
            }
            --n;
            for(int i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
        }
        break;
    }while(choice!=10);
}
    return 0;
