#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	string s = GetString();
	for (int i = 0, n = strlen(s); i < n ; i++)
		printf("On index, %i the current charactere is: %c\n",i, s[i]);
}
