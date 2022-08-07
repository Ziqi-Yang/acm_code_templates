#include <list>
list<int> a{1,2,3};
list<int> b{4,6,4};
a.splice(a.begin(), b); // 4 6 5 1 2 3
a.merge(b); // append b to a
a.remove(4); // remove all elements equals to 4
a.remove_if([](int x){return x < 3;});
a.sort();
a.unique(); // remove consecutive duplicate (连续重复) elements