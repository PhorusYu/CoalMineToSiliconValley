#include <stdio.h>
int jolly();
int deny();

int main()
{
	jolly();
	deny();
	return 0;
}

int jolly()
{
	const char *s1 = "For　he's　a　jolly　good　fellow!\nFor　he's　a　jolly　good　fellow!\nFor　he's　a　jolly　good　fellow!\n";
	printf("%s", s1);
	return 0;
}

int deny()
{
	const char *s2 = "Which　nobody　can　deny!";
	printf("%s", s2);
	return 0;
}