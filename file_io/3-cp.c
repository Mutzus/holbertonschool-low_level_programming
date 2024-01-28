#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, read_result, write_result;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;
    int close_from_result, close_to_result;

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

    do
    {
        bytes_read = read(file_from, buffer, sizeof(buffer));
        if (bytes_read == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(file_from);
            close(file_to);
            return (98);
        }

        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            return (99);
        }
    } while (bytes_read > 0);

    close_from_result = close(file_from);
    close_to_result = close(file_to);

    if (close_from_result == -1 || close_to_result == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close_from_result == -1) ? file_from : file_to);
        return (100);
    }

    return (0);
}
