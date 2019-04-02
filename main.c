#include <stdio.h>
int main()
{
    
    int selector = 0;
    char phrase[100];
    printf("Type '1' to encrypt a phrase\n");
    printf("Type '2' to decrypt a phrase (known key)\n");
    printf("Type '3' to decrypt a phrase (unknown key)\n");
    printf(": ");
    scanf("%d", &selector);
    switch (selector)
    {
        case 1:
            printf("Enter a phrse to be encrypted\nCapitals only!:");
            scanf("%s", phrase);
            break;
        case 2:
            printf("Enter a phrase to be decrypted\nCapitals only!:");
            scanf("%s", phrase);
            break;
        case 3:
            printf("Enter a phrase to be decrypted\nCapitals only!:");
            scanf("%s", phrase);
            break;
        default:
            printf("invaild input");
            break;
    }
    return 0;
}
