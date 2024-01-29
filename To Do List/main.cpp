#include <iostream>
#include <string>

using namespace std;


struct Node
{
    int TaskId;
    string TaskName;
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
    void DATask()  //( DA = Display All)
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
    void DCTask()  //( DC = Display Completed )
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

    //Mark Task as completed
    void MC(int TaskId)   //( MC = Mark Completed Task )
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->TaskId == TaskId)
            {
                temp->completed = true;
                cout << "Task marked as completed!" << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Task not found!" << endl;
    }

};




int main()
{
    ToDoList toDoList;
    int Choice, TaskId;
    string TaskName, NTName;

    do
    {
        cout << "\n==== To-Do List ====" << endl;
        cout << "1. Add Task\n2. Update Task\n3. Delete Task\n4. Display All Tasks\n5. Display Completed Tasks\n6. Mark Task as Completed\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            cout << "Enter Task ID: ";
            cin >> TaskId;
            cout << "Enter Task Name: ";
            cin.ignore();
            getline(cin, TaskName);
            toDoList.AddTask(TaskId, TaskName);
            break;
        case 2:
            cout << "Enter Task ID to update: ";
            cin >> TaskId;
            cout << "Enter New Task Name: ";
            cin.ignore();
            getline(cin, NTName);
            toDoList.UPTask(TaskId, NTName);
            break;
        case 3:
            cout << "Enter Task ID to delete: ";
            cin >> TaskId;
            toDoList.DTask(TaskId);
            break;
        case 4:
            toDoList.DATask();
            break;
        case 5:
            toDoList.DCTask();
            break;
        case 6:
            cout << "Enter Task ID to mark as completed: ";
            cin >> TaskId;
            toDoList.MC(TaskId);
            break;
        case 0:
            cout << "Exiting program. Thank you!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
    while (Choice != 0);

    return 0;
}
