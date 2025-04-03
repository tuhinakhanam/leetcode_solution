#include<iostream>
#include<climits>

using namespace std;

void findMax(int arr[], int i, int n, int max){

}
int main()
{
    int arr[5] = {30, 20, 10, 40, 50};
    int n = 5;
    int i = 0;
    int max = INT_MIN;

    findMax(arr, n, i, max);
    cout << "maximum number is" << max << endl;
    return 0;
}