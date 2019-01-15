/**
* @Author: Joakim Olsson <joakss>
* @Date:   2019-01-06T23:03:55+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2019-01-15T22:44:35+01:00
* Link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO14001
*/

#include "iostream"
#include "map"
#include "vector"
#include "algorithm"
using namespace std;

int main() {

    int n, h, move;
    int j = 0, i = 0, pick = 0;
    cin >> n >> h;

    int boxes[n];
    vector<int> moves;

    for (int i = 0; i < n; i++) {
        cin >> boxes[i];
    }

    while (true) {
        cin >> move;
        if (move == 0)
            break;
        moves.push_back(move);
    }

    while (moves[i] != 0) {

        if (moves[i] == 1 && j != 0)
            j--;
        else if (moves[i] == 2 && j != n-1)
            j++;
        else if (moves[i] == 3 && boxes[j] != 0) {
            if (pick == 0) {
                boxes[j] = boxes[j]-1;
                pick = 1;
            }
        }
        else if (moves[i] == 4 && boxes[j] != h) {
            if (pick==1) {
                boxes[j] = boxes[j]+1;
                pick = 0;
            }
        }
        i++;
    }

    for (int i = 0; i < n; i++) {
        cout << boxes[i] << " ";
    }
    return 0;
}
