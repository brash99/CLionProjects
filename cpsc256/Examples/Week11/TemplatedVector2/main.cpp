#include <iostream>
#include <string>
#include "list.h"
using namespace std;

int main(){

    LinkedList<string> list;
    string item;
    int ch, index;
    bool quit = false;
    do{
        cout<<"===================================="<<endl;
        cout<<"select option :"<<endl;
        cout<<"1: insert back"<<endl;
        cout<<"2: insert front"<<endl;
        cout<<"3: insert at index"<<endl;
        cout<<"4: display items"<<endl;
        cout<<"5: get item at index"<<endl;
        cout<<"6: delete back"<<endl;
        cout<<"7: delete front"<<endl;
        cout<<"8: delete at index"<<endl;
        cout<<"9: exit"<<endl;
        cin>>ch;
        cout<<"===================================="<<endl;
        switch (ch)
        {
            case 1:
                cout<<"enter item to insert:"<<endl;
                cin>>item;
                list.add(item);
                break;
            case 2:
                cout<<"enter item to insert:"<<endl;
                cin>>item;
                list.addFront(item);
                break;
            case 3:
                cout<<"enter item to insert:"<<endl;
                cin>>item;
                cout<<"enter index:"<<endl;
                cin>>index;
                list.add(index, item);
                break;
            case 4:
                list.displayAll();
                break;

            case 5:
                cout<<"enter index:"<<endl;
                cin>>index;
                cout<<"item at index "<<index<<": "<<list.get(index)<<endl;
                break;
            case 6:
                list.remove();
                break;
            case 7:
                list.removeFront();
                break;
            case 8:
                cout<<"enter index:"<<endl;
                cin>>index;
                list.remove(index);
                break;
            case 9:
                quit = true;
                break;
            default:
                cout<<"invalid selection"<<endl;
                break;
        }
    }while(!quit);
    return 0;
}