#include<iostream>
using namespace std;
int main(){
	int id[100];
	string name[100];
	string author[100];
	bool issued[100] = {false};
	int count = 0;
	int choice;
	do{
		cout<<"               =======  LIBRARY MANGEMENT SYSTEM  ======="<<endl<<endl;
		cout<<"1. ADD BOOK"<<endl;
	    cout<<"2. DISPLAY BOOK"<<endl;
	    cout<<"3. SEARCH BOOK"<<endl;
	    cout<<"4. UPDATE BOOK"<<endl;
	    cout<<"5. DELETE BOOK"<<endl;
	    cout<<"6. ISSUE BOOK"<<endl;
	    cout<<"7. RETURN BOOK"<<endl;
	    cout<<"8. EXIT"<<endl;
	    cout<<"\nEnter your choice : ";
	    cin>>choice;
	    switch(choice){
	    	case 1 :
	    	if(count >=100){
	    		cout<<"LIBARAY FULL";
	    	}
	    	else
	    	{
	    	cout<<"Enter Book Id : ";
	    	cin>>id[count];
	    	cin.ignore(1000,'\n');
	    	cout<<"Enter book Name : ";
	    	getline(cin,name[count]);
	    	cout<<"Enter author Name : ";
	    	getline(cin,author[count]);
	    	count = count + 1;
	    	cout<<endl;
	    	cout<<"\nADD BOOK SUCCESSFULLY"<<endl;
	    	}
	    	break;
	    	
	    	case 2 : 
	    	if(count==0){
	    	cout<<"No Book Available!";
	    	}
	    	else
	    	{
	    		for(int i = 0 ; i<count ; i++){
	    			cout<<"\nBook id = "<<id[i];
	    			cout<<"\nBook Name = "<<name[i];
	    			cout<<"\nAuthor Name = "<<author[i];
	    			if(issued[i] == true){
	    			cout<<"\nStatus = Issued";	
	    			}
	    			else
	    			{
	    			cout<<"\nStatus = Available";
	    			}
	    		}
	    	}
	    	cout<<"\n\nDISPLAY BOOK SUCCESSFULLY"<<endl;
	    	break;
	    	
	    	case 3 : {
	    	int searchid;
	    	bool found = false;
	    	cout<<"Enter a book ID To Search : ";
	    	cin>>searchid;
	    	for(int i = 0 ; i<count ; i++){
	    	 if(id[i] == searchid){
	    	 	cout<<"\nBook is found!"<<endl;
	    	 	cout<<"\nBook ID = "<<id[i];
	    	 	cout<<"\nBook Name = "<<name[i];
	    	 	cout<<"\nBook Author Name = "<<author[i];
	    	 	cout<<endl;
	    	 	found =true;
	    	 	break;
	    	 }
	    	}
	    	if(found == false){
	    		cout<<"Book Not available!";
	    		cout<<endl;
	    	}
	    	    	   	 cout<<"SEARCH BOOK SUCCESSFULLY"<<endl;
	    	break;
	    	}


	    	 
	    	 case 4 :
	    	 {
	    	 int updateid;
	    	 bool found = false;
	    	 cout<<"Enter a Book ID to Update : ";
	    	 cin>>updateid;
	    	 for(int i = 0 ; i<count ; i++){
	    	 	if(id[i]==updateid){
	    	 		cout<<"\nBook is found!\n";
	    	 		cin.ignore(1000,'\n');
	    	 		cout<<"Enter New Book Name :  ";
	    	 		getline(cin,name[i]);
	    	 		cout<<"Enter New Author Name : ";
	    	 		getline(cin,author[i]);
	    	 		found = true;
	    	 
	    	 		break;
	    	 	}
	    	 }
	    	 if (found==false){
	    	 	cout<<"Book Not found!";
	    	 }
	    	     	 cout<<"UPDATE BOOK SUCCESSFULLY"<<endl;
	    	 break;
	    	 }
	    	 
	    	 case 5 :
	    	{
    int deleteid;
    bool found = false;

    cout<<"Enter Book ID to Delete: ";
    cin>>deleteid;

    for(int i = 0; i < count; i++){
        if(id[i] == deleteid){

            for(int j = i; j < count-1; j++){
                id[j] = id[j+1];
                name[j] = name[j+1];
                author[j] = author[j+1];
                issued[j] = issued[j+1];
            }

            count--;
            found = true;
            
            break;
        }
    }
 if(found == true){
 	cout<<"BOOK DELETE SUCCESSFULLY!"<<endl;
 }
 else
 { 
 cout<<"BOOK NOT FOUND!"<<endl;
 }

    break;
}

	    	 
	    	 
	    	 case 6 :
	    	  {
    int issueid;
    bool found = false;

    cout<<"Enter Book ID to Issue: ";
    cin>>issueid;

    for(int i = 0; i < count; i++){
        if(id[i] == issueid){
            found = true;

            if(issued[i] == false){
                issued[i] = true;
                    cout<<"Book Issued Successfully!"<<endl;
            }
            else{
                cout<<"Book Already Issued!";
            }

            break;
        }
    }

    if(found == false){
        cout<<"Book Not Found!";
    }

    break;
}
	  
case 7: {
    int returnid;
    bool found = false;

    cout<<"Enter Book ID To Return: ";
    cin>>returnid;

    for(int i = 0; i < count; i++){
        if(id[i] == returnid){
            found = true;

            if(issued[i] == true){
                issued[i] = false;
            }
            else{
                cout<<"BOOK WAS NOT ISSUED!";
            }

            break;
        }
    }

    if(found == false){
        cout<<"BOOK NOT FOUND!";
    }
                    cout<<"BOOK RETURNED SUCCESSFULLY!"<<endl;

    break;
}
			
			case 8:
    cout<<"THANK YOU FOR USING LIBRARY SYSTEM!"<<endl;
    break;
	    	 
	    	 default : 
	    	 cout<<"invaild choice ";
	    	 break;
	    }
	} while(choice != 8);
	return 0;
}