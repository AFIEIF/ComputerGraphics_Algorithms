#include <stdio.h>

int main()
{
    int xc, yc, r;
    printf("Enter center x,y for circle : ");
    scanf("%d%d", &xc, &yc);
    printf("Enter radius r of circle : ");
    scanf("%d", &r);
    int x = 0, y = r, p = 1 - r;
    printf("\nK\tP\tX\tY\tPlot\tP\n");
    int k = 0;
    printf("%d\t%d\t%d\t%d\t(%d,%d)\t%d\n", k, 0, x, y, x + xc, y + yc, p);
    k++;
    while (x <= y)
    {
        if (p < 0)
        {
            int X = x;
            ++x;
            printf("%d\t%d\t%d\t%d\t(%d,%d)\t", k, p, x, y, x + xc, y + yc);
            p = p + (2 * X) + 3;
            printf("%d\n", p);
        }
        else
        {
            int X = x;
            int Y = y;
            ++x;
            --y;
            printf("%d\t%d\t%d\t%d\t(%d,%d)\t", k, p, x, y, x + xc, y + yc);
            p = p + (2 * X) - (2 * Y) + 5;
            printf("%d\n", p);
        }
        k++;
    }
}