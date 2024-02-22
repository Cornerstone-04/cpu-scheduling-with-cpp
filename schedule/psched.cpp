#include <iostream>
#include <queue>

using namespace std;

struct Process
{
    int id;
    int priority;
};

struct PriorityComparator
{
    bool operator()(const Process p1, const Process p2)
    {
        return p1.priority > p2.priority; // higher priority values indicates higher priority
    }
};

void PriorityScheduling(vector<Process> &processes)
{
    priority_queue<Process, vector<Process>, PriorityComparator> readyQueue;

    // enqueue all processes in the ready queue
    for (const Process &process : processes)
    {
        readyQueue.push(process);
    }

    // process each job based on priority
    while (!readyQueue.empty())
    {
        Process currentProcess = readyQueue.top();
        readyQueue.pop();

        // simulate processing the current process
        cout << "Processing process " << currentProcess.id << " with Priority " << currentProcess.priority << endl;
    }
}

int main()
{
    vector<Process> processes = {{1, 3}, {2, 1}, {3, 2}};
    PriorityScheduling(processes);

    return 0;
}