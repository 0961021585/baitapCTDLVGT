#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cout <<"Task 1: Input: \n";
    string s;
    getline(cin, s);
    fflush(stdin);
    reverse(s.begin(), s.end());
    cout<<s<<"\n\nTask 3: Input\n";
    int a, b;
    cin>>a>>b;
    while (a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    cout<<a<<"\n\nTask 4: Input:\n";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout <<arr[i]<<" ";
    cout<<"\n\nTask 5: Input:\n";
    int x[5];
    for (int i=0; i<5; i++) cin>>x[i];
    int max_ = *max_element(x, x+5);
    int min_ = *min_element(x, x+5);
    cout<<max_ + min_<<endl;
    system("pause");
    return 0;
}