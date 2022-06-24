#include "main.h"
void _puts(char *str)
{
  int b;
  for (b = 0; *str != '\0'; b++)
  {
    _putchar(*str);
    str++;
  }
  _putchar('\n');
}
