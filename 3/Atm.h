class Atm
{
public:
      Atm(int init_balance);
      void deposit(int amount);
      void withdraw(int amount);
      int getBalance() const;

private:
      int balance;
};