#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
    ssize_t ret;

    ret = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    if (ret == -1)
    {
        perror("write");
        return 1;
    }

    return 1;
}
