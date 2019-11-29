#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /*
    int arr[] = {1,2,3,4,5};
    int a[3][4] ={{1,2,3,5},{4,5,6,5},{7,8,9,5}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<a[1][2]<<endl;


    int arr[10000];
    int n;
    cout<<"Enter input:";
    cin>>n;

    if (n<0 || n>10000)
    {
        cout<<"Wrong input!"<<endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    int minGreater = arr[0];
    int maxLesser = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }


    for (int i = 0; i < n; i++)
    {
        if(arr[i] < minGreater && arr[i] != min)
        {
            minGreater = arr[i];
        }

        if(arr[i] > maxLesser && arr[i] != max)
        {
            maxLesser = arr[i];
        }
    }


    cout << min << " " << max << endl;
    cout << minGreater << " " << maxLesser << endl;


    return 0;

*/
    /*int arr[10000];
    int n;
    cout<<"Enter input:";
    cin>>n;
    int check_number = 0;
    int count = 0;


    if (n<0 || n>10000)
    {
        cout<<"Wrong input!"<<endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin >> check_number;
    for (int index = 0; index < n; index++)
    {
        if(arr[index] == check_number)
        {
            count++;
            cout << "We meet this number at this index: " <<index<< endl;
        }

    }
   cout << count;


    double arr[10000];
    int n;
    cout<<"Enter input:";
    cin>>n;

    if (n<0 || n>10000)
    {
        cout<<"Wrong input!"<<endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    double sum =0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    double average = sum / n;

    double closestToAverage = abs(average-arr[0]);

    int closestAverageIndex = 0;
    for(int i = 0; i < n; i++)
    {
        if(closesToAverage < abs(average-arr[i]))
        {
            closestToAverage = abs(average-arr[i]);
            closestAverageIndex = i;
        }
    }

    double arrBiggerThanAVG[10000];
    double arrSmallerThanAVG[10000];

    int firstIndex = 0;
    int secondIndex = 0;

    for(int i=0; i<n ; i++)
    {
        if(arr[i] < average)
        {
            arrSmallerThanAVG[secondIndex++] = arr[i];
        }
        else
        {
            arrBiggerThanAVG[firstIndex++] = arr[i];
        }
    }
}
*/
    int arr[10000];
    int n;
    cout<<"Enter input:";
    cin>>n;
    bool IsMirrored = true;



    if (n<0 || n>10000)
    {
        cout<<"Wrong input!"<<endl;
        return 0;
    }

    for(int i = 0; i < n/2; i++)
    {
        cin>>arr[i];
    }

    for(int index =0; index < n; index++)
    {
        if(arr[index] != arr[n-1-index])
        {
            IsMirrored = false;
            break;
        }
    }
    if(IsMirrored)
        {
        cout << "Array is palindrome, kinda..";
    }else
    {
        cout << "Just no";
    }
    }

