#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void SJF_Scheduling(vector<int> &processes)
{
    sort(processes.begin(), processes.end());

    for (int currentProcess : processes)
    {
        cout << "Processing process " << currentProcess << endl;
    }
}

int main()
{
    vector<int> processes = {6, 2, 8, 4};
    SJF_Scheduling(processes);

    return 0;
}