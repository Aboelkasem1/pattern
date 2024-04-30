#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, space_outside;

    

    cin >> num_of_lines; // n => number of line
    space_outside = num_of_lines - 1;

    for (int i = 1 ; i <= num_of_lines ; i++)
    {
        for (int j = 0 ; j < space_outside ; j++)
        {
            cout << " ";
        }
        space_outside--;

        for (int j = 0 ; j < i ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
