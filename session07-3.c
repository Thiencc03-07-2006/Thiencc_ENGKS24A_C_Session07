#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},i=0,chan=1;
	while(i<sizeof(arr)/sizeof(arr[0])){
		if(arr[i]%2==0){
			printf("so chan %d\n",arr[i]);
			chan=0;
		}
		++i;
	}
	if(chan){
			printf(" ko co so chan\n");
		}
	return 0;
}
