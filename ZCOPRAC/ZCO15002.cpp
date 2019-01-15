/**
* @Author: Joakim Olsson <joakss>
* @Date:   2019-01-06T23:06:48+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2019-01-15T22:44:34+01:00
* Link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO15002
*/

#include <iostream>
#include "map"
#include "vector"
#include "algorithm"
using namespace std;

int main() {

    int n, k, count = 0;
    cin >> n >> k;

    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v + n);

    for (int i = 0, j = 1; i < n;) {

        if (abs(v[i] - v[j]) >= k) {
            count += (n-j);
            i++;
        }
        else
            j++;
    }
    cout << count;
    return 0;
}
