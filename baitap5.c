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
		printf("nhap mot so: ");
	scanf("%d",&x);
    int start=0;
    int end=sizeof(n)/sizeof(int);
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(n[mid]==x){
			break;
		}else if(n[mid]>x){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	if(n[mid]==x){
		printf("vi tri cua phan tu giong %d la: %d",x,mid);
	}else{
		printf("khong co phan tu nay trong mang\n");
	}
	return 0;
}
