
#include<bits/stdc++.h>
using namespace std;

#include "node.h"
#include "graph.h"
#include "utils.h"



int main(){
    
    vector<string>tasks,deadline;

    readFileContent(tasks, deadline); 
      
    int number_of_tasks = tasks.size();;
    vector<Node*>info;

    buildNodes(info, number_of_tasks, tasks, deadline); 

    Graph G(number_of_tasks);

    buildGraph(G, info, number_of_tasks); 

    G.topological_sort();

    return 0;

}