#include <stdio.h>
#include <string.h>

void mystrcpy2(char* dst, char* src);

int main(int argc, char* argv[])
{
	printf("argc = %d\n", argc);
	printf("argv[0] = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);

	char buffer[64];
	if (argc < 2)
	{
		printf("Error - You must supply at least one argument\n");
		return 1;
	}
	// strcpy(buffer, argv[1]);
	//mystrcpy(buffer, argv[1]);
	mystrcpy2(buffer, argv[1]);
	return 0;
}

void mystrcpy(char* dst, char* src) 
{
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
}

void mystrcpy2(char* dst, char* src)
{
	char* psrc = src;
	while (*psrc != '\0')
	{
		*dst = *psrc;
		dst++;
		psrc++;
	}
}