#include<iostream>
using namespace std;

class graph {
    int cost[10][10];
    int vertex;

public:
    graph() {
        cout << "Enter the no. of cities: " << endl;
        cin >> vertex;

        for (int i = 0; i < vertex; i++) {
            for (int j = 0; j < vertex; j++) {
                cost[i][j] = 999;  
            }
        }
    }

    void create() {
        for (int i = 0; i < vertex; i++) {
            for (int j = 0; j < vertex; j++) {
                if (i != j) {
                    cout << "Enter the cost for the edge " << i << " and " << j << " : " << endl;
                    cin >> cost[i][j];
                    cost[j][i] = cost[i][j];  
                }
            }
        }
    }

    void display() {
        for (int i = 0; i < vertex; i++) {
            for (int j = 0; j < vertex; j++) {
                if (cost[i][j] == 999)
                    cout << "INF" << "\t";  
                else
                    cout << cost[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void prims(int startv) {
        int near[vertex];
        int min = 999;
        int mincost = 0;
        int index;
        
        for (int i = 0; i < vertex; i++) {
            near[i] = startv;
        }
        near[startv] = -1;  

        for (int i = 0; i < vertex - 1; i++) {
            min = 999;
            for (int k = 0; k < vertex; k++) {
                if (near[k] != -1 && cost[k][near[k]] < min) {
                    index = k;
                    min = cost[k][near[k]];
                }
            }

            cout << "Edge: " << near[index] << " - " << index << " with cost: " << min << endl;
            mincost += min;
            near[index] = -1;  

            for (int k = 0; k < vertex; k++) {
                if (near[k] != -1 && cost[k][near[k]] > cost[k][index]) {
                    near[k] = index;
                }
            }
        }

        cout << "Total Minimum Cost: " << mincost << endl;
    }
};

int main() {
	int ch;
	graph power;
	do{
		cout<<"Menu:"<<endl;
		cout<<"1.Create cost matrix"<<endl;
		cout<<"2.Display cost matrix"<<endl;
		cout<<"3.Use Prim's algorithm."<<endl;
		cout<<"4.Exit the program."<<endl;
		cout<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>ch;

		switch(ch){
			case 1:
				power.create();
				break;

			case 2:
				power.display();
				break;

			case 3:
				int startVertex;
    			cout << "Enter the starting vertex: ";
    			cin >> startVertex;

    			power.prims(startVertex); 
				break;

			case 4:
				cout<<"Exiting the program..."<<endl;
				break;
		}
	}while(ch != 4);
    return 0;
}
