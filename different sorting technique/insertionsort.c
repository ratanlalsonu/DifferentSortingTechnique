#include<stdio.h>
int main(){
            int a[100],n,i,j,k;
            printf("enter the number of element in array: ");
            scanf("%d", &n);
            printf("enter element in array: ");
            for(i=0;i<n;i++){
                scanf("%d", &a[i]);
            }
            for(k=0;k<n;k++){
                int temp=a[k];
                for(i=k-1;temp<a[i] && i>=0;i--){
                    a[i+1]=a[i];
                }
                a[i+1]=temp;   
            }
            printf("sorted array\n");
            for(i=0;i<n;i++){
               printf("%d", a[i]);
            }
    return 0;
}
