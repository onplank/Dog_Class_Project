// Oscar Navarrete
// Dog Class Project
// 01/10/2024
#include <iostream>
#include <string>

using namespace std;

// Dog class definition
class Dog
{
private:
	string name;
	int age;
	string breed;
public:
	void setname(string dogName)
	{
		name = dogName;
	}

	void setage(int dogAge)
	{
		age = dogAge;
	}

	void setbreed(string dogBreed)
	{
		breed = dogBreed;
	}

	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	string getbreed()
	{
		return breed;
	}
	void bark()
	{
		cout << name << " Woof Woof!" << endl;
	}

	void displayData()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Breed: " << breed << endl;
	}
};

int main()
{
	Dog myDog;


	myDog.setname("Buddy");
	myDog.setage(5);
	myDog.setbreed("Golden Retriever");
	myDog.displayData();
	myDog.bark();

	myDog.setname("Max");
	myDog.setage(3);
	myDog.setbreed("Beagle");
	myDog.displayData();
	myDog.bark();


	return 0;
}