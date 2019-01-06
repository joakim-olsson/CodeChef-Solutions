/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2019-01-06T22:59:44+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2019-01-06T23:02:43+01:00
* Link to problem: https://www.codechef.com/problems/VOTERS
*/

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n = 0, sc1 = 0, sc2 = 0;
    int maxLead = 0, player = 0;
    int p1sc = 0, p2sc = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> sc1 >> sc2;
        p1sc += sc1;
        p2sc += sc2;
        int diff = abs(p1sc-p2sc);

        if (diff > maxLead) {
            maxLead = diff;
            player = sc1 > sc2 ? 1 : 2;
        }
    }
    cout << player << " " << maxLead;
    return 0;
}
