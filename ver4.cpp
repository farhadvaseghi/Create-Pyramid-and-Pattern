#include <iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter number of rows: ";
    cin>>num;

    for (size_t i=0; i<=num; ++i)
    {
        for (size_t j=num; j-i>0; --j)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}




