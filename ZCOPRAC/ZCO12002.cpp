/**
* @Author: Joakim Olsson <joakss>
* @Date:   2019-01-15T22:28:39+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2019-01-15T22:45:00+01:00
* Link to problem: https://www.codechef.com/ZCOPRAC/problems/ZCO12002
*/

#include "iostream"
#include "algorithm"
#include "climits"
using namespace std;

int binarysearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r-l)/2;

        if (arr[m] <= x && arr[m+1] > x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int binarysearch2(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r-l)/2;

        if (arr[m] >= x && arr[m-1] < x){
            return m;
        }

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main() {

    bool check1 = true, check2 = true;
    int n, x, y, ans = INT_MAX;
    cin >> n >> x >> y;
    int start[n],end[n];
    int v[x],w[y];

    for(int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }
    for(int i = 0; i < x; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < y; i++){
        cin >> w[i];
    }

    sort(v, v+x);
    sort(w, w+y);

    for(int i = 0; i < n; i++) {
        int go = binarysearch(v, 0, x-1, start[i]);
        if (go == -1) {
            if (v[x-1] <= start[i])
                go = x-1;
            else {
                go = 0;
                check2 = false;
            }
        }
        int ret = binarysearch2(w, 0, y-1, end[i]);
        if (ret == -1) {
            if (w[0] >= end[i])
                ret = 0;
            else {
                ret = y-1;
                check1 = false;
            }
        }
        if (check1 && check2)
            ans = min(ans,abs(w[ret] - v[go] + 1));
        check1 = true;
        check2 = true;
    }
    cout << ans;
}
