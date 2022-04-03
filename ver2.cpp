#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number of rows: ";
    cin>>num;
    num = num+1;
    for (size_t i=1; i<=num; i++)
    {
        for (size_t j=1; j<i; j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
