#define sqr(x) (x)*(x)
int main()
{
    printf("Size of int %d\n",sizeof(int));
    printf("Size of float %d\n",sizeof(float));
    printf("Size of double %d\n",sizeof(double));
    printf("Size of char %d\n",sizeof(char));
    printf("Size of long %d\n",sizeof(long));
    int a=100;
    int *p,**q;
    p=&a;
    q=&p;
    printf("%d %u and  address of p is %u\n",*p,p,&p);
    printf("%d %d %u adderess of q is %u\n",**q,*q,q,&q);
}