// problemsoving2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem1
void printTableHeader() {
	cout << " \n\n\t\t\t Multiuplation Table from 1 to 10 \n\n \t";
	
	for (int i = 1; i <=10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n__________________________________________________________________________________________________\n";
}
string ColumnSperator(int i) {
	if (i < 10)
		return"  |";
	else
		return " |";
}

void PrintMultiplicationTable() {

	printTableHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSperator(i) << "\t";
		for (int j = 1; j <=10; j++)
		{
			cout << i * j <<"\t";
		}
		cout << "\n";
	}
}
// problem 2

enum enPrimeNotPrime { prime = 1, notPrime = 2 };
float ReadPostiveNumber(string message) {
	float number = 0;
	do {
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}
enPrimeNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::notPrime;
	}
	return enPrimeNotPrime::prime;
}
void PrintPrimeNumber(int number) {
	cout << "\n Prime number from 1 to " << number<<"\n are: \n";

	for (int i = 1; i <= number; i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::prime) {
			cout << i << endl;
		}
	}
}
//problem 3
bool IsPerfictNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Number == Sum;
}
void PrintResutl(int Number) {
	if (IsPerfictNumber(Number))
		cout << "Pirfict Number";
	else
		cout << "Mot Pirfict Number";
}
//problem 4
//write a program to print all perfect number from 1 to N
// input 500 result 6 - 28 - 496
void PrintPerfectNumberFrom1toN(int Number) {
	for (int i = 1; i < Number; i++)
	{
		if (IsPerfictNumber(i))
			cout << i << endl;

	}
	}

void PrintDigits(int Number) {
	int Remainder = 0;
	while (Number>0)
	{

		Remainder = Number % 10; 
		Number = Number / 10;
		cout << Remainder<<endl;
	}
}


//problem 6 
// write a program to read  a number and print the sum of its  digits
//input 1234 result  sum of digits=10

int SumOfDigitNumber(int Number) {
	int Remainder = 0;
	int Sum = 0;
	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}
	return Sum;
}
//problem 7
// write a program to read  a number and print it reversed
//input 1234 result  Reverse is :4321
int ReversedNumber(int Number) {
	int Remainder = 0, Number2=0; 
	while (Number>0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
 }
//problem 8
//Digit Frequency

short CountDigitFrequency(int Number,int Ferq) {
	int Remainder = 0;
	int FerqCount = 0;
	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;
		if (Remainder == Ferq)
			FerqCount++;
	}
	return FerqCount;
}

void PrintAllDigitsFrequency(int Number) {
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(Number,i);
		if (DigitFrequency > 0) {
			cout << "Digit" << i << "Frequincy is" << DigitFrequency << "Times\n";
		}
	}
}
//problem 11 palindrome Number

bool isPalimdromeNumber(int Number) {
	return Number == ReversedNumber(Number);
}
//problem 12 inverted pattern
void PrintInvertedPattern(int number) {
	for (int i = number; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << i;
		}
		cout << endl;

	}
}
//problem 13 Number pattern
void PrintNumberPattern(int number) {
	for (int i = 1; i <= number; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << i;
		}
		cout << endl;

	}
}
//problem 14 
void PrintInvertedLtterPattern(int number) {
	for (int i = 65 + number -1 ; i >= 65; i--)
	{
		for (int j = 1; j <= number - (65 + number -1  - i) ; j++)
		{
			cout << char(i);
		}
		cout << endl;

	}
}

//problem 15  
void PrintLtterPattern(int number) {
	for (int i = 65; i <= 65 + number - 1; i++)
	{
		for (int j = 1; j <= i - 65 +1	; j++)
		{
			cout << char(i);
		}
		cout << endl;

	}
}
// problem 16
void PrintWordsAAAtoZZZ() {
	string  word = "";
	for (int i = 65; i <= 90 ; i++)
	{
		for (int j = 65; j <= 90 ; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				cout << word<<endl;
				word = "";
			}
		}
		cout << "__________________________________________________________\n";

	}
}
// problem 17

