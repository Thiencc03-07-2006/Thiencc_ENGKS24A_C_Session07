#include <stdio.h>

int main(){
	int arr[5]={9,8,7,6,5},i=0;
	while(i<sizeof(arr)/sizeof(arr[0])){
		printf("%d\n",arr[i]);
		++i;
	}
	printf("do dai %d",sizeof(arr)/sizeof(arr[0]));
	return 0;
}
