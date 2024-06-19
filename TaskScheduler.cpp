#include <iostream>
#include <queue>

using namespace std;

class TaskScheduler {
private:
    queue <string> taskQueue;

public:
    void addTask(const string& task) {
        taskQueue.push(task);
        cout << "Task '" << task << "' added to the queue." << endl;
    }

    void nextTask() {
        if (!taskQueue.empty()) {
            string nextTask = taskQueue.front();
            taskQueue.pop();
            cout << "Next task in the queue: '" << nextTask << "'" << endl;
        } else {
            cout << "The queue is empty." << endl;
        }
    }

    void taskCount() {
        cout << "Number of tasks in the queue: " << taskQueue.size() << endl;
    }
};

int main() {
    TaskScheduler scheduler;

    string task;
    while (true) {
        cout << "Enter a task (or 'quit' to exit): ";
        cin >> task;
        if (task == "quit") {
            break;
        }
        scheduler.addTask(task);
    }
    
    scheduler.taskCount();
    scheduler.nextTask();

    return 0;
}

