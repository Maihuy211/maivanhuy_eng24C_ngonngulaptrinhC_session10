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
	for(i=0;i<size;i++){
		if(n[i]==x){
		    printf("vi tri cua phan tu giong %d la: %d",x,i);
			cout=1;
		}
	}
	    if(!cout){
	        printf("khong co phan tu nay trong mang\n");
		}
	return 0;
}		
