#include "main.h"
#include <stdio.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise an error code.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, read_result, write_result;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        return (99);
    }

    while ((read_result = read(file_from, buffer, sizeof(buffer))) > 0)
    {
        write_result = write(file_to, buffer, read_result);
        if (write_result == -1 || (size_t)write_result != (size_t)read_result)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            return (99);
        }
    }

    if (close(file_from) == -1 || close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(file_from) == -1) ? file_from : file_to);
        return (100);
    }

    return (0);
}
