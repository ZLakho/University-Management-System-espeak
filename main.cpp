#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<graphics.h>
#include<Windows.h>
#include<dos.h>

using namespace std;

void homescreen();

//for students_______________!!!!!
string arr[50],arr01[50],arr1[50],arr2[50],arr3[50],arr4[50],arr5[50];    
int total=0;

//for teachers________!!!!!!!!!!!
string array[50],array1[50],array2[50],array3[50],array4[50],array5[50],array6[60];    
int total1=0;

//for others__________!!!!!!!!!!!!
string Array01[50],Array[50],Array1[50],Array2[50],Array3[50],Array4[50],Array5[50];    
int total2=0;


//------------------functions for students


void department_std();
void add_std();
void write();
void view_std();
void search_std();
void update_std();
void delete_std();

void students(){
	system("cls");
	int ch1;
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\tEnter Your Choice"<<endl;
	cout<<"\n\t1.Computer System Engineering"<<endl;
	cout<<"\n\t2.Telecommunictaion Engineering"<<endl;
	cout<<"\n\t3.Chemical Engineering"<<endl;
	cout<<"\n\t4.Electronics Engineering"<<endl;
	cout<<"\n\t5.Metallurgy Engineering"<<endl;
	cout<<"\n\t6.Petroleum And Gas Engineering"<<endl;
	cout<<"\n\t7.Return to Main Menu"<<endl;
    cout<<"\n\tYour Choice: ";
	cin>>ch1;
    switch(ch1)
	{
		case 1:
			 department_std();
			break;
		case 2:
			 department_std();
			break;
		case 3:
			 department_std();
			break;
		case 4:
			 department_std();
			break;
		case 5:
			 department_std();
			break;
		case 6:
			 department_std();
			break;
		case 7:
			homescreen();
			break;	
		Default:
			cout<<"Sorry Invalid Choice";
	};
}

//function end

void department_std(){
	int ch3;
	
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\tEnter your choice: "<<endl;
	cout<<"\n\t1. Add record"<<endl;
	cout<<"\n\t2. View Names"<<endl;
	cout<<"\n\t3. View Information of Individual"<<endl;
	cout<<"\n\t4. Update Record"<<endl;
	cout<<"\n\t5. Delete Record"<<endl;
	cout<<"\n\t6. Return to Main Menu"<<endl;
	cout<<"\n\tYour Choice: ";
	cin>>ch3;
	switch(ch3)
	{
		case 1:
			add_std();
			break;
		case 2:
			view_std();
			break;
		case 3:
			search_std();
			break;
		case 4:
			update_std();
			break;
		case 5:
			delete_std();
			break;
		case 6:
			
			break;
		Default:
			cout<<"Sorry Invalid Choice";
	};
}

//function end

void add_std(){
	system("cls");
	fstream example;
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 ADDING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	int choice1;
	cout<<"How many students's data you want to enter? "<<endl;
	cin>>choice1;
	if(total==0){
	total=total + choice1;
	for(int i=0; i<choice1;i++){
		    cout<<"Enter data of student number"<<i+1<<endl<<endl;
		
		    cout<<"\nEnter First Name of student : "<<endl<<"\t==> ";
			cin>>arr[i];
			
			cout<<"\nEnter Last Name of student : "<<endl<<"\t==> ";
			cin>>arr1[i];
			
			cout<<"\nEnter first Name of student's Father' : "<<endl<<"\t==> ";
			cin>>arr01[i];
			
			cout<<"\nEnter Last Name of student's Father' : "<<endl<<"\t==> ";
			cin>>arr3[i];
			
			cout<<"\nEnter Roll Number of student : "<<endl<<"\t==> ";
			cin>>arr2[i];
			
			cout<<"\nEnter Batch of student : "<<endl<<"\t==> ";
			cin>>arr4[i];
			
			cout<<"\nEnter Contact Number of student : "<<endl<<"\t==> ";
			cin>>arr5[i];
			
			
								}
							
				}
	else{
		for(int i=total; i<total+choice1;i++){
		cout<<"Enter data of student number"<<i+1<<endl<<endl;
		    
			cout<<"\nEnter First Name of student : "<<endl<<"\t==> ";
			cin>>arr[i];
			
			cout<<"\nEnter Last Name of student : "<<endl<<"\t==> ";
			cin>>arr1[i];
			
			cout<<"\nEnter first Name of student's Father' : "<<endl<<"\t==> ";
			cin>>arr01[i];
			
			cout<<"\nEnter Roll Number of student : "<<endl<<"\t==> ";
			cin>>arr2[i];
			
			cout<<"\nEnter Last Name of student's Father' : "<<endl<<"\t==> ";
			cin>>arr3[i];
			
			cout<<"\nEnter Batch of student : "<<endl<<"\t==> ";
			cin>>arr4[i];
			
			cout<<"\nEnter Contact Number of student : "<<endl<<"\t==> ";
			cin>>arr5[i];
								}
		
		total=total+choice1;
		
		
	}	
	cout<<"press Enter to go back....";
		cin.ignore();
		cin.get();								
	department_std();
}

