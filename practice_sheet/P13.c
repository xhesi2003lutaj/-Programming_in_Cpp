/*
BT
*/
#include <stdio.h>
typedef struct coffee {
    int id;
    char property;
} coffee;
void set_coffee_property(struct coffee* c, const unsigned char property){
    if (c->property&property) {
        return;
    }
    c->property^=property;
    unsigned char mask,k;
   
}
void unset_coffee_property(struct coffee* c, const unsigned property){
    if (!(c->property&property)) {
        return;
    }
    c->property^=property;
}
int main(){
    const unsigned char regular = 1<<0;
    const unsigned char espresso = 1<<1;
    const unsigned char double_espresso = 1<<2;
    const unsigned char milk = 1<<3;
    const unsigned char cream = 1<<4;
    const unsigned char soy_milk = 1<<5;
    const unsigned char sugar = 1<<6;
    const unsigned char sweetener = 1<<7;
    coffee c;
    c.id=1;
    c.property=0;
    printf("%d\n",c.property);
    set_coffee_property(&c, regular);
    set_coffee_property(&c, espresso);
    set_coffee_property(&c, cream);
    set_coffee_property(&c, soy_milk);
    set_coffee_property(&c, sugar);
    set_coffee_property(&c, sugar);
    set_coffee_property(&c, sugar);
    printf("%d\n",c.property);
    unset_coffee_property(&c, sugar);
    unset_coffee_property(&c, sugar);
    unset_coffee_property(&c, soy_milk);
    printf("%d\n",c.property);
    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
// struct coffee {
// int id;
// };
// void set_coffee_property(struct coffee *c, const unsigned char propertyy){
   
//      switch (propertyy)
//      {
//      case 'r':
//           (c->id=c->id|(1<<0));
//         break;
//      case 'e':
//           (c->id=c->id| (1<<1));
//         break;
//     case 'd':
//           (c->id=c->id | (1<<2));
//         break;
//     case 'm':
//           (c->id=c->id | (1<<3));
//         break;
//     case 'c':
//           (c->id=c->id | (1<<4));
//         break;
//     case 's':
//           (c->id=c->id | (1<<5));
//         break;
//     case 'u':
//           (c->id=c->id | (1<<6));
//         break;
//     case 'w':
//           (c->id=c->id | (1<<7));
//         break;
//      default:
//      printf("invalid property, no such coffee available\n");
//      exit(1);
//         break;
    
//    }
//       unsigned char mask,k;
//     for(int i=7;i>=0;i--){
//       mask=1<<i;
//        k=c->id&mask;
//     if(k==0){
//         printf("0");
//     }
//        else{
//          printf("1");  
//        } 
// }
//     printf("the new id of your cofee %d\n",c->id);
   
    
// }
// void unset_coffee_property(struct coffee *c, const unsigned propertyy){
//        switch (propertyy)
//      {
//      case 'r':
//           (c->id=c->id& (~(1<<0)));
//         break;
//      case 'e':
//           (c->id=c->id| (1<<1));
//         break;
//     case 'd':
//           (c->id=c->id | (1<<2));
//         break;
//     case 'm':
//           (c->id=c->id | (1<<3));
//         break;
//     case 'c':
//           (c->id=c->id | (1<<4));
//         break;
//     case 's':
//           (c->id=c->id | (1<<5));
//         break;
//     case 'u':
//           (c->id=c->id | (1<<6));
//         break;
//     case 'w':
//           (c->id=c->id | (1<<7));
//         break;
//      default:
//      printf("invalid property, no such coffee available\n");
//      exit(1);
//         break;
    
//    }
//       unsigned char mask,k;
//     for(int i=7;i>=0;i--){
//       mask=1<<i;
//        k=c->id&mask;
//     if(k==0){
//         printf("0");
//     }
//        else{
//          printf("1");  
//        } 
// }
//     printf("the new id of your cofee after unseting %d\n",c->id);

// }
// int main(){
//  struct coffee Caffee={Caffee.id=00000000};
          
 
//  printf("For regular press 'r'\n,for espresso press 'e'\n double espresso pres 'd'\n,milk press 'm'\n cream 'c'\n soy_milk 's'\n sugar 'u' \n sweetener 'w'\n");
//  unsigned char c;
//  getchar();
//  scanf("%c",&c);
//  //creating a regular coffee with sugar and milk
//  set_coffee_property(&Caffee, c);
//  unset_coffee_property(&Caffee, c);

 


// return 0;
// }