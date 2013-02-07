#include <string>
#include <sstream>
#ifndef ISORT_H
#define ISORT_H

using namespace std;

class isort
{
    public:
        isort();
        virtual ~isort();
        void insertion_sort (string*, int);
        void read(string*);
        void display (string*, int);
    protected:
    private:
};

#endif // ISORT_H
