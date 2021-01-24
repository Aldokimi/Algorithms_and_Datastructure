#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
    cout<<endl;
    for(i = 0; i<10; i++) {
        for(j = i+1; j<10; j++)
        {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<"Sorted Element List ...\n";
    for(i = 0; i<10; i++) {
        cout <<a[i]<<"\t";
    }
    /*
        Complexity of the algorithm (worst case). 
            Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
            Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
            Auxiliary Space: O(1)

    */
    return 0;
}