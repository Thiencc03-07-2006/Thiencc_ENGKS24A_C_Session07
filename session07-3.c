#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},i=0,even=1;
	while(i<sizeof(arr)/sizeof(arr[0])){
		if(arr[i]%2==0){
			printf("so even %d\n",arr[i]);
			even=0;
		}
		++i;
	}
	if(even){
			printf(" ko co so even\n");
		}
	return 0;
}