//function end
//void write()
//{
//	ofstream student("view_data.txt",ios::out);
//	{
//		while(cin>>arr>>arr01>>arr1>>arr2>>arr3>>arr4>>arr5)
//		add_std();
//		
//		student(arr<<arr01<<arr1<<arr2<<arr3<<arr4<<arr5);
//		cout<<"File is created ";
//	}
//}

void view_std(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 VIEWING DATA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
		for(int i=0;i<total;i++){
			cout<<"\tData of Student Number "<<i+1<<endl<<endl;
			cout<<"\tName: "<<arr[i]<<" "<<arr1[i]<<endl;
			cout<<"\tFather Name: "<<arr01[i]<<" "<<arr3[i]<<endl;
			cout<<"\tRoll No: "<<arr2[i]<<endl;
			cout<<"\tBatch: "<<arr4[i]<<endl;
			cout<<"\tContact Number: "<<arr5[i]<<endl;
			
		}
		cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

		department_std();
}

//function end

void search_std(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 SEARCHING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	string rollno;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 SEARCHING STUENTS DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	cout<<"Enter Roll No of Student: ";
	cin>>rollno;
	for(int i=0;i<total;i++){
		if(rollno==arr2[i]){
			cout<<"\tName: "<<arr[i]<<" "<<arr1[i]<<endl;
			cout<<"\tFather Name: "<<arr01[i]<<" "<<arr3[i]<<endl;
			cout<<"\tRoll No: "<<arr2[i]<<endl;
			cout<<"\tBatch: "<<arr4[i]<<endl;
			cout<<"\tContact Number: "<<arr5[i]<<endl;
		}
		else
		{
			
		 cout<<"No record found"<<endl;	
			}	
			
		
	}
	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

  department_std();
}

//function end

void update_std(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 UPDATING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
		string rollno;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 UPDATING STUDENTS DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	cout<<"Enter Roll No of Student: ";
	cin>>rollno;
	for(int i=0;i<total;i++){
		if(rollno==arr2[i]){
			cout<<"Previous Data: "<<endl;
			cout<<"\tName: "<<arr[i]<<" "<<arr1[i]<<endl;
			cout<<"\tFather Name: "<<arr01[i]<<" "<<arr3[i]<<endl;
			cout<<"\tRoll No: "<<arr2[i]<<endl;
			cout<<"\tBatch: "<<arr4[i]<<endl;
			cout<<"\tContact Number: "<<arr5[i]<<endl;
			cout<<"\n\tEnter New Data: "<<endl;
			
			cout<<"\n\tEnter First Name of student : "<<endl<<"\t==> ";
			cin>>arr[i];
			
			cout<<"\nEnter Last Name of Student : "<<endl<<"\t==> ";
			cin>>arr1[i];
			
			cout<<"\n\tEnter first Name of student's Father : "<<endl<<"\t==> ";
			cin>>arr01[i];
			
			cout<<"\n\tEnter Name of student's Father : "<<endl<<"\t==> ";
			cin>>arr3[i];
			
			cout<<"\n\tEnter Roll Number of student : "<<endl<<"\t==> ";
			cin>>arr2[i];
			
			cout<<"\n\tEnter Batch of student : "<<endl<<"\t==> ";
			cin>>arr4[i];
			
			cout<<"\n\tEnter Contact Number of student : "<<endl<<"\t==> ";
			cin>>arr5[i];
			
			cout<<"\n******** Updated Sucessfully *********"<<endl;
		
		}
	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

	}
  department_std();
}

