#include <iostream>
#include <queue>

using namespace std;

void FCFS_Scheduling(const vector<int> &processes)
{
    queue<int> readyQueue;

    // enqueue all processes in the ready queue
    for (int process : processes)
    {
        readyQueue.push(process);
    }

    // process each job in FCFS order
    while (!readyQueue.empty())
    {
        int currentProcess = readyQueue.front();
        readyQueue.pop();

        // simulate processing the current process
        cout << "Processing process" << currentProcess << endl;
    }
}

int main()
{
    vector<int> processes = {1, 2, 3, 4};
    FCFS_Scheduling(processes);
}