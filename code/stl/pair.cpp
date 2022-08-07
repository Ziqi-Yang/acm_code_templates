pair<int, int> a{1,2};
cout << a.first << " " << a.second;
pair<int, int> b{3,1};
cout << (a < b) << endl;
// vector<pair<int, int>> c{a, b}; 
vector<pair<int, int>> c{{1,2}, {1,1}, {0,3}}; 
// sort c according to the first param ascendingly (升序);
sort(c, c + 3);
// sort c according to the second param ascendingly (升序); 返回值不为true交换
sort(c.begin(), c.end(), [](const pair<int,int> &a, const pair<int, int> &b){return a.second < b.second;});
// multiple condition
sort(c.begin(), c.end(), [](const pair<int,int> &a, const pair<int, int> &b){return a.first < b.first || a.second < b.second;});