//function end

void delete_std(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 DELETING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
    string rollno;
    cout<<"Enter Roll No of student whose data you want to delete: ";
    cin>>rollno;
    for(int i=0;i<total;i++)
{
            if(rollno==arr2[i])
{
                 for(int j=i;j<total;j++)
{
    			arr[i]=arr[j+1];
    			arr1[j]=arr1[j+1];
    			arr01[i]=arr01[j+1];
    			arr2[j]=arr2[j+1];
    			arr3[j]=arr3[j+1];
    			arr4[j]=arr4[j+1];
    			arr5[j]=arr5[j+1];
    		    total--;
				break;
}
//			        if(i==total-1)
                		cout<<"Your Specific Data is Deleted Seccessfully"<<endl;
		

}

              else
{
		 cout<<"No record found"<<endl;	
}		
			
}
    	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

	
	department_std();
}

//function end

//students functions ends here----------------------------!!!!!!

//-------------------------functions for teachers

void add_tcr();
void department_tcr();
void view_tcr();
void view_info_individual_tcr();
void update_tcr();
void delete_tcr();

void teacher(){
	system("cls");
	int ch1;
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\tEnter Your Choice"<<endl;
	cout<<"\n\t1.Computer System Engineering"<<endl;
	cout<<"\n\t2.Telecommunictaion Engineering"<<endl;
	cout<<"\n\t3.Chemical Engineering"<<endl;
	cout<<"\n\t4.Electronics Engineering"<<endl;
	cout<<"\n\t5.Metallurgy Engineering"<<endl;
	cout<<"\n\t6.Petroleum And Gas Engineering"<<endl;
	cout<<"\n\t7.Return to Main Menu"<<endl;
    cout<<"\n\tYour Choice: ";
	cin>>ch1;
    switch(ch1)
	{
		case 1:
			department_tcr();
			break;
		case 2:
			department_tcr();
			break;
			
		case 3:
			department_tcr();
			break;
		case 4:
			department_tcr();
			break;
		case 5:
			department_tcr();
			break;
		case 6:
			department_tcr();
			break;
		case 7:
		    homescreen();
			break;	
		Default:
			cout<<"Sorry Invalid Choice";
	}
}

//function end

void department_tcr(){
	int ch4;
	
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\n\t1.Add names"<<endl;
	cout<<"\n\t2.View Names"<<endl;
	cout<<"\n\t3.View Information of Individual"<<endl;
	cout<<"\n\t4.Update Record"<<endl;
	cout<<"\n\t5.Delete Record"<<endl;
	cout<<"\n\t6.Return to Main Menu"<<endl;
	cout<<"\n\tYour Choice: ";
	cin>>ch4;
	switch(ch4)
	{
	
		case 1:
			add_tcr();
			break;
		case 2:
			view_tcr();
			break;
		case 3:
			view_info_individual_tcr();
			break;
		case 4:
			update_tcr();
			break;
		case 5:
			delete_tcr();
			break;	
		Default:
			cout<<"Sorry Invalid Choice";
	};
}

//function end

