#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char currentletter;
    int currentindex, lettercount[26] = {0};

    printf("Enter first word: ");
    while((currentletter = tolower(getchar())) != '\n')
        if(isalpha(currentletter))
            lettercount[currentletter - 'a']++;

    printf("Enter second word: ");
    while((currentletter = tolower(getchar())) != '\n')
        if(isalpha(currentletter))
            lettercount[currentletter - 'a']--;

    for(currentindex = 0; currentindex < 26; currentindex++)
        if(lettercount[currentindex] != 0)
        {
            printf("The words are not anagrams.");
            return 0;
        }

    printf("The words are anagrams!");

    return 0;
}