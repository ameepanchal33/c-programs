//the line charecters reversed program
#include <stdio.h>
void Reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        Reverse();
        printf("%c", c);
    }
}

int main() {
    printf("Enter Your String Here: ");
    Reverse();
    return 0;
}

