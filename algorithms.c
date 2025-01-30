#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "game", "cannon", "timble"};
    int num_strings = sizeof(strings) / sizeof(strings[0]); // Get the number of strings

    string s = get_string("String: ");

    for (int i = 0; i < num_strings; i++) // Loop up to the actual array size
    {
        if (strcmp(strings[i], s) == 0) // Correct array access and comparison
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
