#include <stdio.h>

void main()
{
    char S1[15];
    int first = 0, last = 0, error = 0;

    printf("Enter the string: ");
    scanf("%s", S1);

    while(S1[last] != '\0')
        last++;

    last--;

    while(first < last)
    {
        if(S1[first] != S1[last])
        {
            error = 1;
            break;
        }
        else
        {
            first++;
            last--;
        }
    }

    if(error == 1)
        printf("Not a palindrome");
    else
        printf("Palindrome");
}
