

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }  
 
    for( i=n-1;i>=0;i--){
        printf("%d %d\n",arr[i],arr[i]*arr[i]);
    }
    FILE *fp;
    fp=fopen("squaresP3.txt","wb+");
    if(fp==NULL){
        printf("error");
    }
    for(i=n-1;i>=0;i--){//not printing reverse
    fwrite(arr,sizeof(int),4,fp);
    fwrite(" ",sizeof(int),1,fp);
    fwrite(arr,sizeof(int),4,fp);
    fwrite(arr,sizeof(int),4,fp);
    }
    fclose(fp);
    int arr1[100];
    while (!feof(fp))
    {
        fread(arr1,sizeof(int),4,fp);
        printf("%ls\n",arr1);
         
    }
       
    

        
    

    return 0;
}