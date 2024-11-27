#include <stdio.h>

int main() {
    int n,m,i=0,j;
    printf("nhap so hang: ");
    scanf("%d",&n);
    printf("nhap so cot: ");
    scanf("%d",&m);
    int arr[n][m];
	while(i<n){
		j=0;
        while(j<m){
            printf("nhap gia tri vi tri hang %d cot %d: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
            j++;
        }
        i++;
    }
    i=0;
    printf("\nMa tran\n");
    while(i<n){
    	j=0;
        while(j<m){
        	if((i==0||i==n-1)||(j==0||j==m-1)){
        		printf("%d ",arr[i][j]);
			}else{
				printf("  ");
			}
			j++;
        }
        printf("\n");
        i++;
    }
	return 0;
	
}

