#include <iostream>


void tripleIt(float &t_num1, float &t_num2);
void makeNegative(int& t_num);
int findLowest(int t_array[], const int t_ARRAY_SIZE);
float calAverage(double t_array[]);
void reverseArray(double t_array[]);

const int DUB_ARRAY_SIZE = 5;

int main()
{

	float num1 = 0.0f;
	float num2 = 0.0f;
	///////////////////
	int positiveNum = 0;
	///////////////////
	const int ARRAY_SIZE = 8;
	int numArray[ARRAY_SIZE]{6,89,8,4,66,23,55,9};
	int lowest = 0;
	///////////////////
	double dubArray[DUB_ARRAY_SIZE]{55.5,66.6,45.7,88.8,99.9};
	float average = 0.0f;
	
	//function 1
	std::cout << "enter number 1: ";
	std::cin >> num1;
	std::cout << "enter number 2: ";
	std::cin >> num2;
	tripleIt(num1, num2);
	std::cout << num1 << " " << num2 << std::endl;

	//function 2
	std::cout << "Enter a positive number: ";
	std::cin >> positiveNum;
	std::cout << "The numberbefore the function is: " << positiveNum << std::endl; 
	makeNegative(positiveNum);
	std::cout << "The number after the function is: " << positiveNum << std::endl;

	//function 3
	lowest = findLowest(numArray, ARRAY_SIZE);
	std::cout << "The smallest number in the int array is: " << lowest << std::endl;

	//function 4
	average = calAverage(dubArray);
	std::cout << "The average of the double array is: " << average << std::endl;

	//function 5
	reverseArray(dubArray);
	for (int i = 0; i < DUB_ARRAY_SIZE; i++)
	{
		std::cout << "\n" << dubArray[i];
	}

	return 0;
}

//1 triples two floats called by address
void tripleIt(float & t_num1,  float & t_num2)
{
	t_num1 *= 3.0f;
	t_num2 *= 3.0f;
}

//2 makes a integer called by address negative 
void makeNegative(int& t_num)
{
	if (t_num > 0)
	{
		t_num *= -1;
	}

}

//3 find the lowest number in an array
int findLowest(int t_array[], const int t_ARRAY_SIZE)
{
	int lowest = 0;
		for (int i = 0; i < t_ARRAY_SIZE; i++)
		{
			if (i == 0)
			{
				lowest = t_array[i];
			}
			if (t_array[i] < lowest)
			{
				lowest = t_array[i];
			}
		}
	return lowest;
}

//4
float calAverage(double t_array[])
{
	float average = 0.0f;
	float sum = 0.0f;
	for (int i = 0; i < DUB_ARRAY_SIZE; i++)
	{
		sum += t_array[i];
	}
	average = sum / DUB_ARRAY_SIZE;
	return average;
}

//5
void reverseArray(double t_array[])
{

	double localArray[DUB_ARRAY_SIZE];// temporary array 
	int arrayPos = DUB_ARRAY_SIZE -1;

	for (int i = 0; i < DUB_ARRAY_SIZE; i--)
	{
		localArray[i] = t_array[i];
	}
	for (int i = 0; i < DUB_ARRAY_SIZE; i++)
	{
		t_array[arrayPos] = localArray[i];	
		arrayPos--;
	}

}

