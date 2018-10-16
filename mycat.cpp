#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cerrno>

#define VERSION "0.1"

/*
 * mycat: behaves as a rudimentary copy of the `cat` command, found in most
 *        POSIX-compliant operating systems. The program takes filenames as
 *        input and outputs their contents to stdout -- line by line. `cat` also
 *        can take stdin as an argument (with `--` or if no filenames are
 *        supplied).
 *
 *        NB: This program is not intended to replace your system's `cat`
 *        program, as `mycat` does not reproduce all required functionalities of
 *        `cat`.
 *
 *
 * TODO: print line numbers in cat and cat_stdin to have a right-justified,
 *           six-precision, integer line counter with two trailing spaces, to be
 *           concatenated across multiple files (perhaps use static int).
 *       simplify options
 */

void print_help(const char *program_name);
void print_version(const char *program_name);
int cat(const char *file, int numberflag);

int main(int argc, char **argv)
{
    int i;
    int numberflag = 0;
    int errflag;
    if (argc == 1)
    {
        cat("-", numberflag);
        exit(EXIT_SUCCESS);
    }

    for (i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            if (argv[i][1] != '\0')
            {
                if (!strcmp(argv[i]+1, "h") || !strcmp(argv[i]+1, "-help"))
                    print_help(argv[0]);
                else if (!strcmp(argv[i]+1, "n") || !strcmp(argv[i]+1, "-number"))
                    numberflag = 1;
                else if (!strcmp(argv[i]+1, "-version"))
                    print_version(argv[0]);
            } else {
                cat("-", numberflag);
                continue;
            }
        }
        if (cat(argv[i], numberflag) == 1 && errflag == 0)
            errflag = 1;
    }
    if (errflag == 1)
        exit(EXIT_FAILURE);

    exit(EXIT_SUCCESS);
}

void print_help(const char *program_name)
{
    fprintf(stderr,
           "Usage: %s [OPTION]... [FILE]...\n"
           "\n"
           "Where FILE is blank or -, read from stdin\n"
           "\n"
           "  -h, --help            Print this help message and exit\n"
           "  -n, --number          Number output lines\n"
           "      --version         Print version number\n"
           "\n"
           "Examples:\n"
           "  %s file - file2\n"
           "                        Will output contents of file, stdin\n"
           "                        and file2 to stdout\n"
           "\n", program_name, program_name);
    exit(EXIT_SUCCESS);
}

void print_version(const char *program_name)
{
    fprintf(stderr, "%s " VERSION "\n", program_name);
    exit(EXIT_SUCCESS);
}

int cat(const char *file, int numberflag)
{
    FILE *fp;
    int c;

    if (!strcmp(file, "-"))
    {
        while ((c = getchar()) != EOF)
            putchar(c);
        return 0;
    }
    else if ((fp = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "Error: %s: %s\n", file, strerror(errno));
        return 1;
    }
    while ((c = fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);
    return 0;
}
