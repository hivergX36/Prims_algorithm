#include "edge.hpp"
#include <vector>
#include <algorithm>
#include "adgency.hpp"

class Prim
{

    private:
    int V; // Number of vertics 
    adgency_list* adj_list; // Adjacency list representation of the graph

    Prim(int v) : V(v) {
        adj_list = new adgency_list(V);
    }

    ~Prim() {
        delete adj_list;
    }

    void add_edge(int u, int v, int weight) {
        Edges edge(u, v, weight);
        adj_list->add_edge(edge);
    }

    void run_prim() {
        // Implementation of Prim's algorithm
    }
};


};



