#include <iostream>

using namespace std;

void increase(int& value)
{

    value++;
}

int main()
{
   int a = 5;
   cout<<&a<<endl;
   int* b = &a;
   cout<<b<<endl;
   //a++;
   cout<<*b<<endl;
   (*b)++;
   cout<<*b<<endl;

   int arr[] = {1,2,3,4,5};
   cout<<arr<<endl;
   cout<<&arr[0]<<endl;
   cout<<arr + 1<<endl;
   cout<<&arr[1]<<endl;
   cout<<*(arr + 1)<<endl;

}


