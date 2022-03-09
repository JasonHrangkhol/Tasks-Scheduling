
class Node{

private:
    string task, deadline;

public:
    Node(string task, string deadline){
        
        this->task = task;
        this->deadline = deadline;
    }

    string get_task();
    string get_deadline();
};

string Node::get_task(){

    return task;
}

string Node::get_deadline(){

    return deadline;
}
