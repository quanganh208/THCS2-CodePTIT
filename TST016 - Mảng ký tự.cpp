#include <stdio.h>
#include <string.h>
int main(){
	char s[1000], a[1000] = {0};
	scanf("%s", s);
	int dau1 = 0, dau2 = 0, dau3 = 0, dau4 = 0, dau5 = 0;
	for (int i = 0; i < strlen(s); i++) a[s[i]]++;
	if (a['('] != a[')'] || a['{'] != a['}'] || a['['] != a[']'] || a['\''] % 2 != 0 || a['\"'] % 2 != 0) printf("0");
	else printf("1");
	return 0;
}
