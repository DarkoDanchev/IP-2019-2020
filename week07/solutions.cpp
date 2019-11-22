#include <iostream>
using namespace std;

int abs(int num);
int pow(int num, int n);
double min(double num, double num2);
double max(double num, double num2);
double minOf3(double num1,double num2, double num3);
double maxOf3(double num1,double num2, double num3);
bool isAlpha(char c);
bool isDigit(char c);
bool isPrime(int num);
bool areIntertwined(int num1, int num2);
void printMatrix(int arr[][100],int row,int col);
void taskThree(int arr[][100],int row, int col);

int main()
{
    int n;
    // cin>>n;
    // n = pow(n,3);
    // cout<<abs(n)<<endl;
    // cout<<n<<endl;
    // cout<<min(2.2,3.5)<<endl;
    // cout<<max(5.5,3.2)<<endl;
    // cout<<minOf3(12332,23,555)<<endl;
    // cout<<maxOf3(12332,23,555)<<endl;
    // cout<<isAlpha('d')<<endl;
    // cout<<isAlpha(']')<<endl;
    // cout << isDigit('4')<<endl;
    // cout << isDigit('s')<<endl;
    // cout<<isPrime(7);
    // cout<<isPrime(6);
    // cout << areIntertwined(3,5);
    // cout << areIntertwined(5,3);
    // int matrix[100][100];
    // taskThree(matrix,3,3);
}

int pow(int num, int n)
{
    int result = 1;
    for(int i=0; i<n; i++)
    {
        result *=num;
    }
    return result;
}

int abs(int num)
{
    if(num < 0)
    {
        num = -num;
    }
    return num;
}
double min(double num, double num2)
{
    if(num <= num2) return num;

    //else return num2;
    return num2;
}
double max(double num, double num2)
{
        if(num >= num2) return num;

        //else return num2;
        return num2;
}
double minOf3(double num1,double num2, double num3)
{
    if (min(num1, num2) <= num3)
        return min(num1, num2);
    return num3;
}
double maxOf3(double num1,double num2, double num3)
{
    if (max(num1, num2) >= num3)
        return max(num1,num2);
    return num3;
}
bool isAlpha(char c)
{
    return (c >= 'A' && c <= 'Z') || ((c >= 'a' && c <= 'z'));
}
bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}
bool isPrime(int num)
{
    for(int i = 2; i <= num/2 ; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool areIntertwined(int num1, int num2)
{
    return isPrime(num1) && isPrime(num2) && (num1+2 == num2);
}
void printMatrix(int arr[][100],int row,int col)
{
    for(int i = 0; i <row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void taskThree(int arr[][100],int row, int col)
{
    for(int i = 0; i <row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i==j) arr[i][j] = i;
            else if( i > j) arr[i][j] = j*i;
            else arr[i][j] = j-i;
        }
    }
    printMatrix(arr,row,col);
}
