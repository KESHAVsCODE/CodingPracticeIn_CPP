#include<iostream>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
class Edge
{
    private:
        int D_id;
        int weight;
    public:
        Edge(){}
        Edge(int Des_id,int w)
        {
            D_id = Des_id; weight = w;
        }
        void setWeight(int w)
        {
            weight = w;
        }
        void setDestination(int Des_id)
        {
            D_id = Des_id;
        }
        void setEdge(int Des_id,int w)
        {
            D_id = Des_id; weight = w;
        }
        int getWeight()
        {
            return weight;
        }
        int getDestination()
        {
            return D_id;
        }
};
class Vertex
{
    private:
        int st_id;
        string st_name;
        list<Edge> edgeList;
    public:
        Vertex(){}
        Vertex(int s_id,string s_name)
        {
            st_id = s_id; st_name = s_name;
        }
        void setState(int s_id)
        {
            st_id = s_id;
        }
        void setStateName(string name)
        {
            st_name = name;
        }
        int getStateId()
        {
            return st_id;
        }
        string getStateName()
        {
            return st_name;
        }
        list<Edge> getAdjacent()
        {
            return edgeList;
        }
};
class GraphList
{
    public:
        vector<Vertex> verteces;
};
int main()
{
    int choice;
    while(true){
        cout<<"What operation do you want to perform?"<<endl;
        cout<<"1. Add Vertex"<<endl;
        cout<<"2. Delete Vertex"<<endl;
        cout<<"3. Update Vertex"<<endl;
        cout<<"4. Add Edge"<<endl;
        cout<<"5. Update Edge"<<endl;
        cout<<"6. Delete Edge"<<endl;
        cout<<"7. Check if two vertex are neighbors"<<endl;
        cout<<"8. Print all neighbors of vertex"<<endl;
        cout<<"9. Print Graph"<<endl;
        cout<<"0. Exit"<<endl;
        cin>>choice;
        system("cls");
        switch(choice)
        {
            case 1:

            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0:
        }
    }
    return 0;
}
