#include <iostream>

using namespace std;

int main()
{
    /*int a = 5;
    if(a > 0)
    {
        cout<<"Greater"<<endl;
    }
    else if(a == 0)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Lower"<<endl;
    }

    if(a > 0)
    {
        cout<<"Greater"<<endl;
    }
    else
    {
        if(a == 0)
        {
            cout<<"Equal"<<endl;
        }
        else
        {
            cout<<"Lower"<<endl;
        }
    }
    */
    //int input;
    //cout<<"Choose your input: ";
    //cin>>input;
    /*if(input == 0)
    {
        cout<<"First"<<endl;
    }
    else if(input == 1)
    {
        cout<<"Second"<<endl;
    }
    else if(input == 2)
    {
        cout<<"Third"<<endl;
    }
    else if(input == 3)
    {
        cout<<"Fourth"<<endl;
    }
    else if(input == 4)
    {
        cout<<"Fifth"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }*/

    /*switch(input)
    {
        case 0:
            cout<<"Input0"<<endl;
            break;
        case 1:
            cout<<"Input1"<<endl;
            break;
        case 2:
            cout<<"Input2"<<endl;
            break;
        case 3:
            cout<<"Input3"<<endl;
            break;
        case 4:
            cout<<"Input4"<<endl;
            break;
        default:
            cout<<"Wrong Input"<<endl;
            break;
    }*/

    int customerType = -1; //[0 - Student, 1 - Kid,2 - Elder,3 - Regular,4 - Sorry Pi4]

    cin>>customerType;

    double price;

    cin>>price;

    switch(customerType)
    {
    case 0:
        price -= price * 0.1;
        break;
    case 1:
        price /= 2;
        break;
    case 2:
        price -= price * 0.05;
        break;
    case 3:
        price -= price * 0.2;
        break;
    default:
        cout<<"Sori pi4"<<endl;
    }

    cout<<"Your price is: "<<price<<endl;

    /*int a = 5;
    int b = 2;

    double c = 5.3;

    int d = c;

    int e = (int)c;

    b += a;*/

    int a = 5;

    //int b = a++;
    //int b = a;
    //a = a + 1;
    //int c = ++a;

    //cout<<c<<endl;

    //int d = (a++) + 1;

    //int e = (++a)*(a++);
    int p = (a++)*(++a);


    cout<<p<<endl;

    return 0;
}
