#include<stdio.h>
int main(){
            int a[100],n,i,j,temp;
            printf("enter the number of element in array: ");
            scanf("%d", &n);
            printf("enter element in array: ");
            for(i=0;i<n-1;i++){
                scanf("%d", &a[i]);
            }
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                }
            }
            printf("sorted array\n");
            for(i=0;i<n-1;i++){
               printf("%d", a[i]);
            }
    return 0;
}
