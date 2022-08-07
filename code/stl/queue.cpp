#include <queue>
queue<int> q;
queue<int> q2(q);
q.push(1); q.pop();
cout << q.front(); // error, can't use front() when q is empty
q.size(); q.empty();