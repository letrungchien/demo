#include<stdio.h>

int main(){
		int n,x;
	int arr[100];
	int chon=0; 
	int tim=-1;
	int vitrithem,giatri,vitrixoa;
		int max = arr[0];
	do{
		printf("                MENU \n");
		printf("1 nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2 in ra gia tri cac phan tu dang quan ly \n");
		printf("3 in ra gia tri lon nhat cua mang\n");
		printf("4 in ra cac phan tu la so nguyen to trong mang \n");
		printf("5 them mot phan tu vao trong mang\n");
		printf("6 xoa mot phan tu trong mang\n");
		printf("7 sap xep theo thu tu tang dan\n");
		printf("8 tim kiem phan tu va in ra vi tri\n");
		printf("9 thoat\n");
		
		printf("moi ban chon chuc nang\n");
		scanf("%d",&chon);
	switch(chon){
		
		case 1:
			printf("moi ban nhap kich thuc mang\n");
			scanf("%d",&n);
			for(int i=0;i<n;i++){
				printf("moi ban nhap gia tri cua arr[%d]\n",i);
				scanf("%d",&arr[i]);
			}
		break;
		case 2:
			for(int i=0 ;i<n;i++){
				printf("arr[%d] = %d \n",i,arr[i]);
			}
			printf("\n");
	    	break;	
		case 3:
			 max = arr[0];
               for (int i = 1; i < n; i++) {
                   if (arr[i] > max) {
                      max = arr[i];
        }
    }
               printf("Gia tri lon nhat trong mang la %d\n", max);

	     	break;
		case 4:
			printf("Cac so nguyen to trong mang la ");
                for (int i = 0; i < n; i++) {
                    int isPrime = 1;
                    if (arr[i] < 2) isPrime = 0;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
	     	break;
		case 5:
			printf("Nhap vi tri muon them moi phan tu: ");
			scanf("%d",&vitrithem);
			
			printf("Nhap gia tri muon them moi vao mang: ");
			scanf("%d",&giatri);
		
			if(vitrithem<0 || vitrithem > n){
				printf("Vi tri ban nhap khong hop le\n");
			}else {
				for (int i = n; i > vitrithem; i--) {
       				arr[i] = arr[i - 1];
    			}
    			arr[vitrithem]=giatri;
    			n++;
    			
			for(int i =0; i<n;i++){
				printf("arr[%d] = %d \n", i,arr[i]);
		      	}
			}
		
		
	     	break;
		case 6:
			printf("Nhap vao vi tri ban muon xoa: ");
			scanf("%d", &vitrixoa);
			if(vitrixoa <0 || vitrixoa>=n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
			}
			
			for(int i =vitrixoa; i<n-1;i++){
				arr[i]=arr[i+1];
			}
			n--; 
		
			for(int i =0; i<n;i++){
				printf("arr[%d] =%d\n",i, arr[i]);
			}
	     	break;
		case 7:
				printf("gia tri truoc sap xep \n ");
			for(int i=0 ;i<n;i++){
				printf("arr[%d] = %d \n",i,arr[i]);
			}
		     	printf("\n");
			for(int i=0 ;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
					if(arr[j]>arr[j+1]){
					int temp=arr[j];
					arr[j] =arr[j+1];
					arr[j+1] = temp;
				}
				}
			}
				printf("gia tri sau sap xep \n ");
			for(int i=0 ;i<n;i++){
				printf("arr[%d] = %d \n",i,arr[i]);
			}
	     	break;
		case 8:
		
			printf("Nhap phan tu can tim: ");
                   scanf("%d", &x);
                   tim=-1;
			for(int i=0 ;i<n;i++){
				if(arr[i]==x){ 
					printf("gia tri %d duoc tim thay tai vi tri arr[%d] \n",x,i);
					tim++;
				break;	
				}
			}
			if(tim==-1){
					printf("gia tri khong ton tai trong mang\n");
				}
	     	break;
		case 9:
			printf("chuong trinh ket thuc\n");
	     	break;
	
	 default :
         	printf("lua chon khong hop le\n");	
}
	}while(chon !=9);
	
	return 0;
}

