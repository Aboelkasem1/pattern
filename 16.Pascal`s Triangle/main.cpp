

#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, space_outside, Space_inside = 1, number_inside = 2, l = 1;
    int stars_of_each_line = 1;

    cin >> num_of_lines; // n => number of line
    space_outside = num_of_lines / 2 + 2;

    for (int i = 1 ; i <= num_of_lines ; i++)
    {
        if (i < 3)
        {
            for (int j = 0 ; j < space_outside ; j++)
            {
                cout << " ";
            }
            space_outside--;

            if(i == 1)
                cout << "1\n";
            else
                cout << "11\n";
        }
        else
        {
            for (int j = 0 ; j < space_outside ; j++)
            {
                cout << " ";
            }
            space_outside--;

            cout << "1";
            for (int l = 2; l < i; l++)
            {
                cout << number_inside;
            }
            number_inside++;
            
            cout << "1\n";

            Space_inside++;
        }
    }
    return 0;
}
