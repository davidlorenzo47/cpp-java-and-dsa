#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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

bool hasGroupsSizeX(vector<int>& deck) {
    unordered_map<int, int> maap;
    for(auto i:deck)    maap[i]++;
    int g = maap[deck[0]];

    for(auto i : maap){
        g = __gcd(g, i.second);
    }
    return g > 1;
}

int main()
{
    vector<int> vec;
    vecip(vec);
    display(vec);

    cout<<"Answer is: "<<hasGroupsSizeX(vec);      

	return 0;
}