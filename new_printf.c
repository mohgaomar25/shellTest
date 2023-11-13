#include "main.h"
#include <unistd.h>
#include <string.h>

void new_printf(const char *c)
{
	write(STDOUT_FILENO, c, strlen(c));
}
