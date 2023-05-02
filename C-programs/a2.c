// Find words, vowels, consonents, space, special characrters.

#include<stdio.h>
#include<string.h>

int main()
{
    int words = 0, vowels = 0, consonents = 0, space = 0, sp_character = 0 ;
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            space += 1;
        }
        else if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u')
        {
            vowels += 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            consonents += 1;
        }
        else
        {
            sp_character += 1;
        }
}

    printf("\nWords = %d",space + 1);
    printf("\nVowels = %d",vowels);
    printf("\nConsonants = %d",consonents);
    printf("\nSpace = %d",space);
    printf("\nSpecial Character = %d",sp_character);

    return 0;
}
