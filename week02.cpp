#include <iostream>
#include <cmath>

using namespace std;

namespace ZRectangle
{
    int width = 0;
    int height = 0;
    int area = 0;
}

namespace IRectangle
{
    double width = 0;
    double height = 0;
    double area = 0;
}

int main()
{
    cin>>ZRectangle::width>>ZRectangle::height;

    ZRectangle::area = ZRectangle::width * ZRectangle::height;

    cout<<ZRectangle::area<<endl;

    cin>>IRectangle::width>>IRectangle::height;

    IRectangle::area = IRectangle::width * IRectangle::height;

    cout<<IRectangle::area<<endl;

    double a,b,c;
    double D;
    double x1,x2;
    cin>>a>>b>>c;
    D = pow(b,2) - 4 * a * c;
    //b^2
    if(D > 0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);

        cout<<"X1="<<x1<<endl;
        cout<<"X2="<<x2<<endl;
    }
    else if(D == 0)
    {

        x1 = (-b + sqrt(D)) / (2*a);
        cout<<"One solution: " << x1<<endl;
    }
    else
    {
        cout<<"Invalid D"<<endl;
    }

    int circleX,circleY,radius,pointX,pointY;
    bool isInCircle;

    cin>>circleX>>circleY>>radius>>pointX>>pointY;

    int distance = sqrt(pow((pointX - circleX),2) + pow((pointY - circleY),2));
    isInCircle = (distance <= radius);
    if(distance <= radius)
    {
        isInCircle = true;
    }
    else
    {
        isInCircle = false;
    }

    cout<<boolalpha<<isInCircle<<endl;

    int p,k;
    cin>>p>>k;
    if(p > k)
    {
        cout<<p;
    }
    else
    {
        if(p == k)
        {
            cout<<p<<k<<endl;
        }
        else
        {
            cout<<k;
        }
    }

    if(p > k)
    {
        cout<<p<<endl;
    }
    else if(p == k)
    {
        cout<<p<<" "<<k<<endl;
    }
    else
    {
        cout<<k<<endl;
    }


    int t;
    cin>>t;
    if(t % 2 == 0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }

    return 0;
}
