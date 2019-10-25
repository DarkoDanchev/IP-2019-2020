#include <iostream>

using namespace std;


int main()
{
    /*int n = 10;
    int n = 10;
    for(int i = 0; i < n; i++)
    {
        cout<<i<<endl;
    }

    bool greaterThan = false;
    int i = 0;
    while(greaterThan == false)
    {
        cout << i <<endl;
        i++;
        if(i >= n)
        {
            greaterThan = true;
        }
    }
    int j = 0;
    do
    {
       cout<< j <<endl;
       j++;
    } while(j < n);
    */
    /*for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        cout<< i << endl;
    }
    int i = 0;
    while(true)
    {
        cout << i <<endl;
        i++;
        if(i >= n)
        {
            break;
        }
    }

    do
    {
        cin>>n;
    }while(n);
    */

    /*
    //Sumata na chislata do n
    int n;
    int sum = 0;
    cout<<"n = ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        sum += i;
    }
    cout<< sum;
    */

    /*
    //Sumata na chetnite chisla do n
    int n;
    int sum = 0;
    cout<<"n = ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        if(i%2==0) sum += i;
    }
    cout<< sum;
    */

    /*
    int start, end, sum = 0;
    cin>> start;
    cin>> end;
    for (int i = start ; i <=end ; i++) sum += i;
    cout<< sum;
    */

    /*int start, end, divisor;
    cin>> start>>end>>divisor;
    if(start>end || divisor==0){
        cout<<"Nevalidni stoinosti. Opitai pak ";
        return main();
    }
    for(int i=start;i<=end;i++){
        if(i%divisor == 0){
            cout<<i<<endl;
        }
    }

*/
/*
    int n, a;
    int sum = 0;
    cout<<"n = ";
    cin>>n;
    while(n>0)
    {
        a = n % 10;
        sum += a;
        n /= 10;
    }
    cout<< sum;
*/
/*int newNumber=0, number, reminder;
cin>>number;
while(number!=0)
{
    reminder=number%10;
    newNumber=newNumber*10+reminder;
    number/=10;
}
cout<<newNumber;
    return 0;
}
*/
/* int n;
cin n;
while(n != 0)
{
    char last_digit = (n % 10) + '0';
    n /= 10;
    cout<< last_digit;
}
*/



/*int newNumber=0, number, reminder, number2;
cin>>number;
number2=number;
while(number!=0)
{
    reminder=number%10;
    newNumber=newNumber*10+reminder;
    number/=10;

}
if (number2=newNumber)
{
    cout<<"Palindrom";

}
else
{
    cout<<"Ne e palindrom";
}
}
*/
int n;
cin >> n;
while(n != 0)
{
    if(n%10 == 5)
    {
        cout << "BINGO! Found five!";
        break;
    }
    n /= 10;
}
}

