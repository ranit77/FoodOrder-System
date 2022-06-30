#include <iostream>
using namespace std;
void login(string username, string pass)
{
    string password;
    string user;
    cout << "Re enter username:";
    cin >> user;
    cout << "Re enter Password:";
    cin >> password;

    while (username != user || password != pass)
    {
        if (username != user && password != pass)
        {
            cout << "Wrong login details \n";
            cout << "Please Try again \n";
            cout << "Re enter your Username:";
            cin >> user;
            cout << "Re enter your password:";
            cin >> password;
        }
        if (username != user)
        {
            cout << "Username is Incorrect \n";
            cout << "Please Try again \n";
            cout << "Re enter your Username:";
            cin >> user;
            cout << "Re enter your password:";
            cin >> password;
        }
        if (password != pass)
        {
            cout << "Password is incorrect \n";
            cout << "Please Try again \n";
            cout << "Re enter your Username:";
            cin >> user;
            cout << "Re enter your password:";
            cin >> password;
        }
        
    }
    cout << "Login Successful \n";
}
int main()
{
    string name;
    string username;
    string pass;
    string food;
    int n, i, k = 0;
    int f=0, fu, u=0, bur, s=0, sa, c=0, cd,payment,bill;
    char option;
    string code;
    string b[4];
    cout << "Please register your account \n";
    cout << "Enter your name:";
    getline(cin, name);
    cout << "Enter username(no spaces):";
    cin >> username;
    cout << "Enter password:";
    cin >> pass;
    cout << "Registration successful \n";
    cout << "Please Login \n";
    login(username, pass);
    cout << "Hello " << name << endl;
    cout << "What would you like to order? \n";
    cout << "FrenchFries - Rs50" << endl;
    cout << "Burger - Rs80" << endl;
    cout << "Sandwich - Rs75" << endl;
    cout << "ColdDrinks - Rs25" << endl;
    cout << "Enter number of items you want:";
    cin >> n;
    cout << "Enter food items(No spaces):\n";
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "            Bill\n";
    cout << "ThankYou for placing order with us \n";
    cout << "No. of ordered items:" << n << endl;
    cout << "Food items ordered is \n";
    for (i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] == "FrenchFries" || b[i] == "frenchfries" || b[i] == "Frenchfries" || b[i] == "frenchFries" || b[i] == "FRENCHFRIES")
        {
            cout<<"Enter number of French Fries you want:";
            cin >> f;
            fu = f * 50;
            k += fu;
        }
        if (b[i] == "Burger" || b[i] == "burger")
        {
            cout<<"Enter number of Burgers you want:";
            cin >> u;
            bur = 80 * u;
            k += bur;
        }
        if (b[i] == "Sandwich" || b[i] == "sandwich")
        {
            cout<<"Enter number of Sandwich you want:";
            cin >> s;
            sa = 75 * s;
            k += sa;
        }
        if (b[i] == "ColdDrinks" || b[i] == "colddrinks" || b[i] == "Colddrinks" || b[i] == "coldDrinks" || b[i] == "COLDDRINKS")
        {
            cout<<"Enter number of glasses of Cold Drinks you want:";
            cin >> c;
            cd = 25 * c;
            k += cd;
        }
    }
    cout<<"Bill for "<<name<<endl;
    cout<<"Item name            No. of Items            Cost\n";
    if(f>0)
    {
       cout<<"French Fries"<<"          "<<f<<"                     "<<fu<<"Rs"<<endl;
    }
    if(u>0)
    {
       cout<<"Burger      "<<"          "<<u<<"                     "<<bur<<"Rs"<<endl;  
    }
    if(s>0)
    {
       cout<<"Sandwich    "<<"          "<<s<<"                     "<<sa<<"Rs"<<endl;
    }
    if(c>0)
    {
        cout<<"Cold Drinks"<<"           "<<c<<"                     "<<cd<<"Rs"<<endl;
    }    
    cout << "Your Total Payment is:" << k<<"Rs"<<endl;
    cout<<"Do you want special discount?? Add discount codes"<<endl;
    cout<<"XYZ20            NEWSIGN10"<<endl;
    cout<<"You can skip special discount just type SKIP"<<endl;
    cout<<"Add your choice:";
    cin>>code;
    if(code=="XYZ20")
    {
        cout<<"You got 20% discount on your order"<<endl;
        payment=0.8*k;
        cout<<"Pay:"<<payment<<"Rs";
    }
    if(code=="NEWSIGN10")
    {
        cout<<"You got 10% discount on your order"<<endl;
        payment=0.9*k;
        cout<<"Pay:"<<payment<<"Rs";
    }
    if(code=="SKIP")
    {
        payment=k;
    }
    cout<<"\n Please choose your payment option \n";
    cout<<"Press C for Cash"<<endl;
    cout<<"Press D for Card"<<endl;
     cout<<"Add your choice:";
    cin>>option;
    switch(option)
    {
        case 'C':
        {
           cout<<"Please provide your payment in Cash"<<endl;
           cout<<"ThankYou"<<endl;
           break;
        }
        case 'D':
        {
            cout<<"Congratulations you got 10% discount for using card"<<endl;
            bill=0.9*payment;
            cout<<"Your Total Payment is:"<<bill<<"Rs"<<endl;
            cout<<"ThankYou"<<endl;
            break;
        }
    }
cout<<"Thank You for ordering your food with us."<<endl;
cout<<"Have a nice day."<<endl;
    return 0;
}
