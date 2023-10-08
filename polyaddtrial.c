#include <stdio.h>
void display(int x[],int num);
void add(int a[],int n1,int b[],int n2);
void main() {
    int a[40],b[40],n1,n2,i,m;
    printf("enter number of terms in term1");
    scanf("%d",&n1);
printf("enter exponent and coeffecient in order");
for(i=1;i<=2*n1;i++)
{
    scanf("%d",&a[i]);
}
a[0]=n1;
printf("enter number of terms in term2");
    scanf("%d",&n2);
printf("enter exponent and coefficient in order");
for(i=1;i<=2*n2;i++)
{
    scanf("%d",&b[i]);
}
b[0]=n2;
printf("menu:\n1.display\n2.add");
scanf("%d",&m);
if(m==1)
{   printf("array 1\n");
    display(a,2*n1);
    printf("\n");
    printf("array 2\n");
    display(b,2*n2);
}
else if(m==2)
{
    add(a,n1,b,n2);
}}
void add(int a[],int n1,int b[],int n2)
{
    int c[40],p,q,r,i;
    p=q=r=1;
    while (p<=2*n1 && q<=2*n2)
    {
        if(a[p]==b[q])
        {
            c[r]=b[q];
            c[r+1]=a[p+1]+b[q+1];
            if (c[r+1]!=0)
            {
                c[r]=a[p];
                r=r+2;
            }
            p=p+2;
            q=q+2;
    }
    else if (a[p]<b[q])
    {
        c[r+1]=b[q+1];
        c[r]=b[q];
        q=q+2;
     r=r+2;
    }
    else if(a[p]>b[q])
    {
        c[r+1]=a[p+1];
        c[r]=a[p];
        p=p+2;
     r=r+2;
    }
}
while (p<=2*n1)
{
    c[r]=a[p];
    c[r+1]=a[p+1];
    p=p+2;
    r=r+2;
    
}
while (q<=2*n2)
{
    c[r]=b[q];
    c[r+1]=b[q+1];
    q=q+2;
    r=r+2;
}
c[0]=(r-1)/2;
printf("exponent form");
for (i=1;i<=2*c[0];i=i+2)
{
     printf("%dx^%d", c[i + 1], c[i]);
     if (i < 2 * c[0] - 1) {
            printf("+");}
}}
void display (int x[],int num)
{ int i;
    for(i=0;i<=num;i++)
    {
        printf("%d\t",x[i]);
    }
}
