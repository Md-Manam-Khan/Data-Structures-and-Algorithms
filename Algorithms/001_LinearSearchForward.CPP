#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
void linear_search(vll &a, ll &n, ll &target)
{
    ll i, position;
    bool found = false;
    for (i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            found = true;
            position = i;
            break;
        }
    }
    if (found)
    {
        cout<<"\nThe desired element " << target << " was found at index " << position <<" (0 based index)";
    }
    else
    {
        cout<<"\nThe desired element " << target << " was not found at any index ";
    }
    cout<<"\n";
}
int main ()
{
    vll a;
    ll n, i, x, target;
    cout<<"Input the number of elements: ";
    cin>>n;
    cout<<"\n";
    for (i = 0; i < n; i++)
    {
        cout<<"Element at a["<<i<<"] index: ";
        cin>>x;
        a.push_back(x);
    }
    cout<<"\nThe elements are: ";
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n\nInput the desired target: ";
    cin>>target;
    linear_search(a, n, target);
    return 0;
}