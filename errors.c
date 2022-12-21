#include "shell.h"

/**
<<<<<<< HEAD
 *_eputs - prints an input string
 * @str: the string to be printed
 * Return: Nothing
 **/
void _eputs(char *str)
=======
 * _eputs - prints an input string
 * @str: the string to be printed
 *
 * Return: no return
 */
void _eputs(char *str)

>>>>>>> 7b5aa13d41c8b74dd11e3fc12bbd5fdd4a300253
{
	int i = 0;

	if (!str)
		return;
<<<<<<< HEAD
=======

>>>>>>> 7b5aa13d41c8b74dd11e3fc12bbd5fdd4a300253
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}
<<<<<<< HEAD
/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
=======

/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1
 */
>>>>>>> 7b5aa13d41c8b74dd11e3fc12bbd5fdd4a300253
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
<<<<<<< HEAD
=======

>>>>>>> 7b5aa13d41c8b74dd11e3fc12bbd5fdd4a300253
/**
 * _putfd - writes the character c to given fd
 * @c: The character to print
 * @fd: The filedescriptor to write to
<<<<<<< HEAD
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
=======
 *
 * Return: On success 1
 */
>>>>>>> 7b5aa13d41c8b74dd11e3fc12bbd5fdd4a300253
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
<<<<<<< HEAD
/**
 *_putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 * Return: the number of chars put
 **/
=======

/**
 * putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
>>>>>>> 7b5aa13d41c8b74dd11e3fc12bbd5fdd4a300253
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