string ReadPassword() {
	string password;
	cout << "Please Enter a 3-letter Password (all Capitall)\n";
	cin >> password;
	return password;

}

bool GussPassord(string orginalPassword) {
	string  word = "";
	int Trail = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				cout <<"Trail: ["<< ++Trail <<"] " << word << endl;
				if (word == orginalPassword)
				{
					cout << "Password is " << word<<"\n  Found After "<< Trail<<"(s)";
					return true;
				}
				word = "";
			}
		}

	}

	return false;
}
// problem 18


string ReadText() {
	string Text;
	cout << "Please Enter Text\n";
	getline(cin, Text);

	return Text;

}
string EncryptText(string Text,int EncryptionKey) {
	
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char(((int)Text[i] + EncryptionKey));
	}
	return Text;
}
string DecryptText(string Text, int EncryptionKey) {

	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char(((int)Text[i] - EncryptionKey));
	}
	return Text;
}

// problem 19
int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
enum enCharType{SmallLitter=1,CapitalLetter=2,SpecialCharacter=3,Digit=4};
//problem 20
char GetRandomCharacter(enCharType CharType) {

	switch (CharType)
	{
	case enCharType::SmallLitter:
		return char(RandomNumber(97, 122));
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
	default:
		break;
	}


}

//problem 21 program to generateKey

string GenrateWord(enCharType CharType, short Lenght) {
	string word;
	for (int i = 0; i < Lenght; i++)
	{
		word += GetRandomCharacter(CapitalLetter);
	}
	return word;
}

string GenerateKey() {
	string key="";
	 key = GenrateWord(CapitalLetter,4) + "-";
	 key += GenrateWord(CapitalLetter, 4) + "-";
	 key += GenrateWord(CapitalLetter, 4) + "-";
	 key += GenrateWord(CapitalLetter, 4) ;

	 return key;
}

void GenerateKeys(int NumberOfKey) {
	for (int i = 1; i <= NumberOfKey; i++)
	{
		cout << "Key[" << i <<  "]: " << GenerateKey() << endl;
	}
}

//problem22

