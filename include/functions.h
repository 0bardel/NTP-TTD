#ifndef AAA
#define AAA
#define ARRAYSIZE 30
struct myContainer
{
    int N = 0;
    int tab[ARRAYSIZE] = {0};
    myContainer *spouse = NULL;
    myContainer *parent1 = NULL;
    myContainer *parent2 = NULL;
};
void printContainer(myContainer);
int fillContainerWithFibonacci(myContainer *, int);
void checkContainerSpouse(myContainer *);
void marry(myContainer *, myContainer *);
void divorce(myContainer *, myContainer *);
myContainer formChild(myContainer *, myContainer *);
void printParents(myContainer *);
#endif

#ifndef _ADD_H
#define _ADD_H

int add(int a, int b)
{
    return a + b;
}

#endif
