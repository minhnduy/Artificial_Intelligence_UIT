#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int *x = new int[n];
    int *y = new int[n];
    int *result = new int[m];

    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];


    for (int i = 0; i < m; i++)
    result[i] = 0;

    for (int i = 0; i < n; i++)
        result[y[i]] = result[y[i]] + x[i];


    int max = result[0];
    for (int i = 1; i < m; i++)
    {
        if (max < result[i])
            max = result[i];
    }


    delete x, y,result;
    cout <<max<< endl;
    system("pause");
    return 0;
}
