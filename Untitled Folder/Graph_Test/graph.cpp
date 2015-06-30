#include "graph.h"

Graph::Graph()
{

}

void Graph::insert(Vertex *v)
    {
        vertices.push_back(v);
    }

void Graph::printGraph()
{
    for (int i = 0; i < vertices.size(); i++)
        vertices[i]->printEdges();
}

void Graph::Eliminator(string nameNode)
{

    for (int i = 0; i < vertices.size(); i++)
    {
        vertices[i]->EliminateEdge(nameNode);

    }
    for (int i = 0; i < vertices.size(); i++)
    {

        if(vertices[i]->getName()==nameNode)
        {
            vertices.erase(vertices.begin()+i);
        }
        else
            cout<<"no existation"<<endl;
    }
}

void Graph::Agreganator(string Origen,string Destino,int peso)
{
    for(int x=0; x<vertices.size(); x++)
    {
        if(vertices[x]->getName()==Origen)
        {
            for(int y=0;y<vertices.size();y++)
            {
                if(vertices[y]->getName()==Destino)
                {
                    vertices[x]->addEdge(vertices[y],peso);
                }
                else return;
            }
        }
        else return;
    }
}
