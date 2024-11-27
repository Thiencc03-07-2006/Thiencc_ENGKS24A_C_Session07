#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},i=0,max=arr[0],min=arr[0];
	while(i<sizeof(arr)/sizeof(arr[0])){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
		++i;
	}
	printf("gia tri lon nhat la %d, nho nhat la %d",max,min);
	return 0;
}
