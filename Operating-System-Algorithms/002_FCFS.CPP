#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long processNumber;
    cout<<"Input the number of processes: ";
    cin>>processNumber;
    long long arrival[processNumber], burst[processNumber], completion[processNumber], i, j;
    long long turnAround[processNumber], waiting[processNumber], response[processNumber], process[processNumber];
    for (i = 0; i < processNumber; i++)
    {
        cout<<"Input for the process P"<<i+1<<": "<<endl;
        process[i] = i + 1;
        cout<<"Arrival time: ";
        cin>>arrival[i];
        cout<<"Burst time: ";
        cin>>burst[i];
    }
    for (i = 0; i < processNumber - 1; i++) {
        for (j = i + 1; j < processNumber; j++) 
        {
            if (arrival[j] < arrival[i]) 
            {
                swap(arrival[i], arrival[j]);
                swap(burst[i], burst[j]);
                swap (process[i], process[j]);
            }
        }
    }
    for (i = 0; i < processNumber; i++)
    {
        if (i == 0)
        {
            completion[i] = arrival[i] + burst[i];
        }
        else
        {
            if (arrival[i] > completion[i - 1])
            {
                completion[i] = arrival[i] + burst[i];
            }
            else
            {
                completion[i] = completion[i - 1] + burst[i];
            }
        }
        turnAround[i] = completion[i] - arrival[i];
        waiting[i] = turnAround[i] - burst[i];
        response[i] = waiting[i];
    }
    for (i = 0; i < processNumber; i++)
    {
        cout<<"\tP"<<process[i]<<"\t"<<arrival[i]<<"\t"<<burst[i]<<"\t"<<completion[i] <<"\t"<<turnAround[i]<<"\t";
        cout<<waiting[i]<<"\t"<<response[i]<<endl<<endl;
    }
    return 0;
}