#include "edge.hpp"
#include <iostream>
#include <vector>
#include "successor.hpp"
class adgency_list {

    private:
        int V; // Number of vertices
        std::vector<succ>* list; // Array of edges
        Edges *edges;

    public:
        adgency_list(int V) {
            this->V = V;
            list = new std::vector<succ>[V];
            edges = new Edges[V];
        }

        ~adgency_list() {
            delete[] list;
            delete[] edges;
        }

        void add_edge(Edges &edge) {
            list[edge.x].push_back({edge.y, edge.p});

        }

        void display_adjacency_list(){
            for (int i = 0; i < V; i++) {
                std::cout << "Vertex " << i << ": ";
                for (const auto& succ : list[i]) {
                    std::cout << "(" << succ.successor << ", " << succ.weight << ") ";
                }
                std::cout << std::endl;
            }
        }


        };

        // Additional methods to manipulate the adjacency list can be added here

