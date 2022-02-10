#include<stdio.h>
void swap(void*a,void*b)
{
        void*temp;
        temp=*(void**)a;
        *(void**)a=*(void**)b;
        *(void**)b=temp;
}
int main()
{
        int a=97,b=98;
        swap(&a,&b);
        printf("%d %d\n",a,b);
}
