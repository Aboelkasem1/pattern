#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, space_outside, Space_inside = 1;

    cin >> num_of_lines; // n => number of line
    space_outside= num_of_lines - 1;
    
    for (int i = 1 ; i < num_of_lines ; i++)
    {
        if (i == 1)
        {
            for (int j = 0 ; j < space_outside ; j++)
            {
                cout << " ";
            }
            space_outside--;

            cout << "*\n";
        }
        else
        {
            for (int j = 0 ; j < space_outside ; j++)
            {
                cout << " ";
            }
            space_outside--;

            cout << "*";
            for (int j = 0 ; j < Space_inside ; j++)
            {
                cout << " ";
            }
            cout << "*\n";

            Space_inside += 2;
        }
        
    }

    int stars_of_each_line;

    if(num_of_lines % 2 == 0)
        stars_of_each_line = num_of_lines + 3;
    else
        stars_of_each_line = num_of_lines + 4;

    //down line in triangle
    for (int j = 0 ; j < stars_of_each_line ; j++)
    {
        cout << "*";
    }


    return 0;
}
