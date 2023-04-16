#include "main.h"

/**
 * main - Copy the file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])

{
int xx, yy, w, a, b;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
xx = open(argv[1], O_RDONLY);
if (xx < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
yy = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((w = read(xx, buff, 1024)) > 0)
{
if (yy < 0 || write(yy, buff, w) != w)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(xx);
exit(99);
}
}
if (w < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
a = close(xx);
b = close(yy);
if (a < 0 || b < 0)
{
if (a < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", xx);
if (b < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", yy);
exit(100);
}
return (0);
}
