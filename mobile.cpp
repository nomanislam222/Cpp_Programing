#include <iostream>
using namespace std;

class Mobile
{
    private:
    string OwnerName, OSName;
    int Number;
    double Balance;
    bool Status;

    public:
    void setOwnerName(string on)
    {
        OwnerName=on;
    }
    string getOwnerName()
    {
        return OwnerName;
    }

    void setNumber(int num)
    {
        Number=num;
    }
    int getNumber()
    {
        return Number;
    }

    void setBalance(double b)
    {
        Balance=b;
    }
    double getBalance()
    {
        return Balance;
    }

    void setOSName(string os)
    {
        OSName=os;
    }
    string getOSName()
    {
        return OSName;
    }

    void setStatus(bool s)
    {
        Status=s;
    }
    bool getStatus()
    {
        return Status;
    }

    Mobile()
    {
        OwnerName="";
        Number=0;
        Balance=0;
        OSName="";
        Status=true;
    }

    Mobile(string on,  int num,double b,string os,bool s)
    {
        OwnerName=on;
        Number=num;
        Balance=b;
        OSName=os;
        Status=s;
    }

    ~Mobile()
    {
        cout<<"It is a Destructor"<<endl;
    }

    void Info()
    {
        cout<<"Information: "<<endl;
        cout<<"Mobile owner Name: "<<OwnerName<<endl;
        cout<<"Mobile Number: "<<Number<<endl;
        cout<<"Balance: "<<Balance<<endl;
        cout<<"OS Name: "<<OSName<<endl;
        cout<<"lock status: "<<Status<<endl<<endl;
    }

    void Recharge(int amount)
    {
        if(!Status)
        {
            cout<<"Recharge: "<<amount<<"tk"<<endl;
            Balance = Balance + amount;
        }
        else
        {
            cout<<"Mobile is locked. Unable to recharge."<<endl;
        }
        cout<<endl;
    }


    void Call(int duration)
    {
        if(!Status)
        {
            double mainbalance = duration/2;
            if(Balance >= mainbalance)
            {
                cout<<"Call successful."<<endl;
                cout<<"&";
            }
            else
            {
                cout<<"Insufficient balance"<<endl;
            }
        }
        else
        {
            cout<<"Mobile is locked. Unable to call."<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    Mobile user("Noman",1709828272,100,"Android",false);
    user.Info();
    user.Call(2);
    user.Recharge(100);
    user.Info();

}
