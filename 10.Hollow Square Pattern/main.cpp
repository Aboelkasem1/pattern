
#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines;

    cin >> num_of_lines;

    for (int j = 0 ; j < num_of_lines ; j++)
    {
        cout << "*";
    }
    cout << "\n";
    
    for (int i = 1 ; i <= num_of_lines - 2 ; i++)
    {
        cout << "*";
        for (int j = 0 ; j < num_of_lines - 2 ; j++)
        {
            cout << " ";
        }
        cout << "*\n";
    }

    for (int j = 0 ; j < num_of_lines ; j++)
    {
        cout << "*";
    }
    cout << "\n";

    return 0;
}
