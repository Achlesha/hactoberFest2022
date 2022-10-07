#include <vector>
#include <iostream>

using namespace std;

int i_first_occurrence(double x, const vector<double> &v, int l, int r) {
    if (l == r) {
        if (l < 0 or l >= v.size())
            return -1;
        if (v[l] == x)
            return l;
        return -1;
    }

    int m = (l+r) / 2;

    if (x > v[m])
        return i_first_occurrence(x, v, m + 1, r);
   
    return i_first_occurrence(x, v, l, m);
    
}

int first_occurrence(double x, const vector<double>& v) {
    if (v.size() == 0)
        return -1;
    return i_first_occurrence(x, v, 0, v.size());
}

int i_first_occurrence(double x, const vector<char> &v, int l, int r) {
    if (l == r) {
        if (l < 0 or l >= v.size())
            return -1;
        if (v[l] == x)
            return l;
        return -1;
    }

    int m = (l+r) / 2;

    if (x > v[m])
        return i_first_occurrence(x, v, m + 1, r);
   
    return i_first_occurrence(x, v, l, m);
    
}

int first_occurrence(double x, const vector<char>& v) {
    if (v.size() == 0)
        return -1;
    return i_first_occurrence(x, v, 0, v.size());
}

int i_first_occurrence(double x, const vector<int> &v, int l, int r) {
    if (l == r) {
        if (l < 0 or l >= v.size())
            return -1;
        if (v[l] == x)
            return l;
        return -1;
    }

    int m = (l+r) / 2;

    if (x > v[m])
        return i_first_occurrence(x, v, m + 1, r);
   
    return i_first_occurrence(x, v, l, m);
    
}

int first_occurrence(double x, const vector<int>& v) {
    if (v.size() == 0)
        return -1;
    return i_first_occurrence(x, v, 0, v.size());
}

int main() {
    vector<double> v = {1.2, 2.1, 3.4, 5, 6.23, 7.65, 8.23, 9.35, 10.94};
    cout << first_occurrence(9.35, v) << endl;

    vector<double> v1 = {1, 1, 3, 5, 6, 7, 8, 9, 10};
    cout << first_occurrence(5, v1) << endl;

    vector<double> v2 = {'a', 'b', 'd', 'f', 'q', 'x', 'y', 'z'};
    cout << first_occurrence('r', v2) << endl;
}
