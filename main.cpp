#include <iostream>
#include <vector>
#include "easy_list.h"

using namespace std;

int main()
{
    vector <int> mass(7);
    vector <int> mass2;
    mass[0] = 1;
    mass[1] = 4;
    mass[2] = 8;
    mass[3] = 6;
    mass[4] = 4;
    mass[5] =-8;
    mass[6] = 9;
    itc_even_parts_list(mass,mass2);
    for(int i = 0;i < mass.size(); i ++)
        cout << mass2[i] << " " << endl;

    return 0;
}

