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


int main()
{
	srand((unsigned) time(NULL));
	GenerateKeys(ReadPostiveNumber("Plase Enter Key to Generate"));






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
