#include <stdio.h>
#include <string.h>
void strRev(char a[1000])
{
    char b[1000];
    strcpy(b, a);
    for (int i = 0; i < strlen(a); i++)
        a[i] = b[strlen(b) - 1 - i];
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char a[1000], b[1000];
        gets(a);
        scanf("\n");
        gets(b);

        // Đảo ngược chuỗi
        strRev(a);
        strRev(b);
        // Bù 0
        if (strlen(a) >= strlen(b))
        {
            strcat(a, "0");
            while (strlen(b) < strlen(a))
                strcat(b, "0");
        }
        else
        {
            strcat(b, "0");
            while (strlen(a) < strlen(b))
                strcat(a, "0");
        }

        // Tính toán
        int s[10000] = {0}, remainder = 0;
        for (int i = 0; i < strlen(a); i++)
        {
            int x = (a[i] - '0') + (b[i] - '0') + remainder;
            remainder = x / 10;
            s[i] = x % 10;
        }
        for (int i = strlen(a) - 1; i >= 0; i--)
        {
            if (i == strlen(a) - 1 && s[i] == 0)
                continue;
            printf("%d", s[i]);
        }

        printf("\n");
    }
}