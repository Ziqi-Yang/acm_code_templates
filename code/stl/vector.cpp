#include <vector>
vector<pair<int,int>> a;
vector<int> b(3, 2); // 默认0, 手动2
vector<int> d(b); // 用b创建d, 线性复杂度
vector<int> e(move(a)); // e = move(a)，常数复杂度
d.resize(20); // 重新分配空间, 若空间小于原本，则删除
vector<vector<int>> c{vector<int>{1,2}};
vector<vector<int>> e(10,vector<int>(10));
c.resize(2, vector<int>(2)); // 分配二维空间
c.empty(); c.size(); c.clear();
c.erase(a.begin() + 1);
a.emplace_back(1, 2);
a.swap(d);
a.pop_back();
a.insert(a.begin(), {{1,2}, {3,4}}); // can insert multiple elements
a.begin(); a.end(); a.rbegin(); a.rend(); // iterator
a.front(); a.back(); // reference
a.data(); // pointer to the first element, error when empty