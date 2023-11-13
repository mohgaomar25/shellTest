#ifndef MAIN_H
#define MAIN_H

#include <stdbool.h>
#include <stddef.h>

void new_printf(const char *c);
void start_the_prompt(void);
void scan_command(char *comnd, size_t size);
void execute_command(const char *comnd);

#endif /* MAIN_H */
