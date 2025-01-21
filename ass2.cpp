#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class gnode
{
private:
    int id;
    string name;
    gnode *next;

public:
    gnode()
    {
        id = 0;
        name = "e";
    }

    friend class graph;
};

class graph
{
private:
    int n;
    gnode *head[20];
    bool visited[20];
    bool visited_bfs[20];

public:
    graph()
    {
        cout << "Enter the no. of users:  " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            head[i] = new gnode;
            cout << "Enter the id of the user " << i + 1 << " :" << endl;
            cin >> head[i]->id;
            cout << "Enter the name of the user " << i + 1 << " :" << endl;
            cin >> head[i]->name;
            head[i]->next = nullptr;
        }
    }

    void accept()
    {
        for (int i = 0; i < n; i++)
        {
            gnode *temp = head[i];
            gnode *curr = new gnode;
            int f_id;
            string f_name;
            string ch;
            do
            {
                cout << "Enter the id of the friend : " << endl;
                cin >> f_id;
                curr->id = f_id;

                cout << "Enter the name of the friend: " << endl;
                cin >> f_name;
                curr->name = f_name;

                temp->next = curr;
                curr->next = nullptr;
                temp = temp->next;

                cout << "want to add more freinds? (y/n)" << endl;
                cin >> ch;
            } while (ch == "y" || ch == "Y");
        }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            gnode *temp = head[i];
            cout << "id: " << temp->id << "\t";
            cout << "name: " << temp->name << endl;
            cout << "The friends of user " << temp->name << " are : " << endl;
            temp = temp->next;

            while (temp != nullptr)
            {
                cout << "id: " << temp->id << "\t";
                cout << "name: " << temp->name << endl;
                temp = temp->next;
            }
        }
    }

    void depth_fs(int si)
    {

        visited[si] = true;

        gnode *temp = head[si];
        // cout<<"Visisted user name: "<<temp->name<<"\t";
        cout << "Visisted user id: " << temp->id << endl;

        temp = temp->next;
        while (temp != nullptr)
        {
            int fi = -1;
            for (int i = 0; i < n; i++)
            {
                if (visited[i] == 0)
                {
                    fi = i;
                    break;
                }
            }
            if (fi != -1 && !visited[fi])
            {
                depth_fs(fi);
            }
            temp = temp->next;
        }
    }

    void depth_fs()
    {
        int si = -1;
        cout << "Enter the start index of your search: " << endl;
        cin >> si;

        depth_fs(si);
    }

    void breadth_fs(int sid)
    {
        queue<int> q;

        int st_ind = -1;
        for (int i = 0; i < n; i++)
        {
            if (head[i]->id == sid)
            {
                st_ind = i;
                break;
            }
        }

        if (sid == -1)
            cout << "The id of the user doesn't exist!!" << endl;

        visited_bfs[sid] == true;

        q.push(sid);

        while (!q.empty())
        {
            int curr_ind = -1;
            visited_bfs[curr_ind] = true;
            q.pop();

            gnode *temp = head[curr_ind];
            cout << "id: " << temp->id << endl;

            temp = temp->next;
            while (temp != nullptr)
            {
                int fr_ind = -1;
                for (int i = 0; i < n; i++)
                {
                    if (head[i]->id == temp->id)
                    {
                        fr_ind = i;
                        break;
                    }
                }

                if (fr_ind != -1 && !visited_bfs[fr_ind])
                {
                    visited_bfs[fr_ind] = true;
                    q.push(fr_ind);
                }
                temp = temp->next;
            }
        }
    }

    void breadth_fs()
    {
        int sid = -1;
        cout << "Enter the starting id : " << endl;
        cin >> sid;
        breadth_fs(sid);
    }
};

int main()
{
    graph facebook;
    facebook.accept();
    facebook.display();
    facebook.depth_fs();
    return 0;
}