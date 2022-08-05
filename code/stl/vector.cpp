#include <vector>
vector<pair<int,int>> a;
vector<int> b(3, 2); // 默认0, 手动2
vector<int> d(b); // 用b创建d
d.resize(20); // 重新分配空间, 若空间小于原本，则删除
vector<vector<int>> c{vector<int>{1,2}};
vector<vector<int>> e(10,vector<int>(10));
c.resize(2, vector<int>(2)); // 分配二维空间
c.empty(); c.size(); c.clear();
a.emplace_back(1, 2);
a.pop_back();
a.begin(); a.end(); a.rbegin(); a.rend();