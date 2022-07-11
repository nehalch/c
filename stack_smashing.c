#include <stdio.h>
#include <string.h>

void manipulate(char *buffer)
{
    char newbuffer[80];
    strcpy(newbuffer, buffer);
}
int main()
{
    char ch, buffer[4096];
    int i = 0;
    while ((buffer[i++] = getchar()) != '\n')
    {
    };
    i = 1;
    manipulate(buffer);
    i = 2;
    printf("The value of i is : %d\n", i);
    return 0;
}