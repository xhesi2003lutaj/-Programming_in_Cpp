#include<stdio.h>
#include<stdlib.h>
int main(){
   char c;
   int i;
   char arr[10];
   char arr1[10];
   scanf("%c",&c);
   char nl='\n';
   FILE *xl;
   xl=fopen("generate.txt","wb");
   if(xl==NULL){
      printf("COuldn't open file");
      exit(1);
   }
   for(i=0;i<10;i++){
      arr[i]=c+i; //if you do *arr, then don't include [i] in fwrite
      fwrite(&arr[i],1,1,xl);
      fwrite(" ",1,1,xl);
      fwrite(&arr[i],1,1,xl);
      fwrite(&arr[i],1,1,xl);
      fwrite("\n",1,1,xl);
   }
   fclose(xl);
   FILE *x;
   x=fopen("generate.txt","rb");
     if(x==NULL){
      printf("COuldn't open file");
      exit(1);
   }
   while (!feof(x))
   {
      fread(&arr1,1,1,x);/* code */
      printf("%c",*arr1);
   
   }
   fclose(x);

   return 0;
}

