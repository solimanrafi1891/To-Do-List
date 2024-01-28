#include <iostream>
#include <string>

using namespace std;

/*

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

    // Update Task
    void UPTask(int TaskId, string NTName) //( UP = Update Task ... NT = New Task )
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->TaskId == TaskId)
            {
                temp->TaskName = NTName;
                cout << "Task updated successfully!" << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Task not found!" << endl;
    }

    //Delete Task
    void DTask(int TaskId)   // DTask = Delete Task
    {
        if (head == nullptr)
        {
            cout << "Task list is empty!" << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr)
        {
            if (temp->TaskId == TaskId)
            {
                if (prev == nullptr)
                {
                    head = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                delete temp;
                cout << "Task deleted successfully!" << endl;
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        cout << "Task not found!" << endl;
    }


    // Display all Tasks
    void DATasks()  //( DA = Display All)
    {
        if (head == nullptr)
        {
            cout << "Task list is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr)
        {
            cout << "Task ID: " << temp->TaskId << " | Task Name: " << temp->TaskName << " | Completed: " << (temp->completed ? "Yes" : "No") << endl;
            temp = temp->next;
        }
    }


    //Display Completed Tasks
    void DCTasks()  //( DC = Display Completed )
    {
        if (head == nullptr)
        {
            cout << "Task list is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->completed)
            {
                cout << "Task ID: " << temp->TaskId << " | Task Name: " << temp->TaskName << " | Completed: Yes" << endl;
            }
            temp = temp->next;
        }
    }


    */


int main()
{
    cout << "To Do List project" << endl;
    return 0;
}
