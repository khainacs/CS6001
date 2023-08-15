#include<stido.h>
int main()
{
	int n, a, b, c, d, f;
	printf("nhap so co 3 chu so:");
	scanf("%d", &n);
	a = n % 10;
	b = n / 10;
	c = b % 10;
	d = b / 10;
	f = d % 10;
	printf("so dao nguoc la:%d%d%d", a, c, d);

}