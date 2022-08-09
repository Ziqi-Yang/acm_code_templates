// https://codeforces.com/contest/1691/submission/159022997
// 自己改进版本：加入cnt变量表示有几组，查询时间复杂度 O(1)
struct DSU {
    std::vector<int> f, siz;
	int cnt;
    DSU(int n) : f(n), siz(n, 1) { std::iota(f.begin(), f.end(), 0); cnt = n;} // f记录parent
    int leader(int x) { // to implement other funcs
        while (x != f[x]) x = f[x] = f[f[x]];
        return x;
    }
    bool same(int x, int y) { return leader(x) == leader(y); } // 是否一组
    bool merge(int x, int y) { // 合并
        x = leader(x);
        y = leader(y);
        if (x == y) return false;
        siz[x] += siz[y];
        f[y] = x;
		cnt --;
        return true;
    }
    int size(int x) { return siz[leader(x)]; } // 一组多少个元素
	int count() {return cnt;} // 几组
};