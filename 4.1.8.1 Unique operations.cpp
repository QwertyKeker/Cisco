#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Pet
{
public:
    string name, pet_type;
    Pet(): name("Keker"), pet_type("Human"){}
    Pet(string name1, string pet_type1): name(name1), pet_type(pet_type1){}
};

struct Equal
{
    bool operator()(const Pet & a, const Pet & b)
    {
        return a.name == b.name;
    }
};

int main()
{
	vector<Pet> pets = { {"Amber", "Cat"}, {"Barky", "Dog"}, { "Barky", "Reptile" },
		{"Casper", "Fish"}, {"Casper", "Reptile"}, {"Godzilla", "Reptile" } };
	vector<Pet> uniquePets(pets.size());
    vector<Pet>::iterator it = unique_copy(pets.begin(), pets.end(), uniquePets.begin(), Equal());
    uniquePets.erase(it, uniquePets.end());
    for (auto i : pets)
		cout << i.name << " " << i.pet_type << endl;
	cout << endl;
	for (auto i : uniquePets)
		cout << i.name << " " << i.pet_type << endl;
	return 0;
}
