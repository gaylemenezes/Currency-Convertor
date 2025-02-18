#include <iostream> 

using namespace std; 

class currency { 

    int n,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10; 

    public: 

    void intro()   { 

        cout<<"Welcome to Gayle's Currency Convertor"<<endl; 

        cout<<"These are your options:"<<endl; 

        cout<<"1:USD to INR"<<endl; 

        cout<<"2:AUD to INR"<<endl; 

        cout<<"3:Dirham to INR"<<endl; 

        cout<<"4:Dinar to INR"<<endl; 

        cout<<"5:Riyal to INR"<<endl; 

        cout<<"6:Euro to INR"<<endl; 

        cout<<"7:Pound Sterling to INR"<<endl; 

        cout<<"8:INR to Taka"<<endl; 

        cout<<"9:INR to Yen"<<endl; 

        cout<<"10:INR to SriLunkan Rupee"<<endl; 

         

    } 

    void get() { 

        cout<<"Enter your choice:"; 

        cin>>n; 

        switch(n)  

        { 

            case 1: 

            cout<<"Enter value in USD:"; 

            cin>>c1; 

            cout<<c1<<"USD="<<82.57*c1<<"INR"<<endl; 

            break; 

            case 2: 

            cout<<"Enter value in AUD:"; 

            cin>>c2; 

            cout<<c2<<"AUD="<<55.02*c2<<"INR"<<endl; 

            break; 

            case 3: 

            cout<<"Enter value in Dirham:"; 

            cin>>c3; 

            cout<<c3<<"Dirham="<<22.47*c3<<"INR"<<endl; 

            break; 

            case 4: 

            cout<<"Enter value in Dinar:"; 

            cin>>c4; 

            cout<<c4<<"Dinar="<<218.97*c4<<"INR"<<endl; 

            break; 

            case 5: 

            cout<<"Enter value in Riyal :"; 

            cin>>c5; 

            cout<<c5<<"Riyal="<<22.01*c5<<"INR"<<endl; 

            break; 

            case 6: 

            cout<<"Enter value in Euro :"; 

            cin>>c6; 

            cout<<c6<<"Euro="<<88.18*c6<<"INR"<<endl; 

            break; 

            case 7: 

            cout<<"Enter value in Pound Sterling :"; 

            cin>>c7; 

            cout<<c7<<"Pound Sterling="<<102.59*c7<<"INR"<<endl; 

            break; 

            case 8: 

            cout<<"Enter value in INR :"; 

            cin>>c8; 

            cout<<c8<<"INR="<<c8/0.77<<"Taka"<<endl; 

            break; 

            case 9: 

            cout<<"Enter value in INR :"; 

            cin>>c9; 

            cout<<c9<<"INR="<<c9/0.59<<"Yen"<<endl; 

            break; 

            case 10: 

            cout<<"Enter value in INR :"; 

            cin>>c10; 

            cout<<c10<<"INR="<<c10/0.28<<"SriLunkan Rupee"<<endl; 

            break; 

            default: 

            cout<<"Invalid currency"; 

            break; 

        } 

    } 

}; 

int main() { 

    currency obj; 

    obj.intro(); 

    obj.get(); 

    return 0; 

} 