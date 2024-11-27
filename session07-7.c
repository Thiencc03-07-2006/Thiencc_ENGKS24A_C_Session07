#include <stdio.h>

int main(){
	int n;
	printf("vui long nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n],i=0;
	while(i<n){
		arr[i]=2;
		while(arr[i]%2==0){
			printf("nhap vao so thu %d cua mang: ",i+1);
			scanf("%d",&arr[i]);
		}
		++i;
	}
	i=0;
	while(i<n){
		printf("arr[%d]=%d\n",i,arr[i]);
		++i;
	};
	return 0;
}
