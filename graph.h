
class Graph{

private:
    int vertices;
    unordered_map< Node*, vector<Node*> >adj;
    void topological_sort_util(unordered_map<Node*,vector<Node*>>adj, unordered_set<Node*>&visited,stack<Node*>&st,Node* src);

public:
    
    Graph(int vertices){
        this->vertices = vertices;
    }

    void add_Edge(Node* node1, Node* node2);
    void topological_sort();

};


void Graph::add_Edge(Node* node1, Node* node2){

    adj[node1].push_back(node2);
}

void Graph::topological_sort_util(unordered_map<Node*,vector<Node*>>adj, unordered_set<Node*>&visited,stack<Node*>&st,Node* src){

    visited.insert(src);

    for(auto neighbour:adj[src]){

        if(visited.find(neighbour)==visited.end())
            topological_sort_util(adj, visited, st, neighbour);
    }

    st.push(src);
}

void Graph::topological_sort(){


    stack<Node*>st;
    unordered_set<Node*>visited;

    for(auto it:adj){

        Node* src = it.first;
        if(visited.find(src)==visited.end())
            topological_sort_util(adj, visited, st, src);
    }

    cout<<"Order of Task:"<<endl;
    while(!st.empty()){

        cout<<st.top()->get_task()<<endl;
        st.pop();
    }

}