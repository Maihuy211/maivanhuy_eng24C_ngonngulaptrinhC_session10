# include<stdio.h>
int main(){
	int n,m;
		int a[100][100];
		int i,j;
		printf("Nhap so hang: ");
		scanf("%d",&n);
		printf("Nhap so cot: ");
		scanf("%d",&m);
		printf("nhap gia tri cho mang:\n");
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("a[%d][%d]= ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("gia tri cac phan tu trong mang la:\n");
	    for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("%d ",a[i][j]);
	    	}
	    printf(" \n");
		}
		int k[100],temp;
		if(n==m){
			for(i=0;i<n;i++){
					k[i]=a[i][n-1-i];
			    }
			printf ("duong cheo phu sau khi xap xep la: ");
			for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if (k[j+1]<k[j]){
                        temp=k[j];
                        k[j]=k[j+1];
                        k[j+1]= temp;
                    }
                }
		    }
		    for(i=0;i<n;i++){
		        printf("%d ",k[i]);
			}
			}else{
	    		printf("mang khong co duong cheo phu");
	    		}
	return 0;
	}
