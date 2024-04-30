

#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, space_outside;
    int stars_of_each_line = 1;

    cin >> num_of_lines; // n => number of line
    space_outside = num_of_lines / 2 + 2;

    for (int i = 1 ; i <= num_of_lines ; i++)
    {
        // print spaces in each line
        for (int j = 0 ; j < space_outside ; j++)
        {
            cout << " ";
        }
        space_outside--;

        // print stars in each line
        for (int j = 0 ; j < stars_of_each_line ; j++)
        {
            cout << "*";
        }
        stars_of_each_line += 2;

        cout << "\n";
    }
    return 0;
}
