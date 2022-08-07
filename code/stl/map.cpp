#include <map>
map<int, int> a;
a[1] = 2; // if not exist, then create
cout << a[0]; // if not exist, then return default value(here is 0); 
a.count(1); // whether exist
a.find(1); // iterator
cout << (*a.lower_bound(0)).first; // iterator of type pair
cout << (*a.upper_bound(2)).second;
a.emplace(1,3);
a.empty(); a.size();