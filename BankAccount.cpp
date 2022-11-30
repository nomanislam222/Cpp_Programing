#include <iostream>
using namespace std;

class Account
{
    private:
    string AccountName, AccountType;
    int AccountNumber;
    int Balance;

    public:
    void setAccountName(string a_name)
    {
        AccountName = a_name;
    }
    string getAccountName()
    {
        return AccountName;
    }

    void setAccountNumber(int a_number)
    {
        AccountNumber = a_number;
    }
    int getAccountNumber()
    {
        return AccountNumber;
    }

    void setBalance(int b)
    {
        Balance = b;
    }
    int getBalance()
    {
        return Balance;
    }

    void setAccountType(string a_type)
    {
        AccountType = a_type;
    }
    string getAccountType()
    {
        return AccountType;
    }


    Account();
    Account(string a_name, int a_number, float b, string a_type)
    {
        AccountName=a_name;
        AccountNumber=a_number;
        Balance=b;
        AccountType=a_type;
    }

    ~Account()
    {
        cout<<"It is a Destructor.";
    }

    void AccountDetails()
    {
        cout<<"Account Name: "<<AccountName<<endl;
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Account Balance: "<<Balance<<endl;
        cout<<"Account Type: "<<AccountType<<endl;
        cout<<"**************************"<<endl<<endl;
    }

    void Deposit(int amount)
    {
        Balance += amount;
        cout<<"Deposite Amount: "<<amount<<endl<<endl;
    }

    void Withdraw(int amount)
    {
        if(Balance>amount)
        {
            Balance -= amount;
            cout<<"Withdraw Amount: "<<amount<<endl;
        }
        else if(Balance<amount)
        {
            cout<<"Withdraw Amount: "<<amount<<endl;
            cout<<"Sorry!! Insufficient Balance."<<endl;
        }
        cout<<endl;
    }

    void Transfer(int amount, Account &account)
    {
        if(Balance>amount)
        {
            Balance -= amount;
            cout<<"Balance Transfer: "<<amount<<"tk"<<endl;
            cout<<"Transfer To: "<<endl;
            int balance=account.Balance+amount;
            account.setBalance(balance);
        }
        else
        {
            cout<<"Sorry!! Insufficient Balance."<<endl;
        }
    }

};


int main()
{

    Account tanjil=Account("Noman",53637282,200,"Saving");
    Account ikhlas=Account ("Rony",29822563,200,"Saving");
    cout<<"Bank User One:"<<endl;
    tanjil.AccountDetails();
    tanjil.Deposit(300);
    tanjil.AccountDetails();
    tanjil.Withdraw(100);
    tanjil.AccountDetails();
    cout<<"Bank User Two"<<endl;
    ikhlas.AccountDetails();
    ikhlas.Withdraw(300);


    ikhlas.Transfer(50,tanjil);
    tanjil.AccountDetails();
    cout<<"Transfer From"<<endl;
    ikhlas.AccountDetails();

}
