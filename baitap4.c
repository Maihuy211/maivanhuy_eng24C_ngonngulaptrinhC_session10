# include<stdio.h>
int main(){
	int n[]={2,5,7,8,4,1,6,874,12,89,64,21,11};
	int i,size=sizeof(n)/sizeof(int);
	printf("cac phan tu trong mang khi chua sap xep la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
	int min,j;
	for(i=0;i<size;i++){
		min=n[i];
		for(j=i+1;j<size;j++){
			if(n[j]<min){
				min=n[j];
				n[j]=n[i];
				n[i]=min;
			}
		}
	}
	printf("cac phan tu khi duoc sap xep lai theo thu tu tang dan la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
	return 0;
}
