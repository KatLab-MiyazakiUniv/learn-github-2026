/**
 * @file AtmTest.cpp
 * @brief Atmクラスのテスト
 * @author miyahara046
 */
#include <gtest/gtest.h>
#include "Atm.h"

// 正の数の残高テスト
TEST(AtmBalanceTest, PlusBalance)
{
    Atm atm(100);
    int expected = 100;
    EXPECT_EQ(atm.getBalance(), expected);
}

// ゼロの残高テスト
TEST(AtmBalanceTest, ZeroBalance)
{
    Atm atm(0);
    int expected = 0;
    EXPECT_EQ(atm.getBalance(), expected);
}

// 負の数の残高テスト
TEST(AtmBalanceTest, MinusBalance)
{
    Atm atm(-100);
    int expected = 0;
    EXPECT_EQ(atm.getBalance(), expected);
}

// 正の数の入金テスト
TEST(AtmDepositTest, PlusDeposit)
{
    Atm atm(100);
    atm.deposit(50);
    int expected = 150;
    EXPECT_EQ(atm.getBalance(), expected);
}

// ゼロの入金テスト
TEST(AtmDepositTest, ZeroDeposit)
{
    Atm atm(100);
    atm.deposit(0);
    int expected = 100;
    EXPECT_EQ(atm.getBalance(), expected);
}

// 負の数の入金テスト
TEST(AtmDepositTest, MinusDeposit)
{
    Atm atm(100);
    atm.deposit(-50);
    int expected = 100;
    EXPECT_EQ(atm.getBalance(), expected);
}

// 残高範囲内の出金テスト
TEST(AtmWithdrawTest, WithdrawSmallerThanBalance)
{
    Atm atm(100);
    atm.withdraw(30);
    int expected = 70;
    EXPECT_EQ(atm.getBalance(), expected);
}

//　残高範囲外の出金テスト
TEST(AtmWithdrawTest, WithdrawBiggerThanBalance)
{
    Atm atm(100);
    atm.withdraw(150);
    int expected = 100;
    EXPECT_EQ(atm.getBalance(), expected);
}

// 残高と同じ金額の出金テスト
TEST(AtmWithdrawTest, WithdrawEqualBalance)
{
    Atm atm(100);
    atm.withdraw(100);
    int expected = 0;
    EXPECT_EQ(atm.getBalance(), expected);
}

// 金額ゼロの出金テスト
TEST(AtmWithdrawTest, WithdrawZeroAmount)
{
    Atm atm(100);
    atm.withdraw(0);
    int expected = 100;
    EXPECT_EQ(atm.getBalance(), expected);
}

//　負の数の出金テスト
TEST(AtmWithdrawTest, WithdrawNegativeAmount)
{
    Atm atm(100);
    atm.withdraw(-50);
    int expected = 100;
    EXPECT_EQ(atm.getBalance(), expected);
}