void add_tcr()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 ADDING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	int choice2;
	cout<<"How many Teacher's data you want to enter? "<<endl;
	cin>>choice2;
	if(total1==0)
{
	total1=total1 + choice2;
	for(int i=0; i<choice2;i++)
{
		    cout<<"Entering data Of Teacher "<<i+1<<endl;
		    cout<<"\n_______________________________________________________________________"<<endl;
		    
//	     	cout<<"\nEnter First Name of Teacher : "<<endl<<"\t==> ";
			getline(cin,array[i]);
			
			cout<<"\nEnter Name of Teacher : "<<endl<<"\t==> ";
			getline(cin,array1[i]);
			
			cout<<"\nEnter ID : "<<endl<<"\t==> ";
			getline(cin,array2[i]);
			
			cout<<"\nEnter Profession : "<<endl<<"\t==> ";
			getline(cin,array3[i]);
			
			cout<<"\nEnter Salary : "<<endl<<"\t==> ";
			getline(cin,array4[i]);
			
			cout<<"\nEnter Contact Number of Teacher : "<<endl<<"\t==> ";
			getline(cin,array5[i]);
			
			cout<<"\nEnter Other Luxuries : "<<endl<<"\t==> ";
			getline(cin,array6[i]);
			
			
}
							
}
	else
{
		for(int i=total1; i<total1+choice2;i++)
{
		cout<<"Enter data of student number"<<i+1<<endl<<endl;
		
//			cout<<"\nEnter First Name of Teacher : "<<endl<<"\t==> ";
			getline(cin,array[i]);
			
			cout<<"\nEnter Name of Teacher : "<<endl<<"\t==> ";
			getline(cin,array1[i]);
			
			cout<<"\nEnter ID of Teacher : "<<endl<<"\t==> ";
			getline(cin,array2[i]);
			
			cout<<"\nEnter Pofession : "<<endl<<"\t==> ";
			getline(cin,array3[i]);
			
			cout<<"\nEnter Salary : "<<endl<<"\t==> ";
			getline(cin,array4[i]);
			
			cout<<"\nEnter Contact Number of Teacher : "<<endl<<"\t==> ";
			getline(cin,array5[i]);
			
			cout<<"\nEnter Other Luxuries : "<<endl<<"\t==> ";
			getline(cin,array6[i]);
}
		total1=total1+choice2;
								
}	
	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();
		
	department_tcr();
}


void view_tcr(){
		system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
		for(int i=0;i<total1;i++){
			cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 SHOWING STUENTS DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
			cout<<"\tData of Teacher "<<i+1<<endl<<endl;
			cout<<"\tName: "<<array[i]+array1[i]<<endl;
			cout<<"\tId: "<<array2[i]<<endl;
			cout<<"\tProfession: "<<array3[i]<<endl;
			cout<<"\tSalary: "<<array4[i]<<endl;
			cout<<"\tContact Number: "<<array5[i]<<endl;
			cout<<"\tOther Luxuries: "<<array6[i]<<endl;
		
		}
		cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

      department_tcr();
}

//function end

void view_info_individual_tcr(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	string ID;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 SEARCHING TEACHERS DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	cout<<"Enter ID of Student: ";
	cin>>ID;
	for(int i=0;i<total1;i++){
		if(ID==array2[i]){
			cout<<"\tName: "<<array[i]+array1[i]<<endl;
			cout<<"\tID: "<<array2[i]<<endl;
			cout<<"\tProfession: "<<array3[i]<<endl;
			cout<<"\tSalary: "<<array4[i]<<endl;
			cout<<"\tContact Number: "<<array5[i]<<endl;
			cout<<"\tOther Luxuries: "<<array6[i]<<endl;
			
		}
		else
		{
		 cout<<"No record found"<<endl;	
			}	
		
	}
	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

  department_tcr();
}

//function end

