# include<stdio.h>
int main(){
	int n[]={2,5,7,8,4,1,6,874,6,12,89,64,21,11};
	int i,size=sizeof(n)/sizeof(int);
	printf("cac phan tu trong mang khi chua sap xep la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
    int j,x;
	for(i=0;i<size;i++){
		for(j=0;j<size-1-i;j++){
			if(n[j+1]<n[j]){
				x=n[j];
				n[j]=n[j+1];
				n[j+1]=x;
			}
		}
	}
	printf("cac phan tu khi duoc sap xep lai theo thu tu tang dan la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
	return 0;
}
