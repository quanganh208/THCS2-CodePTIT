#include <stdio.h>
#include <string.h>

int main(){
	char s[1000];
	gets(s);
	int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
	for (int i = 0; i < strlen(s); i++)
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) cnt_1++;
		else if ((s[i] >= '0' && s[i] <= '9')) cnt_2++;
		else cnt_3++;
	printf("%d %d %d", cnt_1, cnt_2, cnt_3);
}
