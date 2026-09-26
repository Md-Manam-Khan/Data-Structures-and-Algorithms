#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long allocation[4][4], maximum[4][4], need[4][4], available[4];
    long long finish[4] = {0}, safe_sequence[4], i, j;
    cout << "Enter Allocation Matrix:\n";
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin >> allocation[i][j];
        }
    }
    cout << "Enter Maximum Matrix:\n";
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin >> maximum[i][j];
        }
    }
    cout << "Enter Available Resources:\n";
    for(i = 0; i < 4; i++)
    {
        cin >> available[i];
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }
    cout << "\nNeed Matrix:\n";
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout << need[i][j] << " ";
        }
        cout << endl;
    }
    int count = 0;
    while(count < 4)
    {
        bool found = false;
        for(i = 0; i < 4; i++)
        {
            if(finish[i] == 0)
            {
                bool possible = true;
                for(j = 0; j < 4; j++)
                {
                    if(need[i][j] > available[j])
                    {
                        possible = false;
                    }
                }
                if(possible == true)
                {
                    for(j = 0; j < 4; j++)
                    {
                        available[j] = available[j] + allocation[i][j];
                    }
                    safe_sequence[count] = i;
                    count++;
                    finish[i] = 1;
                    found = true;
                }
            }
        }
        if(found == false)
        {
            break;
        }
    }
    if(count == 4)
    {
        cout << "\nSystem is in SAFE state\n";
        cout << "Safe Sequence: ";
        for(i = 0; i < 4; i++)
        {
            cout << "P" << safe_sequence[i];
            if(i != 3)
            {
                cout << " -> ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "\nSystem is in UNSAFE state (Deadlock may occur)\n";
    }
    return 0;
}