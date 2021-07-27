#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    printf("Random number generator used in \'Guessing the number game!\'\n");
    srand(time(0));/*This line is used to generate different numbers each time u run ur code rather than
    producing the same number*/ 
    int r = rand()%100 + 1;/*generates random numbers between 1 and 100 and if i just give rand()%100 
    generate a number between 0 to 100 so add 1 to it . so that it becomes 1 to 100*/
    printf("The random generated is %d\n",r);
    return 0;
}
