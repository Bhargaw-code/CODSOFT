#include <bits/stdc++.h>
using namespace std;
void print_tasks(string tasks[],int task_count)
{
    cout<<"TASKS TO DO: "<<endl;
    for(int i=0 ; i<task_count ; i++){
        cout<<"TASK " << (i+1) << " : " << tasks[i]  <<endl;
    }
}
int main() {
    string tasks[10] = {""};
    int task_count = 0;
    int option = -1;
    while (option != 0)
    {
        cout<< "---TO DO LIST---" <<endl;
        cout<< "1 - TO ADD NEW TASK" <<endl;
        cout<< "2 - TO VIEW TASK" <<endl;
        cout<< "3 - DELETE THE TASKS" <<endl;
        cout<< "0 - TERMINATE THE PROGRAM" <<endl;
        cin>> option;
        switch(option)
        {
            case 1:
            {
                if(task_count > 9)
                {
                    cout<< "~~~TASK LIST IS FULL~~~" <<endl;
                }
                else
                {
                    cout<< "ENTER A NEW TASK: ";
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                }
             break;
            }
            case 2:
            print_tasks(tasks,task_count);
            break;
            case 3:
            {
                int del_task = 0;
                cout<< "ENTER A TASK TO DELETE FROM 1 TO "<<task_count<<endl;
                cin>>del_task;
                del_task--;
                if( del_task < 0 || del_task >= task_count)
                {
                    cout<< "YOU ENTERED INVALID TASK NO." <<endl;
                    break; 
                }
                for(int i=del_task;i<task_count;i++){
                    tasks[i]=tasks[i+1];
                }
                task_count = task_count-1;
                break;
            }
            case 0:
            cout<< "Terminating the Program--- --- ---";
            break;
            default:
            cout<< "You entered invalid value!" <<endl;
        }
    }
    return 0;
}