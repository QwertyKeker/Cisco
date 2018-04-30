#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int rng_function(int range)
{
	return std::rand() % range;
}

int main()
{
	const unsigned RANDOM_SEED = 5;
	std::srand(RANDOM_SEED);
	vector<int> myvector;
	vector<string> cards;
	vector<string> card_names={ "A", "2", "3", "4" , "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	for (auto name : card_names)
	{
		cards.push_back(name + "S");
		cards.push_back(name + "H");
		cards.push_back(name + "D");
		cards.push_back(name + "C");
	}
	vector<vector<string>> players(4);
    random_shuffle(cards.begin(), cards.end(), rng_function);
    for (int i = 0; i < 4; i++)
        for(int j = 0; j < 13; j++)
        {
            players[i].resize(13);
            players[i][j] = cards[j+13*i];
        }
    for(auto i: players)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
	return 0;
}
