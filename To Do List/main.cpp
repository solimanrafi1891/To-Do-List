#include <iostream>
#include <string>
using namespace std;


struct Node
{
    int taskId;
    string taskName;
    bool completed;
    Node* next;
};

class ToDoList
{
private:
    Node* head;
public:
    ToDoList()
    {
        head = nullptr;
    }

    //Add Task Function is for Adding new task

    void AddTask(int TaskId, string TaskName)
    {
        Node* NewTask = new Node;
        NewTask->TaskId = TaskId;
        NewTask->TaskName = TaskName;
        NewTask->completed = false;
        NewTask->next = nullptr;

        if (head == nullptr)
        {
            head = NewTask;
        }
        else
        {
            Node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = NewTask;
        }

        cout << "Task added successfully!" << endl;
    }

};



int main()
{
    cout << "To Do List project" << endl;
    return 0;
}
