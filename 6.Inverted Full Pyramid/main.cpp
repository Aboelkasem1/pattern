

#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, space_outside = 0;
    int stars_of_each_line;

    cin >> num_of_lines; // n => number of line
    
    if(num_of_lines % 2 == 0)
        stars_of_each_line = num_of_lines + 3;
    else
        stars_of_each_line = num_of_lines + 4;

    for (int i = num_of_lines ; i > 0 ; i--)
    {
        // print spaces in each line
        for (int j = 0 ; j < space_outside ; j++)
        {
            cout << " ";
        }
        space_outside++;

        // print stars in each line
        for (int j = 0 ; j < stars_of_each_line ; j++)
        {
            cout << "*";
        }
        stars_of_each_line -= 2;

        cout << "\n";
    }
    return 0;
}
