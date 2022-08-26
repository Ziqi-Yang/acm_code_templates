vector<int> a(10);
iota(a.begin(), a.end(), 0);
vector<int> to_vector(10);
copy(a.begin(), a.end(), to_vector.begin()); // need to give a size to to_vector
// copy(a.begin(), a.end(), back_inserter(to_vector));  // not needed
copy_if(a.begin(), a.end(), to_vector.begin(), [](int x){return x % 2 == 0;});
copy_n(a.begin(), 2, to_vector.begin()); // copy exactly n element
copy_backward(a.begin(), a.end(), to_vector.end()); // note: to_vector.end(), copy direction is backward, so need end()
// see also: move, move_backward

fill(a.begin(), a.end(), -1);
fill_n(a.begin(), 3, 1); // the first 3 elements of a

iota(a.begin(), a.end(), 0);
transform(a.begin(), a.end(), to_vector.begin(), [](int a){ return a * a; });

generate(a.begin(), a.end(), [](){ return 1;});
generate_n(a.begin(), 2, [](){ return 2;});

a = {1,2,4,1};
auto b = remove(a.begin(), a.end(), 1); // 把不等于1的数放到前面，返回多余(就是要删除)的元素的开始的指针
b = remove_if(a.begin(), a.end(), [](int x){return x % 2 == 0;});
a.erase(b);

a = {1,2,4,1}; to_vector = {};
remove_copy(a.begin(), a.end(), back_inserter(to_vector), 1);
// remove_copy_if

a = {1,2,4,1}; to_vector = {};
replace(a.begin(), a.end(), 1, 2);
replace_if(a.begin(), a.end(), [](int a){return a % 2 == 0; }, 4);
replace_copy_if(a.begin(), a.end(), back_inserter(to_vector), [](int a){return a % 2 == 0; }, 4);
// replace_copy

a = {-1,-1,-1}; to_vector = {1,1,1,1};
swap(a, to_vector);
swap_ranges(a.begin(), a.begin() + 2, to_vector.begin()); // only swap the first 2 elements

a = {-1,3,2};
iter_swap(a.begin(), a.end() - 1); // swap two elements by passing their iterator

a = {-1,3,2}; to_vector = {};
reverse(a.begin(), a.end());
reverse_copy(a.begin(), a.end(), back_inserter(to_vector));

a = {1,2,3,4,5,6};
rotate(a.begin(), a.begin() + 2, a.end()); // 3,4,5,6,1,2
rotate(a.rbegin(), a.rbegin() + 1, a.rend()); // 6,1,2,3,4,5
// rotate_copy

a = {1,2,3,4,5,6};
default_random_engine defaultEngine;
shuffle(a.begin(), a.end(), defaultEngine);

a = {1,1,1,4,5,6};
auto x = unique(a.begin(), a.end()); // a: 1,4,5,6,5,6 ; x points to pos -2
// unique_copy