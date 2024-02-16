#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int source, destination, weight;
};

class Graph {
    int V; // Número de vértices
    vector<Edge> edges; // Vetor de arestas

public:
    Graph(int V) : V(V) {}

    void addEdge(int source, int destination, int weight) {
        Edge edge = {source, destination, weight};
        edges.push_back(edge);
    }

    // Função auxiliar para encontrar o conjunto de um elemento "i"
    int find(vector<int>& parent, int i) {
        if (parent[i] == -1)
            return i;
        return find(parent, parent[i]);
    }

    // Função para unir dois conjuntos
    void Union(vector<int>& parent, int x, int y) {
        int x_set = find(parent, x);
        int y_set = find(parent, y);
        parent[x_set] = y_set;
    }

    // Função principal que constrói a árvore geradora mínima usando o algoritmo de Kruskal
    void KruskalMST() {
        vector<Edge> result; // Para armazenar a árvore geradora mínima
        int e = 0; // Índice usado para contar o número de arestas incluídas no resultado
        int i = 0; // Índice usado para percorrer todas as arestas em ordem de peso crescente

        // Ordena todas as arestas em ordem crescente de peso
        sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
            return a.weight < b.weight;
        });

        vector<int> parent(V, -1); // Vetor para armazenar os pais dos conjuntos

        // Número de arestas a serem incluídas na árvore é V-1
        while (e < V - 1 && i < edges.size()) {
            Edge next_edge = edges[i++];

            int x = find(parent, next_edge.source);
            int y = find(parent, next_edge.destination);

            // Se incluir essa aresta não forma um ciclo, inclua-a no resultado e faça a união
            if (x != y) {
                result.push_back(next_edge);
                Union(parent, x, y);
                e++;
            }
        }

        // Mostra as arestas selecionadas na árvore geradora mínima
        for (auto edge : result) {
            cout << edge.source << " - " << edge.destination << " : " << edge.weight << endl;
        }
    }
};

int main() {
    int V = 4; // Número de vértices no grafo
    Graph graph(V);

    // Adiciona as arestas com seus pesos
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    // Chama o algoritmo de Kruskal
    graph.KruskalMST();

    return 0;
}
