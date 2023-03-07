//Trying hard is the only way to have you My thicc lil' Monster :""
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number_of_subjects;
    string Rate;
    float GPA_Points = 0;
    float GPA_of_Single_Subject;
    float GPA_of_Semster = 0;
    cout<<"Welcome to AOU GPA Calculator"<<endl;
    cout<<"_____________________________"<<endl;
    cout<<"How many Subjects you had this semster ?"<<endl;
    cin>>number_of_subjects;
    string Subject_name[number_of_subjects];
    cout<<"Good, Now enter the name of the Subjects ^_^"<<endl;
    for(int i=0 ; i<=number_of_subjects-1 ; i++){
        cin>>Subject_name[i];
    }
    cout<<"_____________________________"<<endl;
    cout<<"Great!\n";
    string TMA_MARK[number_of_subjects], MTA_MARK[number_of_subjects], Final_MARK[number_of_subjects], Number_of_Hours[number_of_subjects];
    for(int j=0 ; j<=number_of_subjects-1 ; j++){         //Take user input.
        cout<<Subject_name[j]<<" TMA -> ";
        cin>>TMA_MARK[j];
        cout<<Subject_name[j]<<" MTA -> ";
        cin>>MTA_MARK[j];
        cout<<Subject_name[j]<<" Final -> ";
        cin>>Final_MARK[j];
        cout<<Subject_name[j]<<" Number of Hours -> ";
        cin>>Number_of_Hours[j];
        cout<<"_____________________________"<<endl;
    }
    cout<<"_____________________________"<<endl;
    string TMA_MARKS_STRINGS, MTA_MARKS_STRINGS, Final_MARKS_STRINGS, Number_of_Hours_STRINGS;
    float TMA_MARKS_INTEGARS, MTA_MARKS_INTEGARS, Final_MARKS_INTEGARS;
    int Number_of_Hours_INTEGARS;
    int Total_Number_of_Hours = 0;
    float Total_TMA_Marks = 0;
    float Total_MTA_Marks = 0;
    float Total_Final_Marks = 0;
    float Total_Marks_of_Single_Subject;
    for(int k=0 ; k<=number_of_subjects-1 ; k++){               
        TMA_MARKS_STRINGS = TMA_MARK[k];
        TMA_MARKS_INTEGARS = stof(TMA_MARKS_STRINGS);         //Converting from string to float.
        Total_TMA_Marks += TMA_MARKS_INTEGARS;                //Adding all TMA Marks.
        //---------------------------------------------------
        MTA_MARKS_STRINGS = MTA_MARK[k];
        MTA_MARKS_INTEGARS = stof(MTA_MARKS_STRINGS);        //Converting from string to float.
        Total_MTA_Marks += MTA_MARKS_INTEGARS;               //Adding all MTA Marks.
        //---------------------------------------------------
        Final_MARKS_STRINGS = Final_MARK[k];
        Final_MARKS_INTEGARS = stof(Final_MARKS_STRINGS);    //Converting from string to float.
        Total_Final_Marks += Final_MARKS_INTEGARS;           //Adding all Final Marks.
        //---------------------------------------------------
        Number_of_Hours_STRINGS = Number_of_Hours[k];
        Number_of_Hours_INTEGARS = stoi(Number_of_Hours_STRINGS);    //Converting from string to integar.
        Total_Number_of_Hours += Number_of_Hours_INTEGARS;           //Adding all Hours of Subjects.
        //---------------------------------------------------
        Total_Marks_of_Single_Subject = TMA_MARKS_INTEGARS + MTA_MARKS_INTEGARS+ Final_MARKS_INTEGARS;   //Adding all Marks of Single Subject.
        if(Total_Marks_of_Single_Subject <= 100.00 && Total_Marks_of_Single_Subject >= 90.00){
            Rate = "A";
            GPA_Points = 4.00;
        }
        else if(Total_Marks_of_Single_Subject <= 89.99 && Total_Marks_of_Single_Subject >= 82.00){
            Rate = "B+";
            GPA_Points = 3.50;
        }
        else if(Total_Marks_of_Single_Subject <= 81.99 && Total_Marks_of_Single_Subject >= 74.00){       
            Rate = "B";
            GPA_Points = 3.00;
        }
        else if(Total_Marks_of_Single_Subject <= 73.99 && Total_Marks_of_Single_Subject >= 66.00){
            Rate = "C+";
            GPA_Points = 2.50;
        }
        else if(Total_Marks_of_Single_Subject <= 65.99 && Total_Marks_of_Single_Subject >= 58.00){
            Rate = "C";
            GPA_Points = 2.00;
        }
        else if(Total_Marks_of_Single_Subject <= 57.99 && Total_Marks_of_Single_Subject >= 50.00){
            Rate = "D";
            GPA_Points = 1.50;
        }
        else if(Total_Marks_of_Single_Subject <= 49.99 && Total_Marks_of_Single_Subject >= 0.00){
            Rate = "Fail";
            GPA_Points = 0.00;
        }
        cout<<"Your Marks in "<<Subject_name[k]<<" are : "<<Total_Marks_of_Single_Subject<<"   ("<<Rate<<") Your GPA: "<<GPA_Points<<endl;
        GPA_of_Single_Subject = Number_of_Hours_INTEGARS * GPA_Points;        //Getting Total GPA of Single Subject.
        GPA_of_Semster += GPA_of_Single_Subject;                              //Getting Total GPA of The Whole Semster.
        cout<<"_____________________________"<<endl; 
    }
    cout<<"Your total Marks in the semster are: "<<Total_TMA_Marks + Total_MTA_Marks + Total_Final_Marks<<"\n"<<endl;
    cout<<"Your GPA in this semster is: "<<GPA_of_Semster / Total_Number_of_Hours<<endl;
}
