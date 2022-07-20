#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0;
	scanf("%d", &q);
	while (q)
	{
		w = q % 10;
		q /= 10;
		e += w;
	}
	printf("%d\n", e);
	return 0;
}