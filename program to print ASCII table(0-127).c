#include<stdio.h>
#include<conio.h>
int main()

{
    int i;
    for(i=0;i<=127;i++)
    {
        printf("ASCII value = %c\n",i);
        i++;
    }

    getch();
    return 0;
}
