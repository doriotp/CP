#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[100001];
        int index = -1, count = 0, temp = -1;
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                index = i;
            }
        }

        for (int i = 0; i <=index; i++)
        {
            if (m[arr[i]] == 0)
            {
                count++;
            }
            m[arr[i]]++;
        }

        for (int i = index + 1; i < n; i++)
        {
            if (m.find(arr[i]) != m.end())
            {
                temp = i;
            }
        }
        for (int i = index + 1; i <temp; i++)
        {
            if (m.find(arr[i]) == m.end())
            {
                count++;
            }
            m[arr[i]]++;
        }

        cout << count << endl;
    }
}