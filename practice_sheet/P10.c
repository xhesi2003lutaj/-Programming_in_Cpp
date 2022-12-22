
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















// void print_matrix(int **A, int rows, int cols);
// int main(){
// 	FILE *fp = NULL;
// 	fp = fopen("matrix.txt", "r");
// 	if(fp==NULL){
// 		printf("\aFile could not be found!\n");
// 		exit(1);
// 	}
// 	int arr[8];
// 	int rows;
//     int cols;
// 	int pos_ai ;
// 	int pos_aj ;
// 	int a ;
// 	int pos_bi ;
// 	int pos_bj;
// 	int b;
//   	int i, value = 0;
// 	fscanf (fp, "%d", &value);    
//   	while (!feof (fp)){  
//       arr[i] = value;
//       fscanf (fp, "%d", &value);
//       i++;

//     }
// 	 rows = arr[0];
//      cols = arr[1];
// 	 pos_ai = arr[2];
// 	 pos_aj = arr[3];
// 	 a = arr[4];
// 	 pos_bi = arr[5];
// 	 pos_bj = arr[6];
// 	 b = arr[7];

// 	    for(i=0;i<8;i++){
// 		printf("%d ",arr[i]);
// 	}
// 	int **matrix = (int**)malloc(sizeof(int*)*rows);
// 	if(matrix==NULL)
// 		exit(1);
// 	for(i=1; i<=rows; i++){
// 		matrix[i] = (int*)malloc(sizeof(int)*cols);
// 		if(matrix[i]==NULL)
// 			exit(2);
// 	}
	
// 	int j;
// 	for(i=1; i<=rows; i++){
// 		for(j=1; j<=cols; j++){
// 			matrix[i][j] = 0;
// 		}
// 	}
	
// 	matrix[pos_ai][pos_aj] = a;
// 	matrix[pos_bi][pos_bj] = b;
	
// 	print_matrix(matrix, rows, cols);
	
// 	fclose(fp);
// 	return 0;
// }
// void print_matrix(int **A, int rows, int cols){
// 	int i, j;
// 	for(i=1; i<=rows; i++){
// 		for(j=1; j<=cols; j++){
// 			printf("%d ", A[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// #include<stdio.h>
// #include<stdlib.h>
// void print_matrix(int **A, int rows, int cols){
//     int i,j;
//     for(i=0;i<rows;i++){
//         for(j=0;j<cols;j++){
//          printf("%d",A[i][j]);
//         }
//     }

// }
// int main(){
//    int n;
//    int rows;
//    int cols;
//    int pos1;
//    int pos2;
//    int value;
//    int value2;
//    int pos3;
//    int pos4;    
   
//    FILE *fp;
//     fp=fopen("matrix.txt","r");
//     if(fp==NULL){
//         printf("error opening file");
//         exit(1);
//     }
//     fscanf(fp, "%d", &rows);
//     fscanf(fp, "%d", &cols);
// 	printf("%d%d",rows,cols);
//    int **arr=(int **)malloc(sizeof(int*)*rows);
//    if(arr==NULL){
// 	printf("error\n");


//    for(int i=0;i<rows;i++){
// 	if(!rows){
// 		printf("jkbuv");
// 	}
//       arr[i]=(int *)malloc(sizeof(int)*cols);
//    }
//    printf("%d%d",rows,cols);
//    for(n=0;n<rows;n++){
//     for(int i=0;i<cols;i++){
//         arr[n][i]=0;
//     }
//    }
//     printf("bering");

//     while (!feof)
//     {
//         fscanf(fp, "%d", &pos1);
//         fscanf(fp, "%d", &pos2);
// 		printf("%d%d",pos1,pos2);//its not reading the other values
//         fscanf(fp,"%d",&arr[pos1-1][pos2-1]);
//     }
 
//       print_matrix(arr,rows,cols);


//    }
//     return 0;
// }