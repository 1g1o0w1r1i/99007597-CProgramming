#include<stdio.h>
int setbit(unsigned int x,unsigned int y){
    x=x | (1<<y);
    return x;
    
}
int clearbit(unsigned int x,unsigned int y){
    x=x & ~(1<<y);
    return x;
}
int getbit(unsigned int x,unsigned int y){
    x=x & (1<<y);
    return x;
}
int togglebit(unsigned int x,unsigned int y){
    x=x ^ (1<<y);
    return x;
}
int main()
{
    unsigned int num;
    unsigned int shift;
    scanf("%x,%x",&num,&shift);
    printf("get bit =%x",getbit(num,shift));
    printf("set bit =%x",setbit(num,shift));
    printf("clear bit =%x",clearbit(num,shift));
    printf("toggle bit =%x",togglebit(num,shift));
}
