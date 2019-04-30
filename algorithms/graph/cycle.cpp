//
// Hawick and James' cycle enumeration
//
// Description:
//   For a directed graph, it enumerates all cycles
//
// Algorithm:
//   Hawick and James's implementation of Johnson algorithm.
//
// Complexity
//   O(n+m) average time for each cycles,
//   O(n+m) space.
//
// References:
//   K. A. Hawick and H. A. James (2007):
//   Enumerating circuits and loops in graphs with self-arcs and multiple-arcs.
//   in Proceedings of International Conference on Foundations of Computer Science,
//   pp.14--20.
//
//   D. B. Johnson (1975):
//   Finding all the elementary circuits of a directed graph.
//   SIAM Journal on Computing, vol.4, pp.77--84.
//
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <unordered_set>
#include <functional>

using namespace std;


struct graph {
    int n;
    vector<vector<int> > adj;
    graph(int n) : n(n), adj(n) { }
    vector<vector<int> > cycles;
    void add_edge(int u, int v) {
        adj[u].push_back(v);
    }

    void all_cycles() {
        vector<int> S;
        for (int s = 0; s < n; ++s) {
            vector<bool> blocked(n);
            vector<unordered_set<int> > B(n);



            function<void(int)> unblock = [&](int u) {
                blocked[u] = false;
                for (int v: B[u])
                    if (blocked[v]) unblock(v);
                B[u].clear();
            };

            function<bool(int)> rec = [&](int u) {
                bool is_cycle = false;
                blocked[u] = true;
                S.push_back(u);
                for (int v: adj[u]) {
                    if (v <  s) continue;
                    if (v == s) {
                        is_cycle = true; // S forms a cycle
                        cout << "found cycle" << endl;
                        vector<int> cycle;
                        for (auto w: S){
                            cout << " " << w;
                            cycle.push_back(w);
                        }
                        cout<<endl;
                        cycles.push_back(cycle);
                    } else if (!blocked[v]){
                        if(rec(v)){
                            is_cycle = true;
                        }
                    }
                }

                if (is_cycle){
                    unblock(u);
                } else {
                    for (int v: adj[u]) {
                        if (v < s) continue;
                        if (!B[v].count(u)) B[v].insert(u);
                    }
                }

                S.pop_back();
                return is_cycle;
            };

            rec(s);
        }

    }
};

int main() {
    int n = 10;
    graph g(n);

    g.add_edge(1,2);
    g.add_edge(1,3);
    g.add_edge(1,4);
    g.add_edge(1,5);

    g.add_edge(2,1);
    g.add_edge(2,3);

    g.add_edge(3,1);
    g.add_edge(3,2);
    g.add_edge(3,4);
    g.add_edge(3,6);

    g.add_edge(4,5);


    g.add_edge(5,2);
    g.add_edge(5,4);

    g.add_edge(6,4);


    g.all_cycles();
    for(int i=0; i<g.cycles.size(); i++){
        for(int j=0; j<g.cycles[i].size(); j++){
            cout<<g.cycles[i][j]<<",";
        }
        cout<<endl;
    }
}



//int n = 5;
//graph g(n);
//g.add_edge(0,0);
//
//g.add_edge(1,2);
//g.add_edge(2,1);
//
//g.add_edge(2,3);
//g.add_edge(2,4);
//
//g.add_edge(3,4);
//
//g.add_edge(4,3);
//g.add_edge(4,2);
//g.add_edge(4,1);

//found cycle
//0
//found cycle
//1 2 3 4
//found cycle
//1 2 4
//found cycle
//2 3 4
//found cycle
//2 4
//found cycle
//3 4