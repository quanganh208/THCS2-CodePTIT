#include <stdio.h>
#include <string.h>

void strRev(char a[1000])
{
	char b[1000];
	strcpy(b, a);
	for (int i = 0; i < strlen(a); i++)
		a[i] = b[strlen(b) - 1 - i];
}

void swap(char a[1000], char b[1000])
{
	char tmp[1000];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
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
		// Kiểm tra số nào lớn hơn
		if (strlen(a) < strlen(b))
			swap(a, b);
		else if (strlen(a) == strlen(b))
			for (int i = 0; i < strlen(a); i++)
				if (a[i] != b[i])
				{
					if (a[i] < b[i])
						swap(a, b);
					break;
				}
		// Đảo ngược chuỗi
		strRev(a);
		strRev(b);
		// Bù 0
		if (strlen(a) > strlen(b))
			while (strlen(a) > strlen(b))
				strcat(b, "0");
		if (strlen(a) < strlen(b))
			while (strlen(a) < strlen(b))
				strcat(a, "0");

		// Tính toán
		int s[10000] = {0};
		int remainder = 0;
		int index = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			s[i] = (a[i] - '0') - (b[i] - '0') - remainder;
			remainder = 0;
			if (s[i] < 0)
			{
				remainder = 1;
				s[i] += 10;
			}
			index++;
		}
		// In kết quả
		while (!s[index])
			index--;
		for (int i = index; i >= 0; i--)
			printf("%d", s[i]);
		printf("\n");
	}
	return 0;
}