void update_tcr(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	string ID;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 UPDATING TEACHERS DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	cout<<"Enter ID of a Teacher: ";
	cin>>ID;
	for(int i=0;i<total1;i++){
		if(ID==array2[i]){
			cout<<"Previous Data: "<<endl;
			cout<<"\tName: "<<array[i]+array1[i]<<endl;
			cout<<"\tID: "<<array2[i]<<endl;
			cout<<"\t Profession : "<<array3[i]<<endl;
			cout<<"\tSalary: "<<array4[i]<<endl;
			cout<<"\tContact Number: "<<array5[i]<<endl;
			cout<<"\tOther Asaishein: "<<array6[i]<<endl;
			cout<<"\n\n______________________________________________________________________________________________________"<<endl;
			cout<<"\n\tEnter New Data: "<<endl;
			cout<<"\nEnter First Name : "<<endl<<"\t==> ";
			getline(cin,array[i]);
			cout<<"\nEnter Last Name : "<<endl<<"\t==>";
			getline(cin,array1[i]);
			cout<<"\n\tEnter ID of Teacher : "<<endl<<"\t==> ";
			getline(cin,array2[i]);
			cout<<"\n\tProfession : "<<endl<<"\t==> ";
			getline(cin,array3[i]);
			cout<<"\n\tEnter Salary : "<<endl<<"\t==> ";
			getline(cin,array4[i]);
			cout<<"\n\tEnter Contact Number of student : "<<endl<<"\t==> ";
			getline(cin,array5[i]);
			cout<<"\n\tEnter Other Luxiries : "<<endl<<"\t==> ";
			getline(cin,array6[i]);
			
			cout<<"\n******** Updated Sucessfully *********"<<endl;
		}
		else
		{
		 cout<<"No record found"<<endl;	
			}	
	      
	}
	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

  department_tcr();
}

//function end

void delete_tcr(){
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 DELETING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
    string id;
    cout<<"Enter ID of Teacher whose data you want to delete: ";
    cin>>id;
    for(int i=0;i<total1;i++)
{
            if(id==array2[i])
{
                 for(int j=i;j<total1;j++)
{
    			array[i]=array[j+1];
    			array1[j]=array1[j+1];
    			array2[j]=array2[j+1];
    			array3[j]=array3[j+1];
    			array4[j]=array4[j+1];
    			array5[j]=array5[j+1];
    		    total1--;
				break;
}
//			        if(i==total-1)
                		cout<<"Your Specific Data is Deleted Seccessfully"<<endl;
		

}

              else
{
		 cout<<"No record found"<<endl;	
}		
			
}
    	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

	
	department_tcr();
}

//function end

//teachers functions end here-----------------------!!!!!

//------------------------others functions starts from here

void EveryOne();
void view_info_individual_others();
void update_others();
void delete_others();
void add_other();


void other(){
	system("cls");
	int ch2;
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl;
	cout<<"\n\n\t\tEnter Your Choice"<<endl;
	cout<<"\n\t1.Guards"<<endl;
	cout<<"\n\t2.Gardeners"<<endl;
	cout<<"\n\t3.Adminitrators"<<endl;
	cout<<"\n\t4.Return to Main Menu"<<endl;    
    cout<<"\n\tYour Choice: ";
	cin>>ch2;
    switch(ch2)
	{
		case 1:
			EveryOne();
			break;
		case 2:
			EveryOne();
			break;
		case 3:
			EveryOne();
			break;
		case 4:
			homescreen();
		    break;	
		Default:
			cout<<"Sorry Invalid Choice";
	};
}


void EveryOne()
{
	int ch4;
	
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\n\t1.Add names"<<endl;
	cout<<"\n\t2.View Information of Individual"<<endl;
	cout<<"\n\t3.Update Record"<<endl;
	cout<<"\n\t4.Delete Record"<<endl;
	cout<<"\n\t5.Return to Main Menu"<<endl;
	cout<<"\n\tYour Choice: ";
	cin>>ch4;
	switch(ch4)
	{
	
		case 1:
			add_other();
			break;
		case 2:
			view_info_individual_others();
			break;
		case 3:
			view_info_individual_others();
			break;
		case 4:
			delete_others();
			break;
		case 5: 
		     other();
			break;	
		Default:
			cout<<"Sorry Invalid Choice";
	};
}

//function end

