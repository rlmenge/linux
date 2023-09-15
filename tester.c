// Junk1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

// Typedef for a function taking one integer argument and returning void
typedef void(*FuncType1)(int);

// Typedef for a function taking two integer arguments and returning void
typedef void(*FuncType2)(int, int);

// Example functions that match the typedefs
void function1(int a) {
printf("function1 called with: %d\n", a);
}

void function2(int a, int b) {
printf("function2 called with: %d and %d\n", a, b);
}

int main() {
FuncType1 f1 = function1;
FuncType2 f2 = function2;
FuncType1 f3 = function2;

// Setting f2 to function1 using typecasting
f2 = (FuncType2)function1;

//Compile? --> leads to warning
f3 = (FuncType1)function2;

f2(5, 10);

return 0;
}