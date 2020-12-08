#include <stdio.h>

void other()
{
    printf("#################### Congratulations #################### \n");
    printf("You have entered the secret function. \n");
    fflush(stdout);
}

void input()
{
    char buffer[20];
    printf("Enter some text: \n");
    fflush(stdout);
    scanf("%s",buffer);
    printf("You entered: %s\n",buffer);
    fflush(stdout);
}

int main() {
    printf("%p \n", other);
    input();
    printf("#################### Attention #################### \n");
    printf("You failed to get into the secret function.\n");
    fflush(stdout);
    return 0;
}
