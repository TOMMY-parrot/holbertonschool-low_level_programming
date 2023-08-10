#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *create_buffer(char *file);
void close_file(int fd);

char *create_buffer(char *file)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", file);
        exit(99);
    }

    return (buffer);
}

void close_file(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int from, to, r, w;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    
    if (from == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't read from file %s\n", argv[1]);
        free(buffer);
        exit(98);
    }

    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (to == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", argv[2]);
        free(buffer);
        exit(99);
    }

    while ((r = read(from, buffer, 1024)) > 0)
    {
        w = write(to, buffer, r);
        if (w == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }
    }

    free(buffer);
    close_file(from);
    close_file(to);

    return (0);
}
