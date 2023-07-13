#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
ssize_t message_length = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", message_length);

return (1);
}
