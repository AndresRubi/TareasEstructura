#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <iostream>
#include <string>

using namespace std;

#include "vertex.h"


class Graph
{
public:
    Graph();
    void insert(Vertex *v);
    void printGraph();
    void Eliminator(string nameNode);
    void Agreganator(string Origen,string Destino,int peso);
private:
    vector<Vertex*> vertices;

};

#endif // GRAPH_H
