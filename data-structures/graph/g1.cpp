#include <iostream>
#include <vector>

using namespace std; //https://www.geeksforgeeks.org/graph-implementation-using-stl-for-competitive-programming-set-1-dfs-of-unweighted-and-undirected/

int i,j;        //unweighted and undirectional graph 

void DFS(vector<int> vec[],int V) // depth first search
{
    vector<bool> flag; // elimination of duplicity

    for(i = 0;i < V;i++)
    {
        flag.push_back(false);
    }

    for(i = 0;i < V;i++) 
    {
        vector<int> T = vec[i];
        for(j = 0;j < T.size();j++)
        {
            if(flag[i] == false)
            {
                cout << i << " ";
                flag[i] = true;
            }
            int x = T[j];
            
            if(flag[x] == false)
            {
                cout << x << " ";
                flag[x] = true;
            }

        }
        cout << endl;
    }
}
int main()
{
    int nVertex,nEdges;
    int node1,node2;

    cout << "Enter number of Vertices : " ;
    cin >> nVertex;

    vector<int> v[nVertex];

    cout << "How many edges? : ";
    cin >> nEdges;

    for(i=0;i<nEdges;i++)
    {
        cout << "Enter the edges : ";

        cin >> node1 >> node2;
        v[node1].push_back(node2);
        v[node2].push_back(node1); //comment if directional

    }
    
    DFS(v,nVertex);
    
    return 0;
}

