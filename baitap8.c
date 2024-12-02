# include<stdio.h>
int main(){
	int n,m;
	printf("nhap so hang: ");
	scanf("%d",&n);
	printf("nhap so cot: ");
	scanf("%d",&m);
	printf("nhap phan tu trong mang \n");
	int i,j;
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("cac phan tu trong mang truoc khi doi cho la: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		    printf("%d ",a[i][j]);
		}
		printf(" \n");
	}		
   int k,temp;
   for(i=0;i<n-1;i++){
        for(j=0;j<m;j++){
            for(k=i+1;k<n;k++){
                if (a[i][j]>a[k][j]){
                    temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }
	printf("cac phan tu trong mang sau khi doi cho la: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		    printf("%d ",a[i][j]);
		}
		printf(" \n");
	}		
	return 0;
	}
