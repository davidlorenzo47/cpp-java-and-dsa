#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
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

int maxSubArray(vector<int>& nums) {
    int ans = INT_MIN, temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        temp += nums[i];
        ans = max(ans, temp);

        if (temp < 0) temp = 0;        
    }
    return ans;
}

int main()
{
    vector<int> vec;

    vecip(vec);

    cout<<maxSubArray(vec);

	return 0;
}