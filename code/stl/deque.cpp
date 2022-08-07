#include <deque>
deque<int> a {1,2,3};
a.emplace_back(4);
a.pop_back();
a.emplace_front(0);
a.pop_front();
a.begin(); a.end(); a.rbegin(); a.rend();
a.back(); a.front();
a.clear(); // delete all element
a.insert(a.begin(), {1,2}); // can insert multiple elements