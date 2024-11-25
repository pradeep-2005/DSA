#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[]={1,2,3,4,5,6};
    int  key;
    int flag=0;
    int index;
    int n = sizeof(a)/sizeof(a[0]);
    printf("enter the key value :");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if (key==a[i]){
            flag=1;
            index =i;
        }
        
    }
    if (flag==0){
        printf("element is not found ");
    }
    else{
        printf("element is found at %d ",index);
    }
    
    
    
    
}