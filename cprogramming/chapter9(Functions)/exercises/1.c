#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int count1[26], count2[26];

    printf("Enter first word: ");
    read_word(count1);
    printf("Enter second word: ");
    read_word(count2);

    if(equal_array(count1, count2))
        printf("The words are anagrams!");
    else
        printf("The words are NOT anagrams.");

    return 0;
}

void read_word(int counts[26])
{
    char current_letter;

    while((current_letter = tolower(getchar())) != '\n')
        if(isalpha(current_letter))
            counts[current_letter - 'a']++;
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i = 0; i < 26; i++)
        if(counts1[i] != counts2[i])
            return false;

    return true;
}