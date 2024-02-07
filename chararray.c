#include <stdio.h>

int main()
{
	char name[] = "Max Taylor";
	char user[25];
	char user2[25];
    printf("What is your name (First and last please).\n");
	scanf("%s", &user);
	scanf("%s", &user2);

	printf("Hello %s %s it's nice to meet you. I'm %s.\n", &user, &user2, &name);

	return 0;
}
