#include <iostream>
#include <queue>

using namespace std;

struct Process
{
    int id;
    int burstTime;
};

void MultilevelFeedbackQueueScheduling(vector<Process> &processes)
{
    queue<Process> queue1;
    queue<Process> queue2;
    queue<Process> queue3;

    // Enqueue processes into the first queue
    for (const Process &process : processes)
    {
        queue1.push(process);
    }

    // Process each queue separately with feedback
    while (!queue1.empty() || !queue2.empty() || !queue3.empty())
    {
        if (!queue1.empty())
        {
            Process currentProcess = queue1.front();
            queue1.pop();
            // Simulate processing the current process
            cout << "Processing Process " << currentProcess.id << " in Queue 1" << endl;

            // Move to the next queue if necessary
            if (currentProcess.burstTime > 5)
            {
                queue2.push(currentProcess);
            }
        }
        else if (!queue2.empty())
        {
            Process currentProcess = queue2.front();
            queue2.pop();
            // Simulate processing the current process
            cout << "Processing Process " << currentProcess.id << " in Queue 2" << endl;

            // Move to the next queue if necessary
            if (currentProcess.burstTime > 10)
            {
                queue3.push(currentProcess);
            }
        }
        else
        {
            Process currentProcess = queue3.front();
            queue3.pop();
            // Simulate processing the current process
            cout << "Processing Process " << currentProcess.id << " in Queue 3" << endl;
        }
    }
}

int main()
{
    vector<Process> processes = {{1, 4}, {2, 8}, {3, 12}};
    MultilevelFeedbackQueueScheduling(processes);

    return 0;
}
