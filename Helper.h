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
                      buyer();
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
                    add();
                    break;
                 case 2:
                    edit();
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
         //starting of buyer
            void buyer(){

                int choice;
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                    Buyer  Menu                       |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                1) Buy Product                        |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                2) Goto Main Menu                     |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t| Please Select Choice :";
                cin>>choice;
                switch (choice)
                {
                case 1:
                    //receipt();
                    break;
                 case 2:
                   menu();
                    break;
                
                
                default:
                cout<<"\t\t\t\t|                Please select from given oprion       |\t\t\t\t\n";
                    break;
                }

            }
        //ending of buyer
        //starting of add
            void add(){
                m:
                    fstream data;
                    int c,token=0;
                    float p,d;
                    string n;
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                    Add product                       |\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
                cout<<"\t\t\t\t|                Product Code of the product : ";
                cin>>pcode;
                cout<<"\t\t\t\t|                Name of the product         :";
                cin>>pname;
                cout<<"\t\t\t\t|                Price of the product        :";
                cin>>price;
                cout<<"\t\t\t\t|                Discount on the product     :";
                cin>>dis;
                cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
                data.open("database.txt",ios::in);
                if (!data)
                {
                    data.open("database.txt",ios::app|ios::out);
                    data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
                 cout<<"\t\t\t\t|               Data Inserted     :\n";
                    data.close();
                }
                else{
                    data>>c>>n>>p>>d;
                    while (!data.eof())
                    {
                        if(c==pcode){
                            token++;

                        }
                         data>>c>>n>>p>>d;
                    }
                    if (token==1)
                    {
                        //if duplicate value found got again input
                cout<<"\t\t\t\t|        Dulicate value found please enter another code     :\n";
                        goto m;
                    }
                    else{
                    
                    fstream data("database.txt", ios::out | ios::app);
                    data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
                 cout<<"\t\t\t\t|               Data Inserted     :\n";
                // data.open("database.txt",ios::app|ios::out);  
                //     data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
                //     data.close();
                    }
                    
                    
                }

              
                
                                                                
                

            }
         //ending of add
         //starting of edit 
            void edit(){
                fstream data,data1;
                int pkey,c;
                int token=0;
                float p,d;
                string n;
            cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
            cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
            cout<<"\t\t\t\t|                   Modify The Product                 |\t\t\t\t\n";
            cout<<"\t\t\t\t|                                                      |\t\t\t\t\n";
            cout<<"\t\t\t\t|______________________________________________________|\t\t\t\t\n";
            cout<<"\t\t\t\t|                Product Code of the product : ";
            cin>>pkey;
            data.open("database.txt");
            if (!data)
            {
            cout<<"\t\t\t\t|        File Doesn't Exist     :\n";
            }
            else{
                data1.open("database1.txt",ios::app|ios::out);
                //fetching data from old file
                data>>pcode>>pname>>price>>dis;
                while (!data.eof())
                {
                   if (pkey==pcode)
                   {
                cout<<"\t\t\t\t|                Product Code of the product :";
                cin>>c;
                cout<<"\t\t\t\t|                Name of the product         :";
                cin>>n;
                cout<<"\t\t\t\t|                Price of the product        :";
                cin>>p;
                cout<<"\t\t\t\t|                Discount on the product     :";
                cin>>d;
                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout<<"\t\t\t\t|               Record Edited     :\n";
                token++;
                      
                   }
                   else{
                       //if product key is not matched not match just copy all the data from data to data1
                       data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
                   }

                    data>>pcode>>pname>>price>>dis;
                }
                data.close();
                data1.close();
                //finally remove old file and rename new file to old file
                remove("database.txt");
                rename("database1.txt","database.txt");
                if(token==0){
                cout<<"\t\t\t\t|          Product not found     :";
                
                }
                

            }
            



            
            }
            //ending of edit 
            void rem();
            void list();
            void receipt();
};