#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int x1,x2,y1,y2,dx,dy,s1,s2,p,swapped=0;
    printf("Enter x1 and y1 :");
    scanf ("%d%d",&x1,&y1);
    printf("\nEnter x2 and y2 :");
    scanf ("%d%d",&x2,&y2);
    s1 = x2>x1 ? 1 : -1 ;
    s2 = y2>y1 ? 1 : -1 ;
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    //printf("\n%d %d\n", dx ,dy );
    if(dy>dx)
    {
        int temp = dy;
        dy = dx;
        dx = temp;
        swapped = 1;
    }
    p = 2*dy-dx;
    int loop = dx;
    int i=1;
    printf("\n dx = %d , dy = %d swapping  = %s\n",dx, dy, swapped==0?"false":"true");
    printf("\nS no \t Pk \t Xk+1 \t Yk+1 \t Plot \t\t Pk+1");
    printf("\n%d \t %s %d \t %d \t (%d,%d) \t %s",0,"initial",x1,y1,x1,y1,"P = 2*dy-dx = ");
    while(loop--)
    {
        char exp[20];
        printf("%d\n%d \t %d ",p,i,p);
        if(p<0 && swapped == 0)
        {
            x1 = x1 + s1;
            p = p + 2*dy;
            strcpy(exp,"P = P + 2*dy = ");
        }
        else if(p<0 && swapped == 1)
        {
            y1 = y1+s2;
            p = p + 2*dy;
            strcpy(exp,"P = P + 2*dy = ");
        }
        else if(p>=0)
        {
            x1 = x1 + s1;
            y1 = y1 + s2;
            p = p + 2*dy - 2*dx;
            strcpy(exp,"P = P + 2*dy - 2*dx = ");
        }
        printf("\t %d \t %d \t (%d,%d) \t %s",x1,y1,x1,y1,exp);

        i++;
        }
        printf("%d", p);
}
