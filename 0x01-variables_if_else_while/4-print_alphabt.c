#include <stdio.h>
int main()
{
	char l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	l = 'A';
	while(l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return 0;
}
