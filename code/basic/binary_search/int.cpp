bool check(int x) {/* ... */} // 检查x是否满足某种性质
// 下面两者初始值一般情况下 l = 0 和 r = n - 1, 取决于集合的开闭
// 区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用：(也就是r=mid)
int bsearch_1(int l, int r)
{
    while (l < r)
    {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;    // 如 q[mid] >= x 寻找第一个大于等于x的数的位置
        else l = mid + 1;
    }
    return l;
}
// 区间[l, r]被划分成[l, mid - 1]和[mid, r]时使用：(也就是l=mid)
int bsearch_2(int l, int r)
{
    while (l < r)
    {
        int mid = l + r + 1 >> 1; // 注意 "+ 1"
        if (check(mid)) l = mid; // 如 q[mid] <= x 寻找第一个小于等于x的数的位置
        else r = mid - 1;
    }
    return l;
}