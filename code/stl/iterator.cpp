vector<int> a{1,2,3};
auto it = a.begin() + 1; // *it = 2;
advance(it, 1); // *it = 3;
distance(a.begin(), it); // pos it (*it == 3) - a.begin() = 2
prev(it); // *x = 2, it no change
next(it); // *x = 0; exceed; it no change