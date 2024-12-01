# include<stdio.h>
int main(){
	int n[]={2,5,7,8,4,1,6,874,12,89,64,21,11};
	int i,size=sizeof(n)/sizeof(int);
	printf("cac phan tu trong mang khi chua sap xep la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
	int key,j;
	for(i=0;i<size;i++){
		int key=n[i];
		int j= i-1;
		while(j>=0&&key<n[j]){
            n[j+1]=n[j];
            j--;
		}
	    n[j+1]=key;
	}
	printf("cac phan tu khi duoc sap xep lai theo thu tu tang dan la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
	return 0;
}
