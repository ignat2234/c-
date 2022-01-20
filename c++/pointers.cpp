
#include <iostream>
using namespace std;
int main()
{
    int zmienna1 =1 ;
    const int *wsk; // taka deklaracja wskaznika uniemozliwia zmiane wskazywanej wartosci
    wsk = &zmienna1;
    //(*wsk)++;
    wsk =&zmienna2;
    cout<<*wsk;
    return 0;
}