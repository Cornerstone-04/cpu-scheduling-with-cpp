#include <iostream>
#include <queue>

using namespace std;

struct Process
{
    int id;
    int priority;
};

void MultilevelQueueScheduling(vector<Process> &processes)
{
    queue<Process> lowPriorityQueue;
    queue<Process> highPriorityQueue;

    for (const Process &process : processes)
    {
        if (process.priority < 3)
        {
            lowPriorityQueue.push(process);
        }
        else
        {
            highPriorityQueue.push(process);
        }
    }

    while (!highPriorityQueue.empty() || !lowPriorityQueue.empty())
    {
        if (!highPriorityQueue.empty())
        {
            Process currentProcess = highPriorityQueue.front();
            highPriorityQueue.pop();
            cout << "Processing high priority process " << currentProcess.id << endl;
        }
        else
        {
            Process currentProcess = lowPriorityQueue.front();
            lowPriorityQueue.pop();
            cout << "Processing low priority process " << currentProcess.id << endl;
        }
    }
}

int main()
{
    vector<Process> processes = {{1, 3}, {2, 1}, {3, 2}, {4, 4}};
    MultilevelQueueScheduling(processes);

    return 0;
}