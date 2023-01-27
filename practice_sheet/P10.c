
#include <stdio.h>
#include <stdlib.h>
void print_matrix(int **A, int rows, int cols){
int i,j;
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
}
}
int main(){
    FILE *xl=fopen("matrix.txt","r");
    if(xl==NULL){
        printf("Error in the input file");
    }
    FILE *ab=fopen("matrixwritten.txt","wb+");
    if(ab==NULL){
        printf("error allocating memory");
        exit(1);
    }
    int rows,cols,position1,position2,value;
     int i,j;

    fscanf(xl,"%d%d",&rows,&cols);
   
//for matrices always allocate memory or it will not be valid when calling the function
    int **A=malloc(sizeof(int)*rows);
    for(i=0;i<rows;i++){
        A[i]=malloc(sizeof(int)*cols);
    }
   
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            A[i][j]=0;
        }
    }
    while(!feof(xl)){
        size_t size=fscanf(xl,"%d%d%d",&position1,&position2,&value);
        A[position1-1][position2-1]=value;
    }//don't write inside the file you are reading cause it will iterate through it and write in each loop
       char *str="\n";
       fwrite(&A,sizeof(int),rows*cols,ab);
       fwrite(str,sizeof(char),1,ab);
    while (!feof(ab))
    {
        fread(A,sizeof(int),rows*cols,ab);
    }
    
       
       for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",A[i][j]);
        }printf("\n");//printf after rows
       }
      
    
    print_matrix(A,rows,cols);
    for(i=0;i<rows;i++){
  
  free(A[i]);
  }
free(A);
    printf("xhesilda\n");
    //fclose(xl);
    
    
    printf("xhesilda\n");
 
    return 0;
}



