#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines;

    cin >> num_of_lines;

    for (int i = 1 ; i <= num_of_lines ; i++)
    {
        for (int j = 0 ; j < i ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
