#include<iostream>
#include<list>

int main() {
	std::list<int>myList {3, 4, 5};

	for (const auto& i : myList)
		std::cout << i << " "; 
	std::cout << "\n"; 

	myList.push_front(2); 
	myList.push_back(6);

	for (const auto& i : myList)
		std::cout << i << " "; 
	std::cout << "\n"; 

	std::cout << myList.front() << std::endl;  
	std::cout << myList.back() << std::endl;

	for (const auto& i : myList)
		std::cout << i << " "; 
	std::cout << "\n"; 

	myList.pop_front(); 
	myList.pop_back();
	
	// To insert on second position 
	std::list<int>::iterator liIt; 
	liIt = myList.begin(); 
	liIt++;
	liIt++; 
	myList.insert(liIt, 77); 

	for (const auto& i : myList)
		std::cout << i << " "; 
	std::cout << "\n"; 

	return 0; 
}