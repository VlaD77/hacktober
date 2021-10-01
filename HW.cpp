#include <iostream>
using namespace std;
int main() 
{
    cout << "Hello, cruel World!";  		// output_1
	cout << "\nHello Vlad77"; 				// output_2
	
	cout << "\nHello VaDiK131313";  		// output_3
	cout << "\nHello new VaDiK1313";  
	int a; 									// new int variable
	cout << "\nEnter the number: "; 		// input_1
	cin >> a; 								// input value to int variable
	cout << "\nYour number is "<< a;		// output_4
	cout << "\nNext number is "<< (a+1);	// output_5
	
	cout << "\nNext sorts ";
	const int length = 100;
	int array[length] = { 30, 50, 20, 10, 40 };
 
	
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		// in variable smallestIndex saving index of lowest value taht we find.
		// starting by lovest valueof this iteration
		int smallestIndex = startIndex;
 
		// try to find lowest value of list values;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// Если мы нашли элемент, который меньше нашего наименьшего элемента,
			if (array[currentIndex] < array[smallestIndex])
				// то запоминаем его
				smallestIndex = currentIndex;
		}
 
		// smallestIndex updated. 
        // need swap a values
		std::swap(array[startIndex], array[smallestIndex]);
	}
 
	// finish - showing result
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
	
    return 0;
}
