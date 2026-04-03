#include <bits/stdtr1c++.h>
using namespace std;
class Analyzer
{

    int n, *arr;

public:
    void accept()
    {

        cout << "Enter number of elements: ";
        cin >> n;

        arr = new int[n];
        cout << "Enter element in array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void analyze()
    {

        int max = arr[0], 
        min = arr[0];
        float sum = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] > max)
                max = arr[i];

            if (arr[i] < min)
                min = arr[i];

            sum += arr[i];
        }

        float avg = sum / n;

        cout << "Max num: " << max << endl;
        cout << "Min num: " << min << endl;
        cout << "Avg num: " << avg << endl;
    }
    ~Analyzer()
    {

        delete[] arr;
    }
};
int main()
{

    Analyzer a;
    a.accept();
    a.analyze();

    return 0;
}