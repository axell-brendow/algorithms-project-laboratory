#include <iostream>
#include <vector>

using namespace std;

template<typename Element = int>
class Node
{
public:
    enum Color { white, gray, black };

    // Properties

    int color;
    Element element;

    // Constructors
    
    Node(int color, Element element) :
        color(color), element(element) {}

    Node(Element element) : Node(Color::white, element) {}
    Node(Color color) : Node(color, Element()) {}
    Node() : Node(Color::white) {}

    // Functions

    void resetColor()
    {
        color = Color::white;
    }
};

template<typename Element>
ostream& operator<<(ostream& ostream, Node<Element>& node)
{
    return ostream << "{ color: " << node.color << ", element: " << node.element << " }";
}

class Edge
{
public:
    // Properties

    int node0;
    int node1;
    int color;

    // Constructors
    
    Edge(int node0, int node1, int color) : node0(node0), node1(node1), color(color) {}
    Edge(int node0, int node1) : Edge(node0, node1, 0) {}
    Edge() : Edge(-1, -1) {}

    // Functions

    bool exists()
    {
        return node0 >= 0 && node1 >= 0;
    }

    void resetColor()
    {
        color = 0;
    }

    void resetNodes()
    {
        node0 = node1 = -1;
    }
};

template<typename Element>
ostream& operator<<(ostream& ostream, Edge& edge)
{
    return ostream << "{ node0: " << edge.node0 << ", node1: " << edge.node1 << ", color: " << edge.color << " }";
}

template<typename Element = int>
class Graph
{
public:
    typedef Node<Element> GraphNode;
    typedef vector<GraphNode> GraphNodes;
    typedef vector<Edge> GraphEdges;
    typedef vector<GraphEdges> GraphMatrix;

    // Properties

    GraphNodes nodes;
    GraphMatrix matrix;
    int numVertices;

    // Constructors
    
    Graph(int numVertices, Element defaultValue) : numVertices(numVertices)
    {
        nodes = GraphNodes(numVertices);
        matrix = GraphMatrix(numVertices);

        for (size_t i = 0; i < numVertices; i++)
            matrix[i] = GraphEdges(numVertices);
    }

    // Functions

    void resetNodeColors()
    {
        for (auto &&node : nodes) node.resetColor();
    }

    void resetEdgeColors()
    {
        for (auto &&edges : matrix)
            for (auto &&edge : edges)
                edge.resetColor();
    }

    GraphEdges& getEdges(int line)
    {
        return matrix[line];
    }

    Edge& getEdge(int line, int column)
    {
        return getEdges(line)[column];
    }

    void createEdge(int line, int column)
    {
        getEdges(line)[column] = Edge(line, column);
    }

    bool areConnected(int node0, int node1)
    {
        return getEdge(node0, node1).exists();
    }

    int depthFirstSearchR(int initialVertex)
    {
        int componentSize = 1;

        for (size_t i = 0; i < numVertices; i++)
        {
            if (areConnected(initialVertex, i) &&
                nodes[i].color == GraphNode::Color::white)
            {
                nodes[i].color = GraphNode::Color::gray;
                componentSize += depthFirstSearchR(i);
                nodes[i].color = GraphNode::Color::black;
            }
        }

        return componentSize;
    }

    int depthFirstSearch()
    {
        resetNodeColors();
        int maxComponentSize = 0, componentSize;
        for (size_t i = 0; i < numVertices; i++)
        {
            nodes[i].color = GraphNode::Color::gray;
            componentSize = depthFirstSearchR(i);
            nodes[i].color = GraphNode::Color::black;
            if (componentSize > maxComponentSize) maxComponentSize = componentSize;
        }

        return maxComponentSize;
    }
};

template<typename Element>
ostream& operator<<(ostream& ostream, Graph<Element>& graph)
{
    if (graph.numVertices > 0)
    {
        for (size_t i = 0; i < graph.numVertices; i++)
        {
            ostream << graph.getEdge(i, 0).exists() ? "1" : "0";

            for (size_t j = 1; j < graph.numVertices; j++)
            {
                ostream << " " << graph.getEdge(i, j).exists() ? "1" : "0";
            }

            ostream << endl;
        }
    }

    return ostream;
}

int main()
{
    int numOfTestCases, numOfCitizens, numOfPairs, citizen0, citizen1;
    cin >> numOfTestCases;

    for (size_t i = 0; i < numOfTestCases; i++)
    {
        cin >> numOfCitizens >> numOfPairs;
        Graph<> graph(numOfCitizens, 0);

        for (size_t i = 0; i < numOfPairs; i++)
        {
            cin >> citizen0 >> citizen1;
            citizen0 -= 1;
            citizen1 -= 1;
            graph.createEdge(citizen0, citizen1);
            graph.createEdge(citizen1, citizen0);
        }

        cout << graph.depthFirstSearch() << endl;
        // cout << graph << endl;
    }

    return 0;
}
