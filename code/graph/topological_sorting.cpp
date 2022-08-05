// leetcode problem 课程表2: https://leetcode.cn/problems/course-schedule-ii/submissions/
const int N = 2010;

class Solution {
public:
    bool onPath[N];
    bool visited[N];
    int in[N]{0}; // 入度
    vector<int> q;
    vector<int> res; // 拓扑排序

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph;
        graph.resize(numCourses);
        for (auto &v: prerequisites)
        {
            graph[v[1]].emplace_back(v[0]);
            in[v[0]]++;
        }
        // 前面只需实现graph以及入度in
        for (int i =0; i < numCourses; i++)
            if (!in[i]) q.emplace_back(i);
        res = q;
        while (q.size())
        {
            int cur = q.back();
            q.pop_back();
            for (auto &next: graph[cur]) 
            {
                in[next] --;
                if (!in[next])
                {
                    q.emplace_back(next);
                    res.emplace_back(next);
                }
            }
        }
        if (!(res.size() == numCourses)) return {};
        return res;
    }
};

