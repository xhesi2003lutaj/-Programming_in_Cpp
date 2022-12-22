`//#include<stdlib.h>
#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  char c;
    getchar();
  scanf("%c",&c);


  int i,j;
  for(i=1;i<=n;++i){
    for(j=1;j<=i;++j){
          printf("%c",c);
    }
  printf("\n");

  }
    return 0;
}