/*
  Roll No.: 23
  Student Name: SHAIKH AYAAN MOHAMMAD SHAHID
  Program Title: WAP to check if the input letter is a vowel or not.

  Task Given By:
    - Roll No. of Assignee: 43
    - Assignee Name: Momin Mohammad Zeeshan Shahid
*/

#include <stdio.h>

int main() {
    char letter;

    printf(" Enter a letter: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf(" %c is a vowel.\n", letter);
    }
    else
        {
        printf(" %c is not a vowel.\n", letter);
    }

    return 0;
}

/* OUTPUT
 Enter a letter: a
 a is a vowel.

Process returned 0 (0x0)   execution time : 4.575 s
Press any key to continue. */


