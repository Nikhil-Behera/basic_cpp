#include<iostream>
#include<vector>
using namespace std;

class user{
    private:
        string name;
        int id;

    public:
        user(){
            name="haha";
            id=0;
        }

    friend class facebook;
};

class facebook{
    private:
        int n;
        user u[30];
    public:

        void get_no(){
            cout<<"enter the no. of users (max users can be 30): "<<endl;
            cin>>n;
        }

        vector <int> adj[30];
        void adj_list(){
            
            for(int i=0;i<n;i++){
                cout<<"Enter the name of the user: "<<endl;
                cin>>u[i].name;
                cout<<"enter the id: "<<endl;
                cin>>u[i].id;
            }
            
            int f;
            int ch;
            int i=0;
            while(i<n){
                do{
                    cout<<"Enter the id that you want to add friend for user with id "<<u[i].id<<" :"<<endl;
                    cin>>f;
                    adj[i].push_back(f);

                    cout<<"Want to add more friends for ? (1=true/0=false)...";
                    cout<<"Enter a choice:"<<endl;
                    cin>>ch;
                }while(ch!=1);
                i++;
            }
            // for(int i=0;i<n;i++){
            //     cout<<"enter the id that you want to add as a friend: "<<endl;
            //     cin>>f;

            //     adj[i].push_back(f);

            // }
        }

        void display(){
            cout<<"The users are: "<<endl;

            for(int i=0;i<n;i++){
                cout<<"The name of the user is: "<<u[i].name<<endl;
                cout<<"The id od the user is: "<<u[i].id<<endl;
                cout<<"The id of the friend is :  ";
                for(int j=0;j<n;j++){
                    cout<<adj[i][j];
                }
                cout<<endl;
            }
        }

};

int main(){
    facebook fb;
    fb.get_no();
    fb.adj_list();
    fb.display();
    return 0;
}