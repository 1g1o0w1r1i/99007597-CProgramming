#include<stdio.h>
void gen_swap(void *p, void *q, int s)
{
	char *x=(char*)p;
	char *y=(char*)q;
	char temp;
	for (int i=0;i<s;i++)
	{
	    temp = x[i];
	    x[i] = y[i];
	    y[i] = temp;
	}
}


int main()
{
    int a=10, b=20;
    char c='A', d='B';
    float e=1.5, f=2.5;
    int a1[2]={1,2}, a2[2]={3,4};
    
    gen_swap(&a, &b,sizeof(int));
    printf("a=%d,b=%d\n",a,b);
    
    gen_swap(&c, &d,sizeof(char));
    printf("c=%c,d=%c\n",c,d);
    
    gen_swap(&e, &f,sizeof(float));
    printf("e=%.2f,f=%.2f\n",e,f);
    
    gen_swap(&a1, &a2,sizeof(int));
    for(int i=0;i<2;i++){
            printf("a1[%d]=%d,a2[%d]=%d\n",i,a1[i],i,a2[i]);
    }
   return 0;
}
    
    
    
    




  
