
#include <iostream>
#include <functions.h>
#include <string.h>
using namespace std;

/** Prints container array*/
void printContainer(myContainer cont)
{

    if (cont.N == 0)
    {
        cout << "Cannot print empty container.\n";
        return;
    }
    cout << "[";
    for (int i = 0; i < cont.N - 1; i++)
    {
        cout << cont.tab[i] << ",";
    }
    cout << cont.tab[cont.N - 1] << "]";
    return;
}

/** Fills container with fibonacci. N signals how long the sequence needs to be*/
int fillContainerWithFibonacci(myContainer *a, int n)
{

    if (a == NULL)
    {
        cout << "Empty pointer provided. \n";
        return 0;
    }

    if (a->N < n)
    {
        a->N = n;
    }
    ///Switchcase would have been useful here. If only I knew c++ syntax...
    if (n == 0)
    {
        cout << "Wrong number of dimensions.\n";
        return 0;
    }

    if (n == 1)
    {
        a->tab[n - 1] = 1;
        return 1;
    }
    if (n == 2)
    {
        a->tab[n - 1] = 1;
        return 1;
    }

    int res = fillContainerWithFibonacci(a, n - 1) + fillContainerWithFibonacci(a, n - 2);
    a->tab[n - 1] = res;
    return res;
};

/** Checks marriage status*/
void checkContainerSpouse(myContainer *cont)
{

    printContainer(*cont);

    if (cont->spouse == NULL)
    {
        cout << " has no spouse.\n";
        return;
    }
    cout << " is paired with ";
    printContainer(*(cont->spouse));
    cout << "\n";
};
/** Makes two containers point at each other*/
void marry(myContainer *a, myContainer *b)
{
    if (a == b)
    {
        cout << "Can't marry myself\n";
        return;
    }
    if (memcmp(a, b, sizeof(myContainer)) == 0)
    {
        cout << "Can't marry my twin\n";
        return;
    }
    a->spouse = b;
    b->spouse = a;

    return;
};
/** Clears spouse pointer in both spouses*/
void divorce(myContainer *a, myContainer *b)
{
    a->spouse = NULL;
    b->spouse = NULL;
    return;
};

/** Creates a child. If invalid, returns default container*/
myContainer formChild(myContainer *a, myContainer *b)
{
    myContainer child;
    if (a == NULL && b == NULL)
    {
        cout << "I ain't God.\n";
        return child;
    }
    if (a == NULL || b == NULL)
    {
        cout << "No paternogenesis possible.\n";
        return child;
    }
    if (a->spouse != b || b->spouse != a)
    {
        cout << "Only spouses may have children.\n";
        return child;
    }

    child.N = a->N + b->N;

    for (int i = 0; i < a->N; i++)
    {
        child.tab[i] = a->tab[i];
    }
    int offset = a->N;
    for (int i = 0; i < b->N; i++)
    {
        child.tab[i + offset] = b->tab[i];
    }

    child.parent1 = a;
    child.parent2 = b;
    return child;
};
/** Prints parents, duh*/
void printParents(myContainer *a)
{
    if (a->parent1 == NULL || a->parent2 == NULL)
    {
        printContainer(*a);
        cout << " has no parents. \n";
        return;
    }
    cout << "Parents of ";
    printContainer(*a);
    cout << " are ";
    printContainer(*(a->parent1));
    cout << " and ";
    printContainer(*(a->parent2));
    cout << "\n";

    return;
};