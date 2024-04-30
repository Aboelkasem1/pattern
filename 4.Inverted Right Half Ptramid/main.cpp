#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines;

    cin >> num_of_lines; // n => number of line

    for (int i = num_of_lines ; i > 0 ; i--)
    {
        for (int j = 0 ; j < i ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
