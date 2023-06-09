#include <stdio.h>

int legendre_formula(int n, int p)
{
	int res = 0;
	while (n > 0)
	{
		res += (n / p);
		n /= p;
	}

	return res;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, p;
		scanf("%d %d", &n, &p);
		printf("%d\n", legendre_formula(n, p));
	}
	return 0;
}