#include<iostream>
#include<fstream>
using namespace std;

class User{ // Abstract Class
    int Reg_No;
    string Name,Password,Department;

    public:
        static User* login();
        virtual void logout() =0;//user
};




class Member {
    string joiningDate,role;
    public:
        void Edit_file()
            {
             
            }
        void Delete_file()
            {

            }
        void Upload_file()
            {

            }
};

class NonMember{
    public:
        void View_file()
            {
                
            }
        void Copy_file()
            {

            }
};

class Studio{//inherits non member
    string Role;
    int Experience;
    public:
        void Give_song()
            {
             
            }
};
class Cardroom{//inherits non member
    int Card_experience;
    public:
        void Give_Design()
            {
             
            }
};
class Editor{//inherits member
    public:
        void Edit_Media()
            {

            }
};

class Designer{//inherits member and artist
    public:
        void Make_Poster()
            {

            }
};

class Admin{//inherits member
    public:
        void Assign_Proj()
            {

            }
        void View_logs()
            {

            }
};

class Photographer{//inherits member
    public:
        void Click_Pic()
            {

            }
};

class GraphicEditor{//inherits designer and editor
    public:
        void Make_Graphics()
            {

            }
}; 

User* User::login() {
    int id;
    string password;

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Password: ";
    cin >> password;

    // check database
    // decide role

    // if(role == "Admin")
    //     return new Admin();
    // else
    //     return new NonMember();
}
class Song {
    
};
class File{
    int Size,ID;
    string Name,Type,Extension;

    public:
        void View_details()
            {

            }
        void Get_Size()
            {

            }
};

class FileCategory{//this is like folder but sorted into categories
    string Event_name,Desc;

    public:
        void View_files()
            {

            }
        void Get_Size()
            {

            }
        void Get_file()
            {
                
            }
};

class DepartmentRepository{
    int Total_storage,Used_storage;
    public:
        void View_Events()
            {
                
            }
        void Open_Event()
            {

            }
};

class UserStorage{
    int User_total_storage,User_storage_used;
    public:
        void List_user_files()
            {

            }
        void Delete_user_files()
            {
             
            }
        void Check_user_storage()
            {
            
            }
};

class Equipment{
    int Equipment_ID;
    string Name, Available,Condition;
    float Cost;

    public:
        void Is_available()
            {

            }
        int Current_cost()
            {
            
            }
};

class EquipmentIssue{ //this would be a friend class with equipment class and the member class
    string Issue_date,Return_date;
    public:
        void Show_issues()
            {

            }
        void Return_equipment()
            {

            }
        void Issue_duration()
            {

            }
        
};

class Project{ // can be only accessed by the Admin
    int Project_ID;
    string Project_name,Project_event;
    //list of members
    bool Status;
    public:
        void Add_member()
            {

            }
        void Remove_member()
            {
            
            }
        void Update_status()
            {

            }
};


int main()
    {
     //cout<<"********************************"<<endl;
     cout<<"Do you want to login? (Y/N): ";


     char resp;
     cin>>resp;
     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // makes sure it ignores whatever is there in the buffer till the newline char
     if(resp=='N' || resp=='n')
         return 0;
     User* currentUser = User::login();

    //currentUser->logout();

   // delete currentUser;

    return 0;


    }