#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class T>
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

template <class T>
void vecip(vector<T> &v) {
    int size;
    int elements;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the elements for array: ";
        cin>>elements;
        v.push_back(elements);
    }
}

bool squareIsWhite(string coordinates) {
    if (((coordinates[0] - 'a' + 1) + coordinates[1]) % 2 == 0) return false;
    return true; 
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    cout<<"Answer is: "<<squareIsWhite(s);

	return 0;
}