#include <stdio.h>
#include <math.h>

int main()
{
    int rect1[4], rect2[4];
    int left, bottom, right, top, side, area;

    scanf("%d %d %d %d", &rect1[0], &rect1[1], &rect1[2], &rect1[3]);
    scanf("%d %d %d %d", &rect2[0], &rect2[1], &rect2[2], &rect2[3]);

    left = rect1[0] < rect2[0] ? rect1[0] : rect2[0];
    bottom = rect1[1] < rect2[1] ? rect1[1] : rect2[1];
    right = rect1[2] > rect2[2] ? rect1[2] : rect2[2];
    top = rect1[3] > rect2[3] ? rect1[3] : rect2[3];

    side = right - left > top - bottom ? right - left : top - bottom;

    area = side * side;
    printf("%d", area);

    return 0;
}