void ReadArray(int arr[100], int& arrLenght) {
	cout << "\nEnter Number of Element\n";
	cin >> arrLenght;
	cout << "\nEnter array elements\n";
	for (int i = 0; i < arrLenght; i++)
	{
		cout << "Enter Element of [" << i + 1 << "]:";
		cin >> arr[i];
	}
	cout << endl;
}
void PrintArray(int arr[100], int arrLenght) {

	for (int i = 0; i < arrLenght; i++)
		cout <<arr[i]<<" ";

	
	cout << endl;
}
int TimesRepeated(int Number, int arr[100], int arrLenght) {
	int count = 0;
	for (int i = 0; i < arrLenght; i++)
	{
		if (arr[i] == Number)
			count++;
	}
	return  count ;
	
}
//problem 23 
void FillArrayWithRandomNumber(int arr[100],int &arrLenght) {
	cout << "\n Enter The Number Of Elements:\n";
	cin >> arrLenght;
	for (int i = 0; i < arrLenght; i++)
	{
	arr[i]= RandomNumber(1,100);

	}
	
}
//problem 24
int ReadNumber() {
	int Number ;
	cout << "Please Enter a Number " << endl;
	cin >> Number;
	return Number;
}
int MaxNumberInArray(int arr[100],int Length) {
	int max = 0;
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] >max)
			max = arr[i];
	}
	return max;
}
//problem 25
int MinNumberInArray(int arr[100], int Length) {
	int min = arr[0];
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
//problem 26
int sumArray(int arr[100], int Lenght) {
	int sum = 0;
	for (int i = 0; i < Lenght; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//problem 27
float AvargeArray(int arr[100], int Lenght) {
	return (float)sumArray(arr, Lenght) / Lenght;
}
//problem 28
void copyArray(int arraySource[100], int arrayDistantion[100], int arrLenght) {
	for (int i = 0; i < arrLenght; i++)
		arrayDistantion[i] = arraySource[i];
}
//problem 29
void copyPrimeNumberToArray(int arraySource[100], int arrayDistantion[100], int arrLenght,int& arr2Lenght) {
	int counter = 0;
	for (int i = 0; i < arrLenght; i++) {
		if (CheckPrime(arraySource[i]) == enPrimeNotPrime::prime) {
			arrayDistantion[counter] = arraySource[i];
			counter++;
		}
	}
	arr2Lenght = --counter;
}
//problem 30
void sumOfTwoArray(int arr1[100], int arr2[100],int arrSum[100], int arrLenght) {
	for (int i = 0; i < arrLenght; i++) {
		arrSum[i] = arr1[i] + arr2[i];
	}
}
//problem 31

void Swap(int& A, int& B) {
	int temp;
	temp = A;
	A = B;
	B = temp;

}
void fillArraywith1roN(int arr[100], int  lenght) {
	

	for (int i = 0; i < lenght; i++)
	{
		arr[i] = i + 1;
	}
}
void ShufflArray(int arr[100], int lenght) {
	for (int i = 0; i < lenght; i++)
	{

		Swap(arr[RandomNumber(1, lenght) - 1], arr[RandomNumber(1, lenght) - 1]);
	}
}
//problem 32
void copyArrayInReverseOrder(int arraySource[100], int arrayDistantion[100], int arrLenght) {
	for (int i = 0; i < arrLenght; i++)
		arrayDistantion[i] = arraySource[arrLenght-1-i];
}
// problem 33
void fillArrayWithKey(string arr[100], int& arrLenght) {
	cout << "\n Enter The Number Of Elements:\n";
	cin >> arrLenght;
	for (int i = 0; i < arrLenght; i++)
	{
		arr[i] = GenerateKey();
	}
}

void PrintStringArray(string arr[100], int arrLenght) {
	cout << "\nArray Elemnets \n";

	for (int i = 0; i < arrLenght; i++)
		cout<<"Array["<<i+1<<"]: "<< arr[i] <<endl;


	
}

//problem 34
short FindNumberPostionInArray(int Number, int arr[100],int arrLenght) {
	
	for (int i = 0; i < arrLenght; i++)
	{
		if (arr[i] == Number) {
			return i;
		}
	}
	return -1;
}
//problem 35
bool IsNumberInArray(int Number, int arr[100], int arrLenght) {
	return  FindNumberPostionInArray( Number,  arr,  arrLenght)!=-1?true:false;
}
// probelm 36
void AddArrayElement(int Number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = Number;
}

void InputUserNumberInArray(int arr[100], int& arrlenght) {
	bool addMore = true;
	do
	{
		AddArrayElement(ReadNumber(), arr, arrlenght);
		cout << "Do you want to add more Number ?\n Yes[1] No[0]\n";
		cin >> addMore;

	} while (addMore);
	
}

//problem 37

void CopyArrayWithAddElement(int arrSource[100],int arrDestination[100], int arrlenght,int& arrDestinationLenght) {
	for (int i = 0; i < arrlenght; i++)
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLenght);
	
}
// problem 38
void CopyOddNumbers(int arrSource[100], int arrDestination[100],int arrlenght, int& arrDestinationLenght) {
	for (int i = 0; i < arrlenght; i++) {
		if(arrSource[i] % 2 !=0 )
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLenght);
	}

}
void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrlenght, int& arrDestinationLenght) {
	for (int i = 0; i < arrlenght; i++) {
		if( CheckPrime(arrSource[i])==prime)
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLenght);
	}

}
int main()
{
	srand((unsigned) time(NULL));
	int arr[100], arrCopy[100]; int lenght;int Lenght2 = 0;

	FillArrayWithRandomNumber(arr, lenght);
	PrintArray(arr, lenght);
	CopyPrimeNumbers(arr, arrCopy, lenght, Lenght2);
	PrintArray(arrCopy, Lenght2);






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
