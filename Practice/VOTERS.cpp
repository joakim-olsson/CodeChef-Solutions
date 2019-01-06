/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2019-01-06T23:01:59+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2019-01-06T23:03:31+01:00
* Link to problem: https://www.codechef.com/problems/VOTERS
*/

#include <cstdio>
#include <iostream>
#include "map"
#include "vector"
#include "algorithm"
using namespace std;

int main() {

    int n1, n2, n3;
    int val;
    cin >> n1 >> n2 >> n3;

    vector<int> listVoters;
    map <int, int> list;

    for (int i = 0; i < n1+n2+n3; i++) {
        cin >> val;
        list[val] += 1;
        if (list[val] == 2)
        listVoters.push_back(val);
    }

    sort(listVoters.begin(), listVoters.end());
    cout << listVoters.size() << endl;

    for (int i = 0; i < listVoters.size(); i++) {
        cout << listVoters[i] << endl;
    }
    return 0;
}
