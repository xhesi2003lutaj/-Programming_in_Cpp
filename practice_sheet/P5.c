#include<stdio.h>
#include<stdbool.h>
bool odd(unsigned char data){
    int last=data&1;
    printf("%d\n", last);
    if(last==0){
        return true;

    }
    else if (last==1){
       return false;
    }

}
int main(){
    unsigned char data;
    scanf("%c",&data);
    
    if(odd(data)==true){
        printf("even");
    //}else if((odd(data))==false)
   // {
    }
   else{
     printf("odd");
   }
    
    return 0;
}