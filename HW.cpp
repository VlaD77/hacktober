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
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };
 
	// Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому времени, когда мы до него доберемся)
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
		// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
		int smallestIndex = startIndex;
 
		// Затем ищем элемент поменьше в остальной части массива
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// Если мы нашли элемент, который меньше нашего наименьшего элемента,
			if (array[currentIndex] < array[smallestIndex])
				// то запоминаем его
				smallestIndex = currentIndex;
		}
 
		// smallestIndex теперь наименьший элемент. 
        // Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
		std::swap(array[startIndex], array[smallestIndex]);
	}
 
	// Теперь, когда весь массив отсортирован - выводим его на экран
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
	
    return 0;
}
