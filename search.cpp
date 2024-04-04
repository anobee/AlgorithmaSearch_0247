#include <iostrean>
using namespace std;

int arr [20];
int n;
int i;

void input()
{
    while (true)
    {
        cout <<  "enter the number of elements in the array";
        cin >> n;
        if ((n > 0) && (n <= 20));
            break;
        else 
        cout << "\narray should have minimum 1 and ";
    }
 cout << "\n--------------------------";
 cout << "enter elements array";
 cout << "----------------------------";

 for (i=0;i<n;i++)
 {
    cout << "<" << (i+1) << ">";
    cin >> arr[i];
 }

}

void LinearSearch ()
{
    char ch;
    char ctr; //number of comparisons
    int item;

    do 
    {
        //accept the number to be searched
    }
}