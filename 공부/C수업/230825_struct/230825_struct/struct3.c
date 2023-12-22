#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main()
{
	struct point pos = { 10,20 };
	struct person man = { "√÷»ø¡§", "010-6339-2099", 27 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
}