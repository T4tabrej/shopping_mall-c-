#include<iostream>
#include<fstream>

using namespace std;
class Helper {
        private:
            int pcode;
            float price;
            float dis;
            string pname;
        public:
        //menu start
            void menu(){
                // m:
                int choice;
                string email,password;
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                 Super Market Menu                    |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                1) Adminstrator                       |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                2)   Buyer                            |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                3)   Exit.                            |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t| Please Select Choice :";
                cin>>choice;
                switch (choice)
                {
                case 1:
                    cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                    cout<<"\t\t\t\t|               Please Login                           |\t\t\t\t\n";
                    cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                    cout<<"\t\t\t\t                Enter Email  :";
                    cin>>email;
                    cout<<"\t\t\t\t                Enter Password:";
                    cin>>password;
                    if(email=="abc@gmail.com" && password =="1234"){
                    // cout<<"\t\t\t                 Welocme to Admin section\n";
                        admin();

                    }
                    else{
                        cout<<"\t\t\tInvalid Email/password\n";
                    }

                    
                    break;
                    case 2:
                    //   buyer();
                      break;
                    case 3:
                        exit(0);
                        break;
                
                default:
                    cout<<"Please Select from given Option..";
                    break;
                }
                //switch case end




            }
            // goto m;
        //menu end


        //starting of admin
            void admin(){
                // cout<<"\n\n\n\t Adminstrator Menu";
                int choice;
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                 Administrator  Menu                  |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                1) Add Product                        |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                2) Modify The Product                 |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                3) Delete                             |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                4) Back to MainMenu                   |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t| Please Select Choice :";
                cin>>choice;
                switch (choice)
                {
                case 1:
                    // add();
                    break;
                 case 2:
                    // edit_product();
                    break;
                 case 3:
                    // delete();
                    break;
                case 4:
                    menu();
                    break;
                
                default:
                cout<<"\t\t\t\t|                Please select from given oprion       |\t\t\t\t\n";
                    break;
                }

            }
         //ending of Admin
            void buyer();
            void add();
            void edit();
            void rem();
            void list();
            void receipt();
};