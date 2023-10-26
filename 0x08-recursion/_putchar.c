#include <unistd.h>

/**
 * hello again _putchar
 */
int _putchar(char c)
{
        return write(1, &c, 1);
}
