#include <cs50.h>
#include <stdio.h>

int main(void) {
	printf("GIMME AN INTEGER");
	int first = GetInt();
	printf("GIMME ANOTHER INTEGER");
	int second = GetInt();

	printf("The sum of %i and %i is: %i!", first, second, first + second);
}
