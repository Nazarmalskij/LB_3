#include <iostream>
#include "Adult.h"

int main()
{
    Adult A(535, "Rick",18 , 52);

    cout << "\nMan" << endl;
    cout << A;

    cout << "\nMan" << endl;
    A.SetPassportNumber(148);
    cout << A;

    cout << "\nMan" << endl;
    A.SetWeight(60);
    cout << A;

    return 0;
}