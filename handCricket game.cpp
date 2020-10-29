// Hand cricket game using C++

#include<iostream>
#include<cstdlib>
using namespace std;

int target=0;
char your_name[30];
int bat();
int ball();

int main(){
    
    cout<<"Enter your name: \n"<<endl;
    cin>>your_name;
    cout<<"Let's begin the game"<<endl;
    cout<<your_name<<" VS PC \n";
    cout<<"---------------------------------- \n";
    int t,cs,uc,cc;
    cout<<"Enter your choice \n 1:For Head \n 2:For Tail \n";
    cin>>t;
    while(t<=0 || t>=3)
    {
        cout<<"Invalid option \n";
        cout<<"Enter your choice \n 1:For Head \n 2:For Tail \n";
        cin>>t;
        continue;        
    }
    cs=((rand()%2)+1);
    if (t==cs)
    {
        cout<<your_name<<" won the toss \n";
        cout<<"choose 1: to bat first \n choose 2: to ball first \n";
        cin>>uc;
        while(uc<=0 || uc>=3){
            cout<<"There is no such option  \n";
           cout<<"choose 1: to bat first \n choose 2: to ball first \n";
           cin>>uc;
           continue;
        }
        if(uc==1){
            int ru,rp;
            cout<<your_name<<" choose to bat first \n";
            ru=bat();
            cout<<your_name<<" scored "<<ru<<" runs. \n";
            cout<<"Now it's PC's turn! \n";
            target=ru+1;
            cout<<"----------------- \n";
            cout<<"Target: "<<target<<"\n";
            cout<<"----------------- \n";
            rp=ball();

            if(ru==rp){
                cout<<"It's a tie between "<<your_name<<" and PC \n";
            }
            else if(ru>rp){
                cout<<"Congratulations..... "<<your_name<<"has won the match!! \n ";
            }
            else
            {
                cout<<"Oops !!"<<your_name<<" had lost the game \n Better luck next time. \n";
        
            }
        }
        else if(uc==2){
            int ru,rp;
            cout<<your_name<<" choose to ball first \n";
            rp=ball();
            cout<<"PC scored"<<rp<<" runs \n Now it's "<<your_name<<"'s turn.";
            target=rp+1;
            cout<<"----------------- \n";
            cout<<"Target: "<<target<<"\n";
            cout<<"----------------- \n";
            ru=bat();
            if(ru==rp){
                cout<<"It's a tie between "<<your_name<<" and PC \n";
            }
            else if(ru>rp){
                cout<<"Congratulations ....."<<your_name<<"has won the match!! \n play again \n";
            }
            else
            {
                cout<<"Oops !!"<<your_name<<" had lost the game \n Better luck next time. \n";
            }
        }
    }
    else
    {
        cout<<"PC won the toss \n";
        cc=((rand()%2)+1);
        if(cc==1){
            int ru,rp;
            cout<<"PC choose to bat first \n";
            rp=ball();
            cout<<"PC scored "<<rp<<" runs. \n Now it's "<<your_name<<"'s turn! \n";
            target=rp+1;
            cout<<"----------------- \n";
            cout<<"Target: "<<target<<"\n";
            cout<<"----------------- \n";
            ru=bat();
            
            if(ru==rp){
                cout<<"It's a tie between "<<your_name<<" and PC \n";
            }
            else if(ru>rp){
                cout<<your_name<<" won the match!! \n play again \n";
            }
            else
            {
                cout<<your_name<<" lost the game \n Better luck next time. \n";
        
            }
        }
        else if(cc==2){
            int ru,rp;
            cout<<"PC choose to ball first \n";
            ru=bat();
            cout<<your_name<<" scored "<<ru<<" runs \n Now it's PC's turn! \n";
            target=ru+1;
            cout<<"----------------- \n";
            cout<<"Target: "<<target<<"\n";
            cout<<"----------------- \n";
            rp=ball();
            if(ru==rp){
                cout<<"It's a tie between "<<your_name<<" and PC \n";
            }
            else if(ru>rp){
                cout<<your_name<<" won the match!! \n play again \n";
            }
            else
            {
                cout<<your_name<<" lose the game \n Better luck next time. \n";
        
            }
        }
    }  
    getchar(); 
    return 0;
}
int bat(){
    int cru=0,out=0;
    if (target==0)
    {
        while (out==0)
        {
            int ui,pi=((rand()%6)+1);
            cout<<your_name<<"-Score: "<<cru<<" \n Enter your choice: in 1 to 6 \n";
            cin>>ui;
            cout<<"PC choose "<<pi<<"\n";
            while(ui<=0 || ui>=7){
                 cout<<"You can't score more than 6 runs \n";
                 cout<<your_name<<"-Score: "<<cru<<" \n Enter your choice: in 1 to 6 \n";
                 cin>>ui;
                 cout<<"PC choose "<<pi<<"\n";
                  
                continue;
            }
            if(ui==pi){
                cout<<"Wicket!!! \n";
                out++;
            }
            else{
                cru+=ui;
            }
        }
    }
    else{
        while(cru<=target && out==0){
           int ui,pi=((rand()%6)+1);
           cout<<your_name<<"-Score: "<<cru<<" \n Enter your choice: in 1 to 6 \n";
           cin>>ui;
           cout<<"PC choose "<<pi<<"\n";
            while(ui<=0 || ui>=7){
                 cout<<"You can't score more than 6 runs \n";
                 cout<<your_name<<"-Score: "<<cru<<" \n Enter your choice: in 1 to 6 \n";
                 cin>>ui;
                 cout<<"PC choose "<<pi<<"\n";
                  
                continue;
            }
            if(ui==pi){
                cout<<"Wicket!!! \n";
                out++;
            }
            else{
                cru+=ui;
            }
        }
    }
    return cru;
}
int ball(){
    int crp=0,out=0;
    if(target==0){
        while (out==0)
        {
            int ui,pi=((rand()%6)+1);
            cout<<"PC-Score: "<<crp<<" \n Enter your choice: in 1 to 6 \n";
            cin>>ui;
            cout<<"PC choose "<<pi<<"\n";
            while(ui<=0 || ui>=7){
                 cout<<"You can't bowl more than 6 runs \n";
                 cout<<"PC-Score: "<<crp<<" \n Enter your choice: in 1 to 6 \n";
                 cin>>ui;
                 cout<<"PC choose "<<pi<<"\n";
                  
                continue;
            }
            if(ui==pi){
                cout<<"Wicket!!! \n";
                out++;
            }
            else{
                crp+=pi;
            }
        }
    }
    else{
        while (crp<=target && out==0)
        {
            int ui,pi=((rand()%6)+1);
            cout<<"PC-Score: "<<crp<<" \n Enter your choice: in 1 to 6 \n";
            cin>>ui;
            cout<<"PC choose "<<pi<<"\n";
            while(ui<=0 || ui>=7){
                
                 cout<<"You can't bowl more than 6 runs \n";
                 cout<<"PC-Score: "<<crp<<" \n Enter your choice: in 1 to 6 \n";
                 cin>>ui;
                 cout<<"PC choose "<<pi<<"\n";
                  
                continue;
            }
            if(ui==pi){
                cout<<"Wicket!!! \n";
                out++;
            }
            else{
                crp+=pi;
            }   
        }
    }
    return crp;
}
