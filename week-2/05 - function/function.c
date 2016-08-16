#include <cs50.h>
#include <stdio.h>

//Is necessarie to declare the function before its beeing called
void PrintName(string name);

int main (void) {
  printf("What is your name?");
  string name = GetString();
  PrintName(name);
}

void PrintName(string name) {
  printf("My name is %s\n", name);
}
