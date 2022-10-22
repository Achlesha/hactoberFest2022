#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void binarySearch(vector<int> v, int To_Find)
{
	int low = 0, high = v.size() - 1;
	int mid;
	// This below check covers all cases , so need to check
	// for mid=lo-(hi-lo)/2
	while (high - low > 1) {
		int mid = (high + low) / 2;
		if (v[mid] < To_Find) { // if key is greater than current element then search in right half
			low = mid + 1;
		}
		else {
			high = mid;      // if key is smaller than current element then search in left half
		}
	}
	if (v[low] == To_Find) {
		cout << "Found"
			<< " At Index " << low<< endl;
	}
	else if (v[high] == To_Find) {
		cout << "Found"
			<< " At Index " << high << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
}

int main()
{
	cout<<"Enter the size of the array :"<<endl;
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int key;
    cout<<"Enter the element to be searched :"<<endl;
    cin>>key;
    binarySearch(v,key);

	return 0;
}
