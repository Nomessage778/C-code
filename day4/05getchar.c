#include <stdio.h>
int main(int argc, const char *argv[])
{
	char ch;
	ch = getchar();
	getchar();

	putchar(ch);
	putchar(10);
	putchar('\x53');
	putchar('\n');
//	putchar();
	return 0;
}
