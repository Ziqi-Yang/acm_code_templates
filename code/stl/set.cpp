#include <set>
// elements in set are sorted accendingly, usually implemented by red-black tree;
set<int> a {1,7, 3, 2};
a.insert(4); a.count(10); a.empty(); a.size();
a.find(7); // iterator
a.upper_bound(3); // <= 3, iterator
a.lower_bound(2); // >= 2, iterator
*a.rbegin(); // value of last element

set<int> d{0,1,2};
set<int> res;
// intersection && union
// the two funcions int <algorithm> do not work nomally with unordered_set
set_intersection(a.begin(), a.end(), d.begin(), d.end(), inserter(res, res.end()));
set_union(a.begin(), a.end(), d.begin(), d.end(), inserter(res, res.end()));