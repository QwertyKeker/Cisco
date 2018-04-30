#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Класс с двумя полями -- значение валюты и количество
class Banknote
{
private:
    int value;
    int qty;
public:
    Banknote(int value, int qty)
    {
        this -> value = value;
        this -> qty = qty;
    }
    int getValue()
    {
        return value;
    }
    int getQty()
    {
        return qty;
    }
    void setQty(int qty)
    {
        this -> qty = qty;
    }
};

//Функция обсчитивает все деньги в АТМ
int totalMon (vector<auto> v)
{
    int total = 0;
    for(int i = 0; i < v.size(); i++)
    {
        total += v[i].getQty() * v[i].getValue();
    }
    return total;
}

//Функция обсчитивает купюры, которые необходимо выдать
void calcMoney (vector<auto> v, int sum, int* bnotesToWithdraw)
{
    bool boool = 1;
    for(int i = v.size() - 1; i >= 0 ; i--)
    {
        if(sum > 0)
        {
            *(bnotesToWithdraw + i) = sum / v[i].getValue();
            if (*(bnotesToWithdraw + i) > v[i].getQty())
                *(bnotesToWithdraw + i) = v[i].getQty();
            sum = sum - *(bnotesToWithdraw + i) * v[i].getValue();
        }
    }
}

int main()
{
    vector<Banknote> v{{10, 5}, {20, 6}, {50, 3}, {100, 4}, {200, 5}}; //К-во валюты в АТМ
    int bnotesToWithdraw[] = {0, 0, 0, 0, 0}; //К-во валюты, которое нужно будет снять
    int sum1, sum2, balance = 0; // Суммы, которые снимают и полный баланс
    string output[] = {"Enough money.", "Not enough money.", "Incorrect amount of money."};
    short out[2] = {0, 0}; // Варианты вывода
    cin >> sum1 >> sum2;
    if (sum1 % 10 != 0 || sum1 <= 0) // Проверка, возможно ли выдать сумму
        out[0] = 2;
    if (sum2 % 10 != 0 || sum2 <= 0)
        out[1] = 2;
    if (out[0] == 2 && out[1] == 2)
    {
        cout << output[2] << " " << output[2];
        return 0;
    }
    balance = totalMon(v);
    if (sum1 > balance) // Проверка, хватит ли денег в АТМ
        out[0] = 1;
    if (sum2 > balance)
        out[1] = 1;
    if (out[0] == 1 && out[1] == 1)
    {
        cout << output[1] << " " << output[1];
        return 0;
    }
    if (!out[0]) // Обсчет снятых денег в АТМ впервый раз
        calcMoney(v, sum1, bnotesToWithdraw);
    for (int i = 0; i < v.size(); i++) // Снятие с АТМ первой суммы
        v[i].setQty(v[i].getQty() - bnotesToWithdraw[i]);
    balance = totalMon(v); // Перерасчет баланса
    if (sum2 > balance) // Выдача второй суммы, если хватает денег
        out[1] = 1;
    for(int i = 0; i < 2; i++)
    {
        cout << output[out[i]] <<" ";
    }
    return 0;
}
