#ifndef VERTEX_H
#define VERTEX_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Vertex;

class Edge
{
public:
    Edge(Vertex *org, Vertex *dest, int dist)
    {
        origin = org;
        destination = dest;
        distance = dist;
    }

    Vertex* getOrigin() {return origin;}
    Vertex* getDestination() {return destination;}
    int getDistance() {return distance;}
private:
    Vertex* origin;
    Vertex* destination;
    int distance;
};


class Vertex
{
public:
    Vertex(string id);

    void addEdge(Vertex *v, int dist);
    void EliminateEdge(string nodeName);
    void printEdges();
    string getName() {return name;}
    vector<Edge> getEdges() {return edges;}

private:
    string name;
    vector<Edge> edges;
};

#endif // VERTEX_H
