#include <iostream>
#include <queue>

using namespace std;

void RR_Scehduling(const vector<int> &processes, int timeQuantum)
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

        cout << "Processing process " << currentProcess << endl;

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