#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> name_map;  //declaring the map
     name_map[1] = "Guy1";  //assigning values to map by first assigning the keys and after that - the values of the map(strings)
     name_map[2] = "Guy2";
     name_map[3] = "Guy3";
     name_map[4] = "Guy4";
     name_map[5] = "Guy5";

     cout << "Map size is equal to: " << name_map.size() << endl; //checking the size of the map

    for (std::map<int , std::string>::iterator it = name_map.begin();it !=name_map.end();it++ ) //creating an iterator that serves the purpose to iterate the whole map and after that display all the values
    {
        std::cout<< it->first << "=>" << it->second << std::endl; //it->first is a function to display the KEY of the element and it-> second is a function to display the element which belongs to the current key
    } // we use "->" instead of " . " because it is a pointer !

name_map.clear(); //this function is used to clear the map

     cout << "Map size is equal to: " << name_map.size() << endl; //we check again the size of the map

     name_map.insert(pair<int, string>(1,"Rozkata")); //this is another method to insert items into the map, using a "pair", where you again declare the type of you KEY(in this case a integer) and the type of your item(in this case a string) and you define them
     name_map.insert(pair<int, string>(2,"Mariqn"));
      for (std::map<int , std::string>::iterator it = name_map.begin();it !=name_map.end();it++ )
    {
        std::cout<< it->first << "=>" << it->second << std::endl;
    }

      map<int , string >::iterator it = name_map.find(2); // we create another iterator that server the purpose to search the map and find the element that has a key"2"
      cout << "Key found: " << it->second << endl; //we use this "cout" to display our key and display the element that is stored in it by using the above mentioned "it->second" function

name_map.erase(2); // we use this function to erase an element, by defining its key
cout << "An item was erased, now the map is as follows: " << endl;
  for (std::map<int , std::string>::iterator it = name_map.begin();it !=name_map.end();it++ )
    {
        std::cout<< it->first << "=>" << it->second << std::endl;
    }

    cout << "Is the map empty = " << name_map.empty() << endl; //this function checks whether the map is empty or not and returns the value 1(it stands for true) or 0(it stands for false)
    return 0;
}
