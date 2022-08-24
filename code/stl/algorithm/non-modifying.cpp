vector<int> a{1, 2,3,1};

all_of(a.begin(), a.end(), [](int x){return x % 2 == 0;}); // false
// any_of, none_of 同理

for_each(a.begin(), a.end(), [](int x){cout << x << " ";});

count(a.begin(), a.end(), 3); // num of velue which is 3
count_if(a.begin(), a.end(), [](int x){return x % 2 == 1;});

find(a.begin(), a.end(), 2); // first pos (iterator)
find_if(a.begin(), a.end(), [](int x){return x % 2 == 1;}); // first pos (iterator)
// find_if_not 同理

vector<int> b{2,3};
// find begining of the last matched pattern(b) in a
find_end(a.begin(), a.end(), b.begin(), b.end()); // in this example: return the pos of 2 in a
// find_fist_of 同理
// search 作用和用法和 find_first_of 类似
search_n(a.begin(), a.end(), 1, 1); // 1,1 : count, value

adjacent_find(a.begin(), a.end()); // 相邻元素相同 first pos (iterator)

// need to be added:
// mismatch, search
