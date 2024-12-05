#include<stdio.h>

int main(){
	int arr[100];
	int nobro, number;
	do{
		int max=0, seconMax=0;
		int position, value;
		int total, minus, check=-1;
		printf("\n              MENU           \n");
		printf("\n 1. Nhap so phan tu va gia tri cho mang.\n");
		printf("\n 2. In cac phan tu trong mang.\n");
		printf("\n 3. Dem so luong cac so hoan hao trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no.\n");
		printf("\n 4. Tim gia tri lon thu hai trong mang,khong duoc sap sep mang.\n");
		printf("\n 5. Them mot phan tu vao vi tri ngau nghien trong mang.\n");
		printf("\n 6. Xoa mot phan tu tai vi tri cu the(do nguoi dung nhap).\n");
		printf("\n 7. Sap xep mang theo thu tu tang dan.\n");
		printf("\n 8. Cho nguoi dung nhap vao mot phan tu kiem tra xem co trong mang hay khong.\n");
		printf("\n 9. Sap xep va hien thi mang sao cho cac so chan dung truoc so le dung sau.\n");
		printf("\n 10. Dao nguoc thu tu cac phan tu trong mang.\n");
		printf("\n 11. Thoat.\n");
		printf("\nLua chon cua ban:");
		scanf("%d", &nobro);
		switch(nobro){
			case 1:
				printf("\nMoi ban nhap phan tu: ");
				scanf("%d", &number); 
				if(number<=0 || number>100){
					printf("So phan tu khong hop le.\n"); 
				} else {
					printf("Moi ban nhap gia tri cac phan tu.\n"); 
				} 
				for(int i=0;i<number;i++){
					printf("Phan tu arr[%d]= ", i+1);
					scanf("%d", &arr[i]); 
				} 
				printf("\n");
			break;
			case 2:
				printf("Gia tri cac phan tu dang quan ly: ");
			    for(int i=0;i<number;i++){
			    	printf("%d  ", arr[i]); 
				}
				printf("\n"); 
			break;
			case 3:
				// Em chua lam duoc :((((
			break;
			case 4:
				for(int i=0;i<number;i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				printf("\nGia tri lon thu nhat trong mang la : %d", max);
				for(int i=0;i<number;i++){
					if(seconMax<max<arr[i]){
						seconMax=max-1;
					}
				}
			    printf("\nGia tri lon thu hai trong mang la : %d", seconMax);	
				printf("\n");
			break;
			case 5:
				printf("Mang truoc khi them: "); 
			    for(int i=0;i<number;i++){
			    	printf("%d ", arr[i]); 
				} 
				printf("\nNhap vi tri muon them moi phan tu: ");
				scanf("%d",&position);
				printf("Nhap gia tri muon them moi vao mang: ");
				scanf("%d",&value);
				if(position<0 || position > number){
					printf("Vi tri ban nhap khong hop le\n");
					continue; 
				}else {
					for (int i = number; i > position; i--) {
	       				arr[i] = arr[i - 1];
	    			}
	    			arr[position]=value;
	    			number++;
				}
				printf("Mnag sau khi them: "); 
				for(int i =0; i<number;i++){
					printf("%d  ", arr[i]);
				}
				printf("\n");
			break;
			case 6:
				printf("Mang truoc khi xoa: "); 
			    for(int i=0;i<number;i++){
			    	printf("%d ", arr[i]); 
				}
			    printf("\nNhap vao vi tri ban muon xoa: ");
				scanf("%d", &position);
				if(position <0 || position>number){
					printf("So ban nhap khong hop le. Vui long thu lai!");
				}
				for(int i =position; i<number-1;i++){
					arr[i]=arr[i+1];
				}
	            number--;
				printf("Mang sau khi xoa: "); 
				for(int i =0; i<number;i++){
					printf("%d  ", arr[i]);
				}
				printf("\n");
			break;
			case 7:	
			    for(int i=0; i<number;i++){
				int key = arr[i];
				int j;
				for(j=i-1; j>=0 && arr[j]>key; j--){
					arr[j+1]= arr[j];
				}
				arr[j+1]=key;
				}
				printf("Cac phan tu trong mang sau khi sap xep la: \n");
				for(int i=0; i<number;i++){
					printf("  %d  ", arr[i]);
				}
				printf("\n");
			break;
			case 8:
				printf("Ban muon tim kiem phan tu nao trong mang : ");
				scanf("%d",&total);
				for(int i = 0; i < number; i++){
					if(total == arr[i]){
						check++;
						minus = i;
						break;
					}
				}
				if(check!=-1){
					printf("Phan tu ban dang tim kiem (%d) nam o vi tri: %d trong mang",total,minus);
				}else{
					printf("Phan tu khong ton tai trong mang");
				}
				printf("\n");
			break;
			case 9:
				printf("Cac so sep chan truoc va le sau la: ");
				for(int i=1;i<number;i++){
					if(i % 2 == 0){
						printf("%d ", i);
					}
				}
			break;
			case 10:
				printf("Gia tri cac phan tu duoc dao nguoc: \n");
			    for(int i=number;i>=0;i--){
			    	printf("  %d  ", arr[i]); 
				}
				printf("\n");
			break;
			case 11:
				printf("Thoat chuong trinh.\n");
				return 0;
			break;
		default:
		    printf("Phan tu khong hop le. Vui long nhap lai.:3\n");		
		}
	}while(number!=11);
	return 0;
}




