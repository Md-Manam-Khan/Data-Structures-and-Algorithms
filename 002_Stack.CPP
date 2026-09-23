#include<bits/stdc++.h>
using namespace std;
#define max 100
int top = -1, x;
int checkFull (int (&a)[max])
{
    if (top >= max)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int checkEmpty (int (&a)[max])
{
    if (top <= -1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
void push (int (&a)[max])
{
    x = checkFull(a);
    if (x == 1)
    {
        cout<<"Can't push anymore, stack full!";
    }
    else
    {
        cout<<"\nInput the element you want to push: ";
        cin>>x;
        ++top;
        a[top] = x;
    }
}
void pop (int (&a)[max])
{
    x = checkEmpty(a);
    if (x == 1)
    {
        cout<<"Can't pop anymore, stack empty!";
    }
    else
    {
        cout<<"\nInput the element you want to push: ";
        cin>>x;
        ++top;
        a[top] = x;
    }
}
void peek (int (&a)[max])
{
    x = checkFull(a);
    cout<<"The element on the top is: "<<a[top];
}
int main ()
{
    int a[max], c, m, n;
    while(1)
    {
        cout<<"Choose an option: ";
        cout<<"1. Push\n2. Pop\n3. Peek\n 4. Check\n\nI choose: ";
        cin>>c;
        switch(c)
        {
            case 1:
            {
                push(a);
                break;
            }
            case 2:
            {
                pop(a);
                break;
            }
            case 3:
            {
                peek(a);
                break;
            }
            case 4:
            {
                cout<<"\nI want to check: ";
                cout<<"\n1. If empty\n2. If full";
                cin>>m;
                switch(m)
                {
                    while(1)
                    {
                        case 1:
                        {
                            n = checkFull(a);
                            if (n == 1)
                            {
                                cout<<"\nStack is full";
                            }
                            else
                            {
                                cout<<"\nStack is not full";
                            }
                            break;
                        }
                        case 2:
                        {
                            n = checkEmpty(a);
                            if (n == 1)
                            {
                                cout<<"\nStack is empty";
                            }
                            else
                            {
                                cout<<"\nStack is not empty";
                            }
                            break;
                        }
                        default:
                        {
                            cout<<"\bChoose again";
                        }
                    }
                }
            }
            default:
            {
                cout<<"\nChoose again\n";
            }
        }
    }
}