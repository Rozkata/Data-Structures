#include <iostream>
#include <deque>
#include <iterator>

int main()
{
    //declaring the deque
    std::deque<int> Mydeq;
    //declaring a iterator that will iterate through our deque
    std::deque<int>:: iterator i;

    std::cout << "Elements 1 and 3 are pushed in the back and the other ones are pushed in the front" << std::endl;
    //inserting our first element at the back
    Mydeq.push_back(1);
    //Inserting the second element in the front of our deque
    Mydeq.push_front(2);
    Mydeq.push_back(3);
    Mydeq.push_front(4);
    Mydeq.push_front(5);

    //creating a for loop to iterate through our whole deque
    for(std::deque<int>::iterator i = Mydeq.begin(); i != Mydeq.end(); i++)
    {
        std::cout << *i << std::endl;
    }

    //deleting an element from the front
    std::cout << "How the deque looks after popping an element from the front " << std::endl;
    Mydeq.pop_front();
    for(std::deque<int>::iterator i = Mydeq.begin(); i != Mydeq.end(); i++)
    {
        std::cout << *i << std::endl;
    }

    std::cout << "How the deque looks after popping two elements from the back" << std::endl;
    Mydeq.pop_back();
    Mydeq.pop_back();

    for(std::deque<int>::iterator i = Mydeq.begin(); i != Mydeq.end(); i++)
    {
        std::cout << *i << std::endl;
    }



    return 0;
}
