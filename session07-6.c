#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},i=0;
	while(i<sizeof(arr)/sizeof(arr[0])){
		if(arr[i]%2==0){
			arr[i]+=3;
		}else{
			arr[i]+=2;
		}
		++i;
	}
	i=0;
	while(i<sizeof(arr)/sizeof(arr[0])){
		printf("arr[%d]=%d\n",i,arr[i]);
		++i;
	};
	return 0;
}
