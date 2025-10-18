#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. Vector - dynamic array
    vector<int> v = {1, 2, 3};
    v.push_back(4);   // add element at the end
    v.pop_back();     // remove last element
    sort(v.begin(), v.end()); // sort vector

    // 2. Pair - store two values together
    pair<int, string> p = {1, "Samir"};
    int num = p.first;
    string name = p.second;

    // 3. Map - key-value store (sorted by key)
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";
    mp.find(1); // find key
    mp.erase(2); // erase key

    // 4. Unordered_map - key-value store (hash map, faster)
    unordered_map<string, int> ump;
    ump["apple"] = 5;
    ump.count("apple"); // check existence

    // 5. Set - store unique elements in sorted order
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.erase(3);
    s.find(1);

    // 6. Unordered_set - unique elements, not sorted (faster)
    unordered_set<int> us;
    us.insert(5);
    us.count(5); // check if exists

    // 7. Stack - LIFO
    stack<int> st;
    st.push(10);
    st.pop();
    int topVal = st.top();

    // 8. Queue - FIFO
    queue<int> q;
    q.push(20);
    q.pop();
    int frontVal = q.front();

    // 9. Priority_queue - max-heap by default
    priority_queue<int> pq;
    pq.push(15);
    pq.push(5);
    pq.pop();       // removes largest
    int largest = pq.top();

    // 10. Algorithm functions - sort, reverse, lower_bound, upper_bound
    vector<int> arr = {10, 20, 30, 40};
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    auto lb = lower_bound(arr.begin(), arr.end(), 25); // first >= 25
    auto ub = upper_bound(arr.begin(), arr.end(), 25); // first > 25

    return 0;
}
