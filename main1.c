#include <stdio.h>

int main()
{
    char phrase[1024];
    int selector = 4, stringlength = 0, counter = 0;
    printf("Enter 0 to encrypt\n");
    printf("Enter 1 to decrypt (known key)\n");
    printf("Enter 2 to decrypt (unknown key)\n:");
    scanf("%d", &selector);
    switch (selector)
    {
        case 0:
            printf("Enter a phrase to be encrypted (USE UNDERSCORES FOR SPACES! USE CAPITALS ONLY!):\n");
            scanf(" %s", phrase);
            for(stringlength = 0; phrase[stringlength] != '\0'; ++stringlength)
            while(counter <= stringlength)
            {
                if (phrase[counter] == 65)
                {
                    phrase[counter] = 91;
                }
                if (phrase[counter] == 95)
                {
                    phrase[counter] = 33;
                }
                phrase[counter] = phrase[counter] - 1;
                counter++;
            }
            printf("%s", phrase);
            break;
        case 1:
            printf("Enter a phrase to be decrypted (USE UNDERSCORES FOR SPACES! USE CAPITALS ONLY!):\n");
            scanf(" %s", phrase);
            for(stringlength = 0; phrase[stringlength] != '\0'; ++stringlength)
            while(counter <= stringlength)
            {
                if (phrase[counter] == 90)
                {
                    phrase[counter] = 64;
                }
                if (phrase[counter] == 95)
                {
                    phrase[counter] = 31;
                }
                phrase[counter] = phrase[counter] + 1;
                counter++;
            }
            printf("%s", phrase);
            break;
        case 2:
            printf("Enter a phrasse to be decrypted (USE UNDERSCORES FOR SPACES! USE CAPITALS ONLY!):\n");
            scanf(" %s", phrase);
            break;
        default:
            printf("invaild input");
            break;
    }
    return 0;
}
