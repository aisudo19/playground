mport networkx as nx
from graphviz import Digraph


edges = [
(1,2), (1,3), (1,4), (1,5), (2,1), (2,3), (3,1), (3,2), (3,4), (3,6), (4,5), (5,2), (5,4), (6,4),
]
g = nx.DiGraph(edges) #有向グラフを作成

nx.simple_cycles(g)
print(list(nx.simple_cycles(g)))
print(list(nx.strongly_connected_components(g)))


G = Digraph(format="png")
G.attr("node", shape="circle")
N = 23    # ノード数
for i in range(N):
    G.node(str(i), str(i))


for i,j in edges:
    G.edge(str(i), str(j))
G.render("t")
