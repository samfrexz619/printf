#include "main.h"

/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 * print_str.c
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int index;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (index = 0; nill[index]; index++)
			ibuf = handl_buf(buf, nill[index], ibuf);
		return (6);
	}
	for (index = 0; str[index]; index++)
		ibuf = handl_buf(buf, str[index], ibuf);
	return (index);
}