void add_other()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 ADDING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	int choice3;
	cout<<"How many Member's data you want to enter? "<<endl;
	cin>>choice3;
	if(total2==0){
	total2=total2 + choice3;
	for(int i=0; i<choice3;i++){
		cout<<"Enter data number "<<i+1;
		cout<<endl<<endl;
		
//		    cout<<"\nEnter First Name : "<<endl<<"\t==> ";
			getline(cin,Array[i]);
			
			cout<<"\nEnter Name : "<<endl<<"\t==>";
			getline(cin,Array1[i]);
			
			cout<<"\nEnter ID : "<<endl<<"\t==>";
			getline(cin,Array01[i]);
			
			cout<<"\nEnter Job Title : "<<endl<<"\t==> ";
			getline(cin,Array2[i]);
			
			cout<<"\nEnter Salary : "<<endl<<"\t==> ";
			getline(cin,Array3[i]);
			
			cout<<"\nEnter Contact Number : "<<endl<<"\t==> ";
			getline(cin,Array4[i]);
			
			cout<<"\nEnter Other Luxuries : "<<endl<<"\t==> ";
			getline(cin,Array5[i]);
			
			cout<<"\n_______________________________________________________________________"<<endl;
								}
							
				}
	else{
		for(int i=total2; i<total2+choice3;i++){
		cout<<"Enter data number"<<i+1<<endl<<endl;
		
//			cout<<"\nEnter First Name : "<<endl<<"\t==> ";
			getline(cin,Array[i]);
			
			cout<<"\nEnter Name : "<<endl<<"\t==>";
			getline(cin,Array1[i]);
			
			cout<<"\nEnter ID : "<<endl<<"\t==>";
			getline(cin,Array01[i]);
			
			cout<<"\nEnter Job Title : "<<endl<<"\t==> ";
			cin>>Array2[i];
			
			cout<<"\nEnter Salary : "<<endl<<"\t==> ";
			cin>>Array3[i];
			
			cout<<"\nEnter Contact Number : "<<endl<<"\t==> ";
			cin>>Array4[i];
			
			cout<<"\nEnter Other Luxuries : "<<endl<<"\t==> ";
			getline(cin,Array5[i]);
								}
		total2=total2+choice3;
								
	}	
	cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();
		
	EveryOne();
}

void view_info_individual_others()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	string id;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 SEARCHING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	cout<<"Enter ID: ";
	cin>>id;
	for(int i=0;i<total2;i++){
		if(id==Array01[i]){
			cout<<"\tName: "<<Array[i]+Array1[i]<<endl;
			cout<<"\tID: "<<Array01[i]<<endl;
			cout<<"\tJob Title: "<<Array2[i]<<endl;
			cout<<"\tSalary: "<<Array3[i]<<endl;
			cout<<"\tContact Number: "<<Array4[i]<<endl;
			cout<<"\tOther Luxuries Provided: "<<Array5[i]<<endl;
		}
		
		
		else
		{
			cout<<"No record found.....!!!"<<endl;
		
		}		
	
	}
	cout<<endl<<endl;
		
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();
	EveryOne();
}

void update_others()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 UPDATING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
	string id;
	cout<<"Enter ID: ";
	cin>>id;
	for(int i=0;i<total2;i++){
		if(id==Array01[i]){
			cout<<"Previous Data: "<<endl;
			cout<<"\tName: "<<Array[i]+Array1[i]<<endl;
			cout<<"\tID: "<<Array01[i]<<endl;
			cout<<"\t Job Tile : "<<Array2[i]<<endl;
			cout<<"\tSalary: "<<Array3[i]<<endl;
			cout<<"\tContact Number: "<<Array4[i]<<endl;
			cout<<"\tOther Luxuries Provided: "<<Array5[i]<<endl;
			cout<<"\n\n______________________________________________________________________________________________________"<<endl;
			cout<<"\n\tEnter New Data: "<<endl;
//			cout<<"\nEnter First Name : "<<endl<<"\t==> ";
			getline(cin,Array[i]);
			
			cout<<"\nEnter Name : "<<endl<<"\t==>";
			getline(cin,Array1[i]);
			
			cout<<"\nEnter ID : "<<endl<<"\t==>";
			getline(cin,Array01[i]);
			
			cout<<"\n\tJob Title : "<<endl<<"\t==> ";
			getline(cin,Array2[i]);
			
			cout<<"\n\tEnter Salary : "<<endl<<"\t==> ";
			getline(cin,Array3[i]);
			
			cout<<"\n\tEnter Contact Number of student : "<<endl<<"\t==> ";
			getline(cin,Array4[i]);
			
			cout<<"\n\tEnter Other Luxiries Provided : "<<endl<<"\t==> ";
			getline(cin,Array5[i]);
			
			cout<<"\n******** Updated Sucessfully *********"<<endl;

		}
	      
	}
    cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();

  EveryOne();
}

