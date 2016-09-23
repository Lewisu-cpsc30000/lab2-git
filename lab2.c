#include <stdio.h>
#include <string.h>


int main(int argc, char** argv) {
	int i;
	char *str = "Second Lab CPSC30000 - Compiling with Make!", ch;
	for (i = 0; i < strlen(str); i++)
	{ ch = str[i];

	 printf("%c",ch);
	}
	return 0;
}
