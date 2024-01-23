#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    string description;
    bool completed;
};

// Function to add a task to the list
void addTask(vector<Task>& tasks, const string& description) {
    Task newTask = {description, false};
    tasks.push_back(newTask);
    cout << "Task added: " << description << endl;
}

// Function to view tasks in the list
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }

    cout << "Tasks:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        cout << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].description << endl;
    }
}

// Function to mark a task as completed
void markTaskCompleted(vector<Task>& tasks, size_t index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "Task marked as completed: " << tasks[index].description << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

// Function to remove a task from the list
void removeTask(vector<Task>& tasks, size_t index) {
    if (index >= 0 && index < tasks.size()) {
        cout << "Task removed: " << tasks[index].description << endl;
        tasks.erase(tasks.begin() + index);
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    vector<Task> tasks;

    do {
        cout << "\n---- To-Do List Manager ----" << endl;
        cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    cout << "Enter task description: ";
                    cin.ignore(); // Clear the input buffer
                    string description;
                    getline(cin, description);
                    addTask(tasks, description);
                    break;
                }
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                {
                    cout << "Enter the index of the task to mark as completed: ";
                    size_t index;
                    cin >> index;
                    markTaskCompleted(tasks, index - 1);
                    break;
                }
            case 4:
                {
                    cout << "Enter the index of the task to remove: ";
                    size_t index;
                    cin >> index;
                    removeTask(tasks, index - 1);
                    break;
                }
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (true);

    return 0;
}
