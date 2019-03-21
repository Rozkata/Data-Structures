#include <iostream>
#include <vector>
#include <list>

using namespace std;


class Edge
{
private:
    double weight;
    int vertex_id;

public:

    Edge(double w, int id)
    {
        weight = w;
        vertex_id = id;
    }

    double getWeight() const
    {
        return weight;
    }

    int getId() const
    {
        return vertex_id;
    }
};

int main()
{
    std::vector<std::list<Edge>>::iterator i;

    int c = 0;

    int num_edges;
    cout << "Enter the number of edges: " << endl;
    cin >> num_edges;
    std::vector<std::list<Edge>> adjList(num_edges);
    for (int i = 0; i < num_edges; i++)
    {
        int from, to, weight;
        cout << "Enter From, To and the Weight: ";
        cin >> from ;
        cin>> to;
        cin>> weight;
        adjList[from].push_back(Edge(weight, to));


        for (int from = 0; from < adjList.size(); from++)
        {
            for (const Edge& e : adjList[i])
            {
                cout << "edge from " << from << " to " << e.getId() << " weight" << e.getWeight() << endl;
            }
        }
    }

    return 0;
}
