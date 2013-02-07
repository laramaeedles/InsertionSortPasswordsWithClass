#include "isort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
    string numbers[100];
    int n=100;
    isort isort;
    isort.read(numbers);
    isort.insertion_sort(numbers,n);
    isort.display(numbers, n);
    return 0;
}
