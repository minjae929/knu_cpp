#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retsize) 
{
    int j;
    T* Array = new T[sizeSrc];
    for (int i = 0; i < sizeSrc; i++) 
    {
        for (j = 0; j < sizeMinus; j++) 
        {
            if (src[i] == minus[j]) 
            {
                --j;
                break;
            }
        }
        if (j == sizeMinus) 
        { 
            Array[retsize] = src[i]; 
            retsize++;  
        }
    }
    return Array;
}

int main() 
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[] = { 2, 4, 6, 8, 10 };
    int retSize = 0;
    int* Arr = remove(a, 10, b, 5, retSize);

    for (int i = 0; i < retSize; ++i)
        cout << Arr[i] << ' ';
    cout << endl;

    delete[] Arr;
}
