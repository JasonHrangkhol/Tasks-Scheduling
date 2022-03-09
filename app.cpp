
#include<bits/stdc++.h>
using namespace std;

#include "graph.h"
#include "utils.h"


int main(){
    
    vector<string>tasks,deadline;
    
    ifstream fin;
    string str;

    fin.open("tasks_deadline.txt");

    bool flag = true;
    while (true) {
         
        getline(fin, str);
    
        stringstream ss(str);
        string s;
        
        while (getline(ss, s, ':')) {

            s = trim(s);

            if(flag && s.size()>0){
                
                tasks.push_back(s);
                flag = !flag;
            
            }
            else if(!flag && s.size()>0){

                    deadline.push_back(s);
                    flag = !flag;
            }
        }
    
        if( fin.eof() ) 
            break; 
    }

    fin.close();
      
    int number_of_tasks = tasks.size();;
    vector<Node*>info;

    int current_task=0;
    
    while(current_task<number_of_tasks){

        Node* node = new Node(tasks[current_task],deadline[current_task]);
        info.push_back(node);
        current_task++;
    }

    Graph G(number_of_tasks);

    for(int i=1;i<=number_of_tasks;i++){

        string deadline_node1 = info[i-1]->get_deadline();

        for(int j=1;j<=number_of_tasks;j++){
                
            if(i==j)
                continue;

            string deadline_node2 = info[j-1]->get_deadline();

            if(deadline_node1 <= deadline_node2){

                G.add_Edge(info[i-1],info[j-1]);
            }
        }
    }

    G.topological_sort();

    return 0;

}