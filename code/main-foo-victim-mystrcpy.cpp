#include <stdio.h>
#include <string.h>

int foo(char* src);
int victim(char* src);
int mystrcpy(char* dst, char* src);
int mystrcpy2(char* dst, char* src);

int f1(int seed);
int f2(int seed);
int f3(int seed);

int main(int argc, char* argv[])
{
	printf("argc = %d\n", argc);
	printf("argv[0] = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);

	if (argc < 2)
	{
		printf("Error - You must supply at least one argument\n");
		return 1;
	}

	// char buffer[64];
	// strcpy(buffer, argv[1]);
	//mystrcpy(buffer, argv[1]);
	//mystrcpy2(buffer, argv[1]);
	int ret = foo(argv[1]);
	printf("ret of foo() = %d\n", ret);

	int r2 = ret * f3(3);
	printf("r2 of foo() = %d\n", r2);

	return r2;
}

int foo(char* src)
{
	int a = 10;
	int b = 20;

	int v1 = a * b;
	int r1 = victim(src);

	int ret = v1 * r1;
	return ret*f2(2);
}

int victim(char* src) {
	char buffer[64];
	int r1 = mystrcpy2(buffer, src);

	int double_r1 = r1 * 2;
	return double_r1*f1(2);
}

int mystrcpy(char* dst, char* src)
{
	int count = 0;

	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;

		count++;
	}

	return count;
}

int mystrcpy2(char* dst, char* src)
{
	int count = 0;

	char* psrc = src;
	while (*psrc != '\0')
	{
		*dst = *psrc;
		dst++;
		psrc++;

		count++;
	}

	return count;
}

int f1(int seed)
{
	return 1*seed;
}

int f2(int seed)
{
	return 2 * seed;
}

int f3(int seed)
{
	return 3 * seed;
}