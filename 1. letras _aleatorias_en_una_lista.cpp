///1. programa para insertar letras aleatorias y ordenadas de <A - Z> en una lista
#include <iostream>
#include<list>
#include <iterator>
#include <numeric>
#include <cstdlib>
#include <algorithm>
#include <ctime>
using namespace std;
void mostrar(list<char>l)
{
  list<char>::iterator t=l.begin();
  while(t!=l.end())
    {
        cout<<*t<<" ==> ";
        t++;
    }
}
int main()
{
    int n;
    char d;
    cout<<"Ingrese el tamaño de la lista:\n";
    cin>>n;
    list<char>l;
    srand(time(NULL));
    for(char i=0;i<n;i++)
    {
        d=(65+rand()%(91-65));
        list<char>::iterator t=l.begin();
        while(t!=l.end())
        {
            if(d<=*t)
                {
                    l.insert(t,d);
                    break;
                }
                t++;
        }
            if(t == l.end())
            l.push_back(d);
     }
     l.unique();
     mostrar(l);
     return 0;
}
