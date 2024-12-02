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
   for(i=0;i<n;i++){
        for(j=0;j<m-1;j++){
            for(k=j+1;k<m;k++){
                if (a[i][j]>a[i][k]){
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
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
