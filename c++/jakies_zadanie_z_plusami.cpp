int main()
{
    double i=5;
    double *wsk ;
    wsk=&i;
    cout << i<<endl;
    cout << ++(*wsk)<<endl;
    cout << wsk<<endl;
    cout << ++wsk<<endl; //wartość wskaźnika rośnie o rozmiar typu wskaźnika
    cout<<sizeof(double);

    return 0;
}
