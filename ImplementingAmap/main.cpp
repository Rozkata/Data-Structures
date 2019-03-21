#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    std::map<int, int> Mymap;

    Mymap.insert(make_pair(1,3));
    Mymap[4] = 6;
    std::map<int, int>::iterator iterate = Mymap.begin();
    while(iterate != Mymap.end())
    {
        cout << "key "<<iterate -> first<< " value " << iterate -> second << endl;
        iterate++;
    }


cout << "Is empty = " << Mymap.empty() << endl;
    return 0;
}
