#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct river {
char name[40];
int length;
int drainage_area;
};typedef struct river Rivers;

int compare_lenght(const void *a,const void *b){
  const Rivers *a1=(const Rivers *)a;
  const Rivers *b1=(const Rivers *)b;
  
  // return (a1->length - b1->length);
  if(a1->length<b1->length){
    return 1;
  }
  else if(a1->length > b1->length){
    return -1;
}
else{
  return 0;
}
}
int main(){
   FILE *fp=fopen("data.txt","r");
   if(fp==NULL){
    printf("error in reading the file");
    exit(1);
   }
    FILE *l=fopen("lumenj.txt","w");
   if(l==NULL){
    printf("error allocating memory");
    exit(1);
   }
   Rivers lumenj[30];
   int count=0;
   // changed the loop to avoid count++ for the EOF symbol
   while(1){
	 // I woul not read binary here, because you do not know 
	 // the size of data expected for every component
	 // The simplest is to use fscanf
     //size_t size= fread(lumenj[i]-,sizeof(Rivers),sizeof(lumenj),fp);
     fscanf(fp, "%s", lumenj[count].name);
     if (feof(fp))
		break;
     fscanf(fp, "%d", &lumenj[count].length);
	 fscanf(fp, "%d", &lumenj[count].drainage_area);
	 // writing should not happen here but after sorting
     //fwrite(&lumenj,sizeof(Rivers),size,l);//writing ok
     count++;
   }
  qsort(lumenj,count,sizeof(Rivers),compare_lenght);//not ok
  // writing the data after the sorting, not before
  for(int i = 0; i<count; i++) {
	  fprintf(l, "%s", lumenj[i].name);
	  fprintf(l, "%c", ' ');
	  fprintf(l, "%d", lumenj[i].length);
	  fprintf(l, "%c", ' ');
	  fprintf(l, "%d", lumenj[i].drainage_area);
	  fprintf(l, "%c", ' ');
	  fprintf(l, "%c", '\n');
  }
  // do not forget to close the files
  fclose(fp);
  fclose(l);
  

    return 0;
}