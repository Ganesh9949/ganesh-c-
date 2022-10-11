#include <iostream>
using namespace std;

int main()
{
    int i, ctr, cube;

    cout << "enter the cube";
    cin>>cube;
    cout << "Input the number of terms : ";
    cin >> ctr;
    for (i = 1; i <= ctr; i++) 
    {
        cube= i * i * i;
        cout << "Number is : "  << cube << endl;
    }
}
