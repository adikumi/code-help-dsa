#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cout << "enter number of testcases :";
    cin >> testcases;
    float distance[10];
    float time[10];
    for (int i = 0; i < testcases; i++)
    {
        cout << "enter distance and time : ";
        cin >> distance[i] >> time[i];
    }
    float total_distance = 0;
    float total_time = 0;
    for (int i = 0; i < testcases; i++)
    {
        total_distance += distance[i];
        total_time += time[i];
    }
    float average_speed = total_distance / total_time;
    cout << "Average Speed = " << average_speed << endl;
    return 0;
}