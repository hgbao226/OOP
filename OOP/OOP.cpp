#include "Header.h"

/*int main()
{
    srand(unsigned(time(NULL)));
    int A[50000];
    setArrayAuto(A, 50000);
    CountingSort(A, 50000);
    system("pause");
    return 0;
}*/
int main()
{
    srand(unsigned(time(NULL)));
    int A[50000];
    setArrayAuto(A, 5);
    RadixSort(A, 5);
    system("pause");
    return 0;
}
