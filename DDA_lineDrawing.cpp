#include <stdio.h>
#include <stdlib.h>
#define Round(x) x + 0.5
int main()
{
    int x1, y1, x2, y2;
    float x, y;
    printf("Enter X1 and Y1 : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter X2 and Y2 : ");
    scanf("%d %d", &x2, &y2);
    x = x1;
    y = y1;
    int dx = x2 - x1, dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float delx = (float)(dx) / steps, dely = (float)(dy) / steps;
    printf("\nK\tx\ty\t(x)\t(y)\t(x,y)\n");
    int rx = Round(x);
    int ry = Round(y);
    printf("%d\t%.1f\t%.1f\t%d\t%d\t(%d,%d)\n", 0, x, y, rx, ry, rx, ry);
    for (int k = 1; k <= steps; k++)
    {
        x += delx;
        y += dely;
        rx = Round(x);
        ry = Round(y);
        printf("%d\t%.1f\t%.1f\t%d\t%d\t(%d,%d)\n", k, x, y, rx, ry, rx, ry);
    }
}