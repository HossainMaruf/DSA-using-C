#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> weight  = {2, 7, 4, 1, 8, 1};
    priority_queue<int, vector<int>, less<int>> pq;
    for(int i=0; i<weight.size(); i++) {
        pq.push(weight[i]);
    }

    while(pq.size() > 1) {
        int left = pq.top();
        pq.pop();
        int right = pq.top();
        pq.pop();
        int dif = left - right;
        pq.push(dif);
    }

    if(pq.size() == 1) cout << pq.top() << endl;
    else cout << "No stone available" << endl;

    return 0;
}