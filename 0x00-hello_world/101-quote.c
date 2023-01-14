#include <unistd.h>
/**
 * main - program prints words to std output without the use of printf and puts
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 57);
	write(1, "\n", 1);

	return (1);
}
