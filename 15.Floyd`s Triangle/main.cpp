#include <bits/stdc++.h>
using namespace std;

int main (){

    int num_of_lines, nums_in_each_line = 1, j = 1;

    cin >> num_of_lines;

    for (int i = 2; i < num_of_lines + 2; i++)
    {
        while( j <= nums_in_each_line)
        {
            cout << j << " ";
            
            j++;
        }
        nums_in_each_line += i;
        
        cout << "\n";
    }
    

    return 0;
}