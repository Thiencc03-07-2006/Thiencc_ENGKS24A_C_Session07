#include <stdio.h>

int main() {
    int n,m,i=0,check,index;
    printf("nhap so phan tu trong mang: ");
    scanf("%d",&n);
    int arr[n];
	while(i<n){
		printf("nhap gia tri thu %d: ",i+1);
        scanf("%d", &arr[i]);
        i++;
    }
    i=0;
    printf("so nguyen to trong mang: ");
    while(i<n){
        index=2;check=0;
        if(arr[i]>1){
			while(index<=arr[i]){
				if(arr[i]%index==0){
					check++;
				}
			index++;
			}
		}else{
			check=2;
		}
		if(check==1){
			printf("%d ",arr[i]);
		}
	i++;
    }
	return 0;
}

