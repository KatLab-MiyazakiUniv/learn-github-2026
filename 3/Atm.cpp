#include "Atm.h"

Atm::Atm(int init_balance)
{
      if (init_balance >= 0)
      {
            balance = init_balance;
      }
      else
      {
            balance = 0;
      }
}

void Atm::deposit(int amount)
{
      if(amount <= 0){
            return;
      }
      balance += amount;
}

void Atm::withdraw(int amount)
{
      if(amount <= 0 || amount > balance){
            return;
      }
      balance -= amount;
}

int Atm::getBalance() const
{
      return balance;
}