#include <iostream>
#include <queue>

using namespace std;

void RR_Scehduling(const vector<int> &processes, int timeQuantum)
{
    queue<int> readyQueue;

    // enqueue all processes in the ready queue
    for (int process : processes)
    {
        readyQueue.push(process);
    }

    // process each job in the round-robin order
    while (!readyQueue.empty())
    {
        int currentProcess = readyQueue.front();
        readyQueue.pop();

        // simulate processing the current process
        cout << "Processing process " << currentProcess << endl;

        // enqueue the process again if it not finsished
        if (currentProcess > timeQuantum)
        {
            readyQueue.push(currentProcess - timeQuantum);
        }
    }
}

int main()
{
    vector<int> processes = {10, 5, 8};
    int timeQuantum = 2;
    RR_Scehduling(processes, timeQuantum);

    return 0;
}