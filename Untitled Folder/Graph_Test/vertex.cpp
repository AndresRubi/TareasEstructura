#include "vertex.h"

Vertex::Vertex(string id)
{
    name = id;
}

void Vertex::addEdge(Vertex *v, int dist)
{
    Edge newEdge(this, v, dist);
    edges.push_back(newEdge);
}

void Vertex::EliminateEdge(string nodeName)
{
    for (int x = 0; x < edges.size(); x++)
    {
        if(edges[x].getDestination()->getName()==nodeName)
        {
            edges.erase(edges.begin()+x);
        }
        else cout<<"no existation"<<endl;
    }
}

void Vertex::printEdges()
{
    cout << name << ":" << endl;
    for (int i = 0; i < edges.size(); i++)
    {
    Edge e = edges[i];
    cout << e.getDestination()->getName() <<
        " - " << e.getDistance() << endl;
    }
    cout << endl;
}
