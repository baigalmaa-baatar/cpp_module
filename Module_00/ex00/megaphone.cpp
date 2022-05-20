#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
    int i, j;

    i = 1;
    j = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while(argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                putwchar(toupper(argv[i][j]));
                j++;
            }
            i++;
        }
        putwchar('\n');
    }
    return 0;
}