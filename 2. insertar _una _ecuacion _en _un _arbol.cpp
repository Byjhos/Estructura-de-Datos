///2. Programa para ingresar una ecuacion en un arbol y mostrar el recorrido in_orden
#include <iostream>
#include <set>
#include <iterator>

using namespace std;
void mostrar(set<char>l)
{
  set<char>::iterator t=l.begin();
  while(t!=l.end())
    {
        cout<<*t<<"_";
        t++;
    }
}
int main()
{
    string n;
    char ecua;
    cout<<"Ingrese la ecuacion:\nx = ";
    cin>>n;

    set<char>l;

    for(int i=0;i<n.size();i++)
    {
        char ecua=n[i];
        l.insert(ecua);
    }
     mostrar(l);
     return 0;
}
