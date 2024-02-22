#include <iostream>
#include <queue>

using namespace std;

void FCFS_Scheduling(const vector<int> &processes)
{
    queue<int> readyQueue;

    for (int process : processes)
    {
        readyQueue.push(process);
    }

    while (!readyQueue.empty())
    {
        int currentProcess = readyQueue.front();
        readyQueue.pop();

        cout << "Processing process" << currentProcess << endl;
    }
}

int main()
{
    vector<int> processes = {1, 2, 3, 4};
    FCFS_Scheduling(processes);
}