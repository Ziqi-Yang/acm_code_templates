#include <stack>
stack<int> s;
stack<int> s2(s);
s.push(1); s.pop();
cout << s.top(); // error, can't use top() when s is empty
s.size(); s.empty();