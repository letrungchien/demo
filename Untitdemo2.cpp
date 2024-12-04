#include<stdio.h>

int main(){
	int arr[50][50];
	int hang,cot,x;
	int chon;
	int tim=-1;
	long long tich=1;
	int duongcheochinh[100];
	do{
		printf("         MENU \n");
        printf("1 nhap kich co va gia tri cac phan tu cua mang\n");
	   	printf("2 in gia tri cac phan tu cua mang theo ma tran\n");
    	printf("3 in ra cac phan tu nam tren duong bien va tinh tich\n");
	    printf("4 in ra cac phan tu nam tren duong cheo chinh\n");	
	    printf("5 in ra cac phan tu nam tren duong cheo phu\n");
		printf("6 sap xep duong cheo chinh theo thu tu tang dan\n");
	   	printf("7 tim kiem mot phan tu va in ra vi tri cua phan tu trong mang\n");
    	printf("8 thoat\n");
	    printf("\n");
		//cho ng dung chon	
	    printf("moi ban lua chon chuc nang\n");
		scanf("%d",&chon);
		
		
		switch(chon){
			case 1:
				printf("moi ban nhap so hang \n");
				scanf("%d",&hang);
				printf("moi ban nhap so cot \n");
				scanf("%d",&cot);
				  for(int i=0;i<hang;i++){
				  	 for(int j=0;j<cot;j++){
				  	 	printf("moi ban nhap gia tri cua arr[%d][%d] \n",i,j);
			            	scanf("%d",&arr[i][j]);
					   }
			}
		    	break;
			case 2:
			 for(int i=0;i<hang;i++){
				  	 for(int j=0;j<cot;j++){
				  	 	printf(" %d  ",arr[i][j]);
			            	
					   }
					   printf("\n");
			}
		    	break;
			case 3:
				for(int i=0;i<hang;i++){
				  	 for(int j=0;j<cot;j++){
				  	   if(i==0 || j==0 ||i==hang-1 ||j==cot-1){
				  	   	    	printf(" %d  ",arr[i][j]);
				  	   	    	tich=tich*arr[i][j];
						 }
			            else{
			            	 printf("    ");
						}	
					   }
					   printf("\n");
			}
				printf("tich cua duong bien la = %lld \n ",tich);
		        break;
			case 4:
					printf("gia tri duong cheo chinh la \n ");
				 for (int i = 0; i < hang; i++) {
                    printf(" %d ", arr[i][i]);
                    duongcheochinh[i]=arr[i][i];
            }
                    printf("\n");

		    	break;
		 	case 5:
            printf("Cac gia tri tren duong cheo phu la:\n");
               for (int i = 0; i < hang && i < cot; i++) { 
                   printf("%d ", arr[i][cot - 1 - i]);
             }
              printf("\n");
                 break;

		case 6:
				printf("duong cheo chua duoc sap xep\n");
		 for (int i = 0; i < hang; i++) {
                    printf(" %d ", duongcheochinh[i]);
              printf("\n");      
            }
            
             for (int i = 0; i < hang-1; i++) {
             	for(int j=0;j<hang -1-i;j++){
             		if(duongcheochinh[j]>duongcheochinh[j+1]){
             			int temp=duongcheochinh[j];
             			duongcheochinh[j]=duongcheochinh[j+1];
             			duongcheochinh[j+1]=temp;
             		
				 }
    }   
}
                   printf("duong cheo da duoc sap xep\n");
                      for (int i = 0; i < hang; i++) {
                         printf(" %d ", duongcheochinh[i]);
                    
            }
		    	break;
			case 7:
				printf("Nhap phan tu can tim: ");
                   scanf("%d", &x);

				for (int i = 0; i < hang; i++) {
                   for (int j = 0; j < cot; j++) {
                       if (arr[i][j] == x) {
                       printf("Phan tu %d tim thay tai vi tri arr[%d][%d]\n", x, i, j);
                     tim++;
            break;
        }
    }
          
}  
          	if (tim==-1) {
                    printf("Khong tim thay phan tu %d trong mang\n", x);
                }
	    	break;
			case 8:
				printf(" ket thuc chuong trinh\n");
		     	break;
		default:
	    	printf("lua chon khong hop le\n");		
		}
		
	
	}while(chon !=8);
	
	return 0;
	
}

