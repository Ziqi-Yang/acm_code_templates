// 自己写的, 经过leetcode检验
int mark[N]{0}; // 记录分组

bool traverse(vector<vector<int>> &graph, int root, int flag = 1, int prev = -1)
{ // graph: 无向图(双向图)的邻接矩阵； flag: 判断是否是哪组; prev 防止两者来回访问
    if (!mark[root]) mark[root] = flag;
    else if (mark[root] != flag) return false;
    else return true;

    for (auto &node: graph[root])
        if (node != prev && !traverse(graph, node, -flag, root)) return false;
    
    return true;
}

bool isBipartite(vector<vector<int>>& graph)
{ // 主函数
    int n = graph.size();
    for (int i = 0; i < n; i++)
        if (!mark[i] && !traverse(graph, i)) return false;
    return true;
}
