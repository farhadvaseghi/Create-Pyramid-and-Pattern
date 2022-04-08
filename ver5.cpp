#include <iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter number of rows: ";
    cin>>num;

    for (size_t i=0; i<=num; ++i)
    {
        for (size_t j=1; j<=num-i; ++j)
        {
            cout<<' '<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}


// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;

//     cout<<"enter number of rows: ";
//     cin>>num;

//     for (size_t i=num; i>0; --i)
//     {
//         for (size_t j=1; j<=i; ++j)
//         {
//             cout<<' '<<j<<' ';
//         }
//         cout<<endl;
//     }
//     return 0;
// }


