//This is just a exercise on working with hash tables using the stl provided class
#include <iostream>
#include <unordered_map>
#include <iterator>

int main()
{
    //Implementing a unordered map which will have a integer key and the mapped value will be of integer type
    std::unordered_map<int, int> Mymap;

    //inserting values using [] operator
    Mymap[1] = 2;
    Mymap[2] = 3;
    Mymap[3] = 4;

    //declare a pointer to traverse through our hash table
    std::unordered_map<int, int>::iterator i;

    for(std::unordered_map<int, int>::iterator i = Mymap.begin(); i != Mymap.end(); i++)
    {
        std::cout << "Key ->" << i -> first << " Value ->" << i -> second << std::endl;

    }

    //inserting values using the insert function
    Mymap.insert(std::make_pair(4, 5));
    Mymap.insert(std::make_pair(5, 8));

    //lets try to search for a given key

    int key = 2;

    if(Mymap.find(key) == Mymap.end())
    {
        std::cout << "The key wasn't found" << std::endl;
    }
    else
    {
        std::cout << "Found your key: " << key << std::endl;
    }

    //now lets print how the final version of our unordered map looks like

    for(std::unordered_map<int, int>::iterator i = Mymap.begin(); i != Mymap.end(); i++)
    {
        std::cout << "Key ->" << i -> first << " Value ->" << i -> second << std::endl;

    }

    return 0;
}
