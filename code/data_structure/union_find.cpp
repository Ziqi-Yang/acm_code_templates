// https://labuladong.github.io/algo/2/22/53/
class union_find
{
private:
	int parent[1010]; // to be changed
	int size;

public:
	int count;

	union_find(int n)
	{
		size = n;
		count = n; // not connected at the beginning
		for (int i = 0; i < n; i++) parent[i] = i;
	}

	// int count() // the number of connected parts
		// return this.count;

	int find(int x)
	{ // basic func for implementing other functions
		assert(x < size);
		if (parent[x] != x) parent[x] = find(parent[x]);
		return parent[x];
	}

	void union_parts(int p, int q)
	{ // * connect two parts
		assert(p < size || q < size);
		int rootP = find(p);
		int rootQ = find(q);
		if (rootP == rootQ) return;
		parent[rootQ] = rootP; // rootP is the parent
		count--;
	}

	bool connected(int p, int q)
	{ // * whether p and q are in the same part
		assert(p < size || q < size);
		int rootP = find(p);
		int rootQ = find(q);
		return rootP == rootQ;
	}
};