# include<stdio.h>
int main(){
	int n[]={2,4,5,8,7,5,6,987,54,89};
	int size=sizeof(n)/sizeof(int);
    int i,x;
	int cout=0; 
		printf("cac phan tu trong mang la: \n");
	for(i=0;i<size;i++){
		printf("n[%d]=%d\n",i,n[i]);
	}
	printf("nhap mot so: ");
	scanf("%d",&x);
	int pos[size];
	for(i=0;i<size;i++){
		if(n[i]==x){
			pos[cout++]=i;
		}
	}
		if(cout==-1){
	        printf("khong co phan tu nay trong mang\n");
		}else{
			printf("cac vi tri cua phan tu giong %d la: \n",x);
			for(i=0;i<cout;i++){
		        printf("%d ",pos[i]);
	        }
	    }
	return 0;
}		
