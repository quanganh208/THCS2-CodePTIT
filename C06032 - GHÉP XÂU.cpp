#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        char a[1000][1000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%s", a[i]);

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++){
                char x[100], y[100];
                strcpy (x, a[i]);
				strcat (x, a[j]);
				strcpy (y, a[j]);
				strcat (y, a[i]);
                if (strcmp(x, y) > 0){
                    char tmp[1000];
                    strcpy(tmp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], tmp);
                }
            }
        for (int i = 0; i < n; i++) printf("%s", a[i]);
        printf("\n");
    }
}