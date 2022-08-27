#include <queue>
typedef pair<int, int> PII;
// big heap & small heap
priority_queue<int> big_heap;
priority_queue<PII, vector<PII>, less<PII> > big_heap;
priority_queue<int, vector<int>, greater<int> > small_heap;

// operations
priority_queue<int> q;
q.push(1); q.emplace(1);
cout << q.top(); // not empty
q.empty(); q.size();
q.pop();

// custom comparator
class Node;
bool Compare(Node a, Node b);
std::priority_queue<Node, std::vector<Node>, decltype(&Compare)> openSet(Compare); // notice & notation
// or auto cmp = [](const auto &a, const auto &b) { return a.second > b.second; }; // small_heap according to the second element in a pair
priority_queue<PII, vector<PII>, decltype(cmp)> pq(cmp); // small_heap // without & notation


// custom structure
struct Status {
    int val;
    ListNode *ptr;
    bool operator < (const Status &rhs) const { // 必须定义<运算符
        return val > rhs.val; // rhs 小于 当前 val 就交换，说明是最小堆
    }
};
priority_queue<Status> q;
q.push({l->val, l}); // l 是 ListNode* 类型
