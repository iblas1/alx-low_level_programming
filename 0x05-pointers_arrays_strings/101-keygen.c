#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* randomCharacter - print every other chracter
* Return: success (0)
*/
char randomCharacter(void)
{
int index;
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
index = rand() % (sizeof(charset) - 1);
return (charset[index]);
}
/**
* generateRandomPassword - print every other chracter
*/
void generateRandomPassword(void)
{
int minLength = 2;
int maxLength = 16;
int passwordLength;
int i;
char randomChar;

passwordLength = minLength + rand() % (maxLength - minLength + 1);
for (i = 0; i < passwordLength; i++)
{
randomChar = randomCharacter();
putchar(randomChar);
}
putchar('\n');
}
/**
* main - print every other chracter
* Return: success (0)
*/
int main(void)
{
srand(time(NULL));
generateRandomPassword();
return (0);
}
