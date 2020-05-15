#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *prev,*next;
};

void createNode(){cout<<"created";}
void addNode(){cout<<"added";}
void findNode(){cout<<"found";}
void updateNode(){cout<<"updated";}
void mergeNode(){cout<<"merged";}
void ascNode(){cout<<"arranged in ascending";}
void descNode(){cout<<"arranged in descending";}
void rotateNode(){cout<<"rotate list";}
void deleteNode(){cout<<"node deleted";}

int main()
{
    struct node *start;
    int choice;
    while(1)
    {
        cout<<"\t\t********Welcome********";
        cout<<"\n\tIt's a Menu Driven Double Linked List Program";
        cout<<"\n\t\t1.Create Node.";
        cout<<"\n\t\t2.Add Node.";
        cout<<"\n\t\t3.Search Node.";
        cout<<"\n\t\t4.Update Node.";
        cout<<"\n\t\t5.Merge two Double Linked list";
        cout<<"\n\t\t6.Arrange in ascending order.";
        cout<<"\n\t\t7.Arrange in descending order.";
        cout<<"\n\t\t8.Rotate Double Linked List.";
        cout<<"\n\t\t9.Delete Node.";
        cout<<"\n\t\t10.Exit.\n";
        cout<<"Please enter your choice:- ";
        cin>>choice;
    
        switch(choice)
        {
            case 1:createNode();
                    break;
            case 2:addNode();
                    break;
            case 3:findNode();
                    break;
            case 4:updateNode();
                    break;
            case 5:mergeNode();
                    break;
            case 6:ascNode();
                    break;
            case 7:descNode();
                    break;
            case 8:rotateNode();
                    break;
            case 9:deleteNode();
                    break;
            //case 10:exit(1);
               //     break;
            default:"\nOops!!!You have entered a wrong Choice,\n Please enter correct choice.\n";
        }   
        break;         
    }

    return 0;
}