void delete_others()
{
	system("cls");
	cout<<endl<<endl;
	cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<"\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 DELETING DATA \xB2\xB2\xB2\xB2\xB2"<<endl<<endl;
    string id;
    cout<<"Enter id whose data you want to delete: ";
    cin>>id;
    for(int i=0;i<total2;i++){
    	if(id==Array01[i]){
    		for(int j=i;j<total2;j++){
    			Array[i]=Array[j+1];
    			Array01[i]=Array01[j+1];
    			Array1[j]=Array1[j+1];
    			Array2[j]=Array2[j+1];
    			Array3[j]=Array3[j+1];
    			Array4[j]=Array4[j+1];
    			Array5[j]=Array5[j+1];
			total2--;
		cout<<"Your Specific Data is Deleted Seccessfully"<<endl;
		
			}
			
			
		}
		
		else
		{
		 cout<<"No record found"<<endl;	
			}	
}
	
cout<<endl<<endl;
		cout<<"press Enter to go back....";
		cin.ignore();
        cin.get();
	
	EveryOne();
}

//other functions ends here----------------!!!!!


void homescreen()
{
	system("cls");
      	cout<<endl<<endl;
    int ch,ch1;
	  	
//---------design or work as a logo on top of screen------------!!!!
		  
      cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb UNIVERSITY MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\n\n\n";
      cout<<"\tEnter your Choice"<<endl;                
      cout<<"\n\t1.STUDENTS"<<endl;
      cout<<"\n\t2.TEACHERS"<<endl;
      cout<<"\n\t3.OTHER STAFF"<<endl;
	  cout<<"\n\tYour Choice: ";
	  cin>>ch;
	  switch(ch)
	  {
	  	case 1:
	  		system("cls");
	  		students();
	  		break;
	  	case 2:
	  		system("cls");
			teacher();
	  		break;
	  	case 3:
	  		other();
	  		break;
	  	default:
	  		cout<<"Sorry Invalid choice";
	  }
}

//-------------------main functions starts here
int main(){
     
{
	
	
	system("cls");
	
	   cout<<endl<<endl;
      cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl;
      cout<<"\t\t\xdb                                                                              \xdb"<<endl;
      cout<<"\t\t\xdb                              W E L C O M E                                   \xdb"<<endl;
      cout<<"\t\t\xdb                                                                              \xdb"<<endl;
      cout<<"\t\t\xdb                                   T O                                        \xdb"<<endl;
      cout<<"\t\t\xdb                                                                              \xdb"<<endl;
      cout<<"\t\t\xdb                 U N I V E R S I T Y   M A N A G E M E N T                    \xdb"<<endl;
      cout<<"\t\t\xdb                                                                              \xdb"<<endl;
      cout<<"\t\t\xdb                                S Y S T E M                                   \xdb"<<endl;
      cout<<"\t\t\xdb                                                                              \xdb"<<endl;
      cout<<"\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
	  cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl;
                string phrase = " WELCOME To University management system";
                string cmnd = "espeak \"" + phrase + "\"";
                const char *charCommand = cmnd.c_str();
                system(charCommand);
      delay(40);
    
      P:
//      	file();	
	  
      	homescreen();
	  
	  goto P;

	
	return 0;
	
}


}



	

