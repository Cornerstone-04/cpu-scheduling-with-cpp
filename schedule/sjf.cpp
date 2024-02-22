#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void SJF_Scheduling(vector<int> &processes)
{
    sort(processes.begin(), processes.end());
    // process each job in sorted order (shorted job first/next)
    for (int currentProcess : processes)
    {
        // simulate processing the current process
        cout << "Processing process " << currentProcess << endl;
    }
}

int main()
{
    vector<int> processes = {6, 2, 8, 4};
    SJF_Scheduling(processes);

    return 0;
}