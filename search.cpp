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
        cout << "\nEnter the element you want to search :";
        cin >> item;

        ctr = 0;
        i = 0;
        while (i<n)
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << "found at position ";
                break ;
            }
            i++; //
        }

        if (i==n)
            cout << "\n" << item << "not found in the array\n";
            cout << "\nNumber of comparisons :" << ctr << endl;

            cout << "\ncontinue search (y/n) :";
            cin >> ch;
    } while ((ch == 'y') || (ch == 'n'));
}

void display ()
{
    cout << "array elements are : ";
    for (i=0;i<n;i++)
     cout << arr [i] << " ";
     cout << endl;

}

int main ()
{
    input ();
    LinearSearch();
    display ():
}
