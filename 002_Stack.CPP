#include<bits/stdc++.h>
using namespace std;
#define max 100
int top = -1, x, y;
int checkFull (int (&a)[max])
{
    if (top >= (max -1))
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
        cout<<"\nCan't push anymore, stack full!\n";
    }
    else
    {
        cout<<"\nInput the element you want to push: ";
        cin>>y;
        ++top;
        a[top] = y;
        cout<<"\n";
    }
}
void pop (int (&a)[max])
{
    x = checkEmpty(a);
    if (x == 1)
    {
        cout<<"\nCan't pop anymore, stack empty!\n";
    }
    else
    {
        cout<<"\nPoped element: "<<a[top]<<"\n\n";
        --top;
    }
}
void peek (int (&a)[max])
{
    x = checkEmpty(a);
    if (x == 1)
    {
        cout<<"\nCan't peek, stack empty!";
    }
    else
    {
        cout<<"\nTop element: "<<a[top]<<"\n";
    }
}
int main ()
{
    int a[max], c, m, n;
    while(1)
    {
        cout<<"Choose an option: ";
        cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Check\n5. Bye\n\nI choose: ";
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
                while(1)
                {
                    back:
                    cout<<"\nI want to check: ";
                    cout<<"\n1. If full\n2. If empty\nI choose: ";
                    cin>>m;
                    switch(m)
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
                            cout<<"\nWrong option chosen";
                            goto back;
                        }
                    }
                    break;
                }
            }
            case 5:
            {
                cout<<"\nGood bye";
                return 0;
            }
            default:
            {
                cout<<"\nChoose again\n";
            }
        }
    }
}