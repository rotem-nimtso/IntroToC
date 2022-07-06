#include <stdio.h>
#include "Point.h"
#include "Rectangle.h"

//Function Decleration
void mamasEmpire(int generations);
int fibonachi(int index);
int get_fib_index(int number);
int square(int number);


int main() {
    
}

void mamasEmpire(int generations) {

    for (int i = 1; i < generations; ++i)
    {
        printf("Mamas %d Empire \n", i);
    }
}

int fibonachi(int index) {

    if (index == 0) { return 0; }
    if (index == 1) { return 1; }
    return (fibonachi(index - 1) + fibonachi(index - 2));
}

int get_fib_index(int number) {
    
    int current = 0;
    int i = 0;

    for (int i = 0; number > current; ++i)
    {
        current = fibonachi(i);
        if (current == number) { return i; }
    }

    return -1;
}

int square(int number) {
    
    int answer = 0;

    for (int i = 0; number > i * i; ++i)
    {
        answer = i;
    }

    return answer;
}