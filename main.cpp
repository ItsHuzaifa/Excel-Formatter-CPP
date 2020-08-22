#include <iostream>
#include <fstream>
using namespace std;

void readCSV(string file_to_read){
      ifstream temp_file;
    temp_file.open(file_to_read);
    while(temp_file.good()){
        string line;
        getline(temp_file,line,'.');
        cout<<line;
    }
    temp_file.close();
}
void writeCSV(string file_to_write){
    ofstream temp_file;
    char data_to_write[100];
    cout<<"\nEnter data to be written on file : ";
    cin.getline(data_to_write,sizeof(data_to_write),'.');

    try{
        temp_file.open(file_to_write);
        temp_file<<data_to_write<<endl;
    }catch(exception e){
        cout<<"Error Opening file";
    }
    temp_file.close();
}
int main()
{
    int choice = 0;
    string file_to_read = "",file_to_write;
    while(1){
    cout<<"1-Read From CSV\n2-Write TO CSV\n3-Exit\n";
    cout<<"Enter your choice of operation : ";
    cin>>choice;

    switch(choice){
    case 1:cout<<"\nEnter file name : ";
            cin>>file_to_read;
            readCSV(file_to_read);
            break;
    case 2:cout<<"\nEnter file name : ";
            cin>>file_to_write;
            writeCSV(file_to_write);
            break;
    case 3:exit(0);
    default:cout<<"Default block !";
    }
    }
    return 0;
}
