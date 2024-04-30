#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, space_outside, Space_inside;

    cin >> num_of_lines; // n => number of line
    space_outside= 1;
    Space_inside = (num_of_lines * 2 )- 5;

    int stars_of_each_line;

    if(num_of_lines % 2 == 0)
        stars_of_each_line = num_of_lines + 3;
    else
        stars_of_each_line = num_of_lines + 4;

    //Up line in triangle
    for (int j = 0 ; j < stars_of_each_line ; j++)
    {
        cout << "*";
    }
    cout << "\n";
    
    for (int i = num_of_lines ; i > 2 ; i--)
    {
        for (int j = 0 ; j < space_outside ; j++)
        {
            cout << " ";
        }
        space_outside++;

        cout << "*";
        for (int j = 0 ; j < Space_inside ; j++)
        {
            cout << " ";
        }
        cout << "*\n";

        Space_inside -= 2;

        
    }

    for (int j = 0 ; j < space_outside ; j++)
    {
        cout << " ";
    }
    cout << "*";


    return 0;
}