#include <stdio.h>//standard c library

int main()
{
    char phrase[1024];//this is the string of size of 1024 characters
    int selector = 4, stringlength = 0, counter = 0, key = 1;//variable initalisation
    //user prompt
    printf("Enter 0 to encrypt (rotation cipher)\n");
    printf("Enter 1 to decrypt (known key) (rotation cipher)\n");
    printf("Enter 2 to decrypt (unknown key) (rotation cipher)\n");
    scanf("%d", &selector);//user input of either 0, 1 or 2
    //im using a swtich case and the user input decides the case
    switch (selector)
    {
        case 0:
            printf("Enter a phrase to be encrypted (USE UNDERSCORES FOR SPACES! USE CAPITALS ONLY!):\n");//user prompt
            scanf(" %s", phrase);//user input for the string
            for(stringlength = 0; phrase[stringlength] != '\0'; ++stringlength)/*this counts how long the string
            is by checking for the string terminator (\0) and we use the value of the counter when \0 is encountered*/
            while(counter <= stringlength)/*this loop goes through each character of the loop and changes them, 
            one character per loop*/
            {
                if (phrase[counter] == 65)//this 'if' statement returns A to Z
                {
                    phrase[counter] = 91;//90 = Z however the whole string is reduced by 1 (91-1 = 90 = Z)
                }
                if (phrase[counter] == 95)//this 'if' statement makes the underscore a space
                {
                    phrase[counter] = 33;//32 = space but the string is yet to be reduced by 1 (33-1 = 32 = space)
                }
                phrase[counter] = phrase[counter] - 1;/*this is each character of the string being reduced by 1, 
                from the first character to the end of the string*/
                counter++;//loop increment
            }
            printf("%s", phrase);//output
            break;//break jumps out of the whole switch case
        case 1://this case is the same as the first but the string is increased by one to correct the -1 of encrption
            printf("Enter a phrase to be decrypted (USE UNDERSCORES FOR SPACES! USE CAPITALS ONLY!):\n");//user prompt
            scanf(" %s", phrase);//user input
            for(stringlength = 0; phrase[stringlength] != '\0'; ++stringlength)//counts the string length
            while(counter <= stringlength)
            {
                if (phrase[counter] == 90)//returning Z to A
                {
                    phrase[counter] = 64;//64 + 1 = 65 = A
                }
                if (phrase[counter] == 95)//making underscores spaces
                {
                    phrase[counter] = 31;//32 + 1 = 32 = space
                }
                phrase[counter] = phrase[counter] + 1;//correcting one character by +1 each loop
                counter++;//loop increment 
            }
            printf("%s", phrase);//output
            break;//exits switch case
        case 2://this is wrong, but ill still comment
            //this uses 2 loops working in opposite directions (+1, -1) and the user can identify what makes sense
            printf("Enter a phrase to be decrypted (USE UNDERSCORES FOR SPACES! USE CAPITALS ONLY!):\n");//user prompt
            scanf(" %s", phrase);//user input
            for (key=1;key<=26;key++)//this loop outputs all strings shifted up by 1 to 26
            {
                for(stringlength = 0; phrase[stringlength] != '\0'; ++stringlength)//counting the length of the string
                while(counter <= stringlength)//loop runs for the length of string
                {
                    phrase[counter] = phrase[counter] + key;//increasing the characters by the key (1 to 26)
                    counter++;//loop increment
                }
                printf("%d: %s\n", key, phrase);//output, done each loop for each key
                counter = 0;//reset counter variable or the while loop wont work for each key after the first
            }
            key=1;//reset key variable to 1
            for (key=1;key<=26;key++)//ths loop outputs the string sifted down by -1 to -26
            {
                for(stringlength = 0; phrase[stringlength] != '\0'; ++stringlength)//counts the length of the string (see case 1 comment)
                while(counter <= stringlength)//loop runs for the length of the string
                {
                    phrase[counter] = phrase[counter] - key;//decreasing each character by -1 to - 26
                    counter++;//loop increment
                }
                printf("-%d: %s\n", key, phrase);//output
                counter = 0;//reset to 0 or the while loop wont work for any key after the first one tested
            }
            break;//exit switch case
        default:
            printf("invaild input");//GJ you broke it
            break;//exit switch case
    }
    return 0;//exit program
}
//i cant do this
