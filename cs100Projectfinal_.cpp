#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;
 string subject,body,choice;
  char send;
string EInbox_24100003="",DInbox_24100003="",Inbox_24100003="",EInbox_786453="",DInbox_786453="",Inbox_786453="",EInbox_24100174="",DInbox_24100174="",Inbox_24100174="",CInbox_24100003="",CInbox_24100174="",CInbox_786453="";
string AssignmentsFolder24100003="Title : The Waziristan Human Traficking case \n Assignment details: There are reports that there are several terrorist agencies working on the waziristan border of Pakistan. These organizations have successfully smuggled 275 Men and 291 Women and 63 kids successfully. You are to carry out an operation to and wipe these organizations in Waziristan.You are authorized for any and all kinds of Millitary Assistance.";
string AssignmentsFolder24100174="Title : Montenegro Assassination case \n Assingment details: Amidst the fall of governement, there have been several leaders of the parliament assassinated. You are supposed to track down the assassins and interrogate in order to find the orgin of these attacks. ";
string AssignmentsFolder786453=" Title : The Ottawa drug case \n Assignment details : There are reports that a Canadian gang has its eyes on the field trip of the West Ottawa Highschool to Detroit. They plan to pay students to do a cocaine drop off.You have to reach on border and do a search of every passenger on the school bus.";
string C1name = "NO Name",C1nickname = "The shovelman",C1height ="6 feet 2 inches",C1title = "The tampered necropolis",C1further_details = "Major details of the case are not known however, the watchman of a nearby building has reported that a shovelman has been digging graves in the middle of the night, on visit several graves were found opened.";
string C1case_reference_no ="1",C1last_seen_date= "1-2-2019",C1last_seen_place= "Nuremberg",C2last_seen_place = "Bolan Pass",C2last_seen_date = "12-11-2013";
string C2name= "Zeeshan Khokhar",C2nickname = "Shani",C2height ="5 feet  7 inches",C2title = "Human Traficking",C2further_details = "A farmer in Bhawalpur, having closed ties with terrorist organizations, Zeeshan Khokhar has exiled himself to Baghdad but his smuggling network is still strong in the Pak-Afghan Border.",C2case_reference_no ="2";
string C3name= "William Jefferies";
string C3nickname = "WEEDO";
string C3last_seen_place = "Suburban Mississpi";
string C3last_seen_date = "2-12-2020";
string C3height ="5 feet 9 inches";
string C3title = "The ottawan drug ring";
string C3further_details = "William Jefferies aka Weedo was a student of University of British Islands. He studied Computer sciences from there and now is the leader of the Ottawan drug ring.He is known to transfer drugs accross the border through families going to the United States.";
string C3case_reference_no ="3";
string C4name= "Ariana Venti";
string C4nickname = "Venti";
string C4last_seen_place = "Paris";
string C4last_seen_date = "1-7-2018";
string C4height ="5 feet 4 inches";
string C4title = "The Montenegro Assassination";
string C4further_details = "Ariana Venti, a known hitwoman usually hired by Anti Terrorist organizations to assassinate Terrorists is a prime suspect of the Montenegro Assasination case. She was ID'd by the Airport staff of the Montenegro Int'l Airport during the week of Assassinations.";
string C4case_reference_no ="4";
string C1MO ="The shovelman operates during night. As the bodies are difficult to transport, He has a truck on standby to transport hidden.";
string C2MO ="Zeeshan Khokar's orgnization members are known to include mainstream shopkeepers into their business. The shopkeepers store the people in their shops, they are tranported in the trucks full of merchandize across the border. ";
string C3MO = " William Jefferies network is well supported in America as well as Canada. His ring members have contacts with students in every school and even bus drivers who facilitate the drop offs.";
string C4MO = "Ariana Venti has had Millitary training from several of the United States Millitary Generals. She has changed her strategy with time but in her previous assassination, she was a member of the security team of the assassinated person.";
int countwords(string dt){ 
    int count = 0;
    int words =0;
    while (count<dt.length())
    {
        if(dt.substr(count,1)==" ")
        words++;
        count++;
}
    words++;//since there will be one more word than n
    return words;}
    void arrofLetters(string dt,int Arr[],int size)
    {
      int count=0;
    for(int i=0;i<size;i++)
    {Arr[i]=0;
      while(dt[count]!=' '&&count<dt.length())
      {Arr[i]=Arr[i]+1;
      count++;}
      count++;
    }
    }
   void fillarray(char Arrdt[][15],int size ,string dt){//fills a 2d character Array with words in each row and letters in each column. 
int dt_length=dt.length();
int count = 0;
int i=0;
while(i<=size&&count<dt_length)
{int j=0;
while(dt[count]!=' '&&j<15)
  {Arrdt[i][j]=dt[count];
  count++;
  j++;}
  while(j<15){
    Arrdt[i][j]=' ';
    j++;
  }
  i++;
  count++;
}}
string ENcrypt105(string dt)
{//gathering data and forming necessary arrays
  int length = dt.length();
   const int wordcount=countwords(dt);
   char decArr[wordcount][15];
   fillarray(decArr,wordcount,dt);
   int letFW[wordcount];
   arrofLetters(dt,letFW,wordcount);
//looping to encrypt
char encryptArray[wordcount][15];
for(int i = 0;i<wordcount;i++)
{int j=0;
  while(decArr[i][j]!=' '&&j<15)
  {
    encryptArray[i][j]=decArr[i][j]-letFW[i];
    j++;
  }
while(j<15){
    encryptArray[i][j]=' ';
    j++;
  }
}
//displaying the encrypted array
string decrTxt;
for(int k=0;k<wordcount;k++)
{
  int count=0;
  while(encryptArray[k][count]!=' '&&count<letFW[k])
  {decrTxt=decrTxt+encryptArray[k][count];
  count++;}
  decrTxt=decrTxt+" ";
  while(count<15){
  count++;}
}
return decrTxt;
}
string decryPT112(string dt)
{//gathering data and forming necessary arrays
  int length = dt.length();
   const int wordcount=countwords(dt);
   char decArr[wordcount][15];
   fillarray(decArr,wordcount,dt);
   int letFW[wordcount];
   arrofLetters(dt,letFW,wordcount);
//looping to encrypt
char encryptArray[wordcount][15];
for(int i = 0;i<wordcount;i++)
{int j=0;
  while(decArr[i][j]!=' '&&j<15)
  {
    encryptArray[i][j]=decArr[i][j]+letFW[i];
    j++;
  }
while(j<15){
    encryptArray[i][j]=' ';
    j++;
  }
}
//putting the array into a string
string decrTxt;
for(int k=0;k<wordcount;k++)
{
  int count=0;
  while(encryptArray[k][count]!=' '&&count<letFW[k])
  {decrTxt=decrTxt+encryptArray[k][count];
  count++;}
  decrTxt=decrTxt+" ";
  while(count<15){
  count++;}
}
return decrTxt;
}
void encrypt(){
  string dt;
  cout<<"Enter text to encrypt"<<endl;
  getline(cin,dt);
  string encryptTXT=ENcrypt105(dt);
  cout<<encryptTXT;
}
void decrypt(){
   string dt;
  cout<<"Enter text to decrypt"<<endl;
  getline(cin,dt);
  string decryptTXT=decryPT112(dt);
  cout<<decryptTXT;
}
void compose(string &id){
 
    int address=0;
    cout<<"ENTER THE BADGE NUMBER OF THE AGENT YOU WANT TO CONTACT"<<endl;
      cout<<"To :";
      string sender=id;
      //cin.ignore();
    cin>>address;//address of the reciever
    
    cout<<endl<<"subject: ";//subject of the message
    cin.ignore();
    getline(cin,subject);
    
     cout<<endl<<"body: ";//body of the message
     //cin.ignore();
     getline(cin,body);
    
    cout<<endl<<"do you want to encrypt your message?"<<endl;
    // cin.ignore();
     cin>>choice;
     
    if(choice=="no"||choice=="NO"||choice=="No"){
    cout<<"To send the message press 's' ";
    //cin.ignore();
    cin>>send;
    
    //cin.ignore('\n');
    if (send=='s')
    {if(address==24100003)//throwing messages into ibomxes that are global variables
        {Inbox_24100003=Inbox_24100003+"\n"+sender+"\n"+subject+"\n"+body;}
        else if(address==786453)
        {Inbox_786453=Inbox_786453+"\n"+sender+"\n"+subject+"\n"+body;}
        else if(address==24100174)
        {Inbox_24100174=Inbox_24100174+"\n"+sender+"\n"+subject+"\n"+body;}
        else
        cout<<"enter a valid badge number";}}   
    else if(choice=="yes"||choice=="YES"||choice=="Yes")
    {CInbox_24100003=CInbox_24100003+"\n"+sender+"\n"+subject+"\n"+body;
     CInbox_786453=CInbox_786453+"\n"+sender+"\n"+subject+"\n"+body;
     CInbox_24100174=CInbox_24100174+"\n"+sender+"\n"+subject+"\n"+body;
      sender=ENcrypt105(sender);
    subject=ENcrypt105(subject);
    body=ENcrypt105(body);

    cout<<"\nTo send the message press 's' ";
    //cin.ignore();
    cin>>send;
    
    if (send=='s')
    {
      
        if(address==24100003)
        {EInbox_24100003=EInbox_24100003+"\n"+sender+"\n"+subject+"\n"+body;}
        else if(address==786453)
        {EInbox_786453=EInbox_786453+"\n"+sender+"\n"+subject+"\n"+body;}
        else if(address==24100174)
        {EInbox_24100174=EInbox_24100174+"\n"+sender+"\n"+subject+"\n"+body;}
        else
        cout<<"enter a valid badge number";}
 }   
}
void Inbox(string &id){
  if(id=="24100003"){
    cout<<"Encrypted Inbox: "<<endl;
    cout<<EInbox_24100003<<endl;
    cout<<"do you want to decrypt the inbox?";
    string choice;
    cin>>choice;
    if(choice=="yes"||"Yes"||"Yes")
    {cout<<CInbox_24100003;}
    cout<<Inbox_24100003<<endl;}
    else if(id=="24100174"){
    cout<<"Encrypted Inbox: "<<endl;
    cout<<EInbox_24100174<<endl;
    cout<<"do you want to decrypt the inbox?";
    string choice;
    cin>>choice;
    if(choice=="yes"||"Yes"||"Yes")
    {cout<<CInbox_24100174<<endl;}
    cout<<Inbox_24100174;}
    else if(id=="786453"){
    cout<<"Encrypted Inbox: "<<endl;
    cout<<EInbox_786453<<endl;
    cout<<"do you want to decrypt the inbox?";
    string choice;
    cin>>choice;
    if(choice=="yes"||"Yes"||"Yes")
    {cout<<CInbox_786453;}
    cout<<Inbox_786453;}}
void viewAssignments(string &id){
cout<<"Your current Assignments are:";
if(id=="24100003")
cout<<AssignmentsFolder24100003;
else if(id=="24100174")
cout<<AssignmentsFolder24100174;
else if(id=="786453")
cout<<AssignmentsFolder786453;
}
 void updateAssignments(string &id,string &adminId){
     int address;
     string  Assignment;
    if(id!=adminId)
   
    {cout<<"****ACCESS DENIED****\n function can only be used by the administrator";
    return;}
    else
    { cout<<"Enter the badge number of the agent to Assign tasks\n";
    cin>>address;
    cout<<"Enter new Assignment :";
    cin.ignore();
    getline(cin,Assignment);
    if(address==24100003)
    {AssignmentsFolder24100003=Assignment+"\n"+AssignmentsFolder24100003;}
    else if(address==24100174)
    {AssignmentsFolder24100174=Assignment+"\n"+AssignmentsFolder24100174; }
    else if(address==786453)
     {AssignmentsFolder786453=Assignment+"\n"+AssignmentsFolder786453;}
   }}
void criminals1()
{cout << "Name: "<< C1name << endl;
  cout << "Case refernce no: " << C1case_reference_no << endl;
  cout << "Title of case: "<< C1title<< endl;
  cout << "Height: " << C1height << endl;
  cout<<"MO: "<<C1MO<<endl;
  cout << "Last seen place: " << C1last_seen_place << endl;
  cout << "Last seen time: " << C1last_seen_date << endl;
  cout << "Further details: " << C1further_details << endl;
}
void criminals2()
{
  cout << "Name: "<< C2name << endl;
  cout << "Case refernce no: " << C2case_reference_no << endl;
  cout << "Title of case: "<< C2title<< endl;
  cout << "Height: " << C2height << endl;
  cout<<"MO: "<<C2MO<<endl;
  cout << "Last seen place: " << C2last_seen_place << endl;
  cout << "Last seen time: " << C2last_seen_date << endl;
  cout << "Further details: " << C2further_details << endl;}
  void criminals3()
  {
  cout << "Name: "<< C3name << endl;
  cout << "Case refernce no: " << C3case_reference_no << endl;
  cout << "Title of case: "<< C3title<< endl;
  cout << "Height: " << C3height << endl;
  cout<<"MO: "<<C3MO<<endl;
  cout << "Last seen place: " << C3last_seen_place << endl;
  cout << "Last seen time: " << C3last_seen_date << endl;
  cout << "Further details: " << C3further_details << endl;
  }
  void criminals4()
  {
     
  cout << "Name: "<< C4name << endl;
  cout << "Case refernce no: " << C4case_reference_no << endl;
  cout << "Title of case: "<< C4title<< endl;
  cout << "Height: " << C4height << endl;
  cout<<"MO: "<<C4MO<<endl;
  cout << "Last seen: " <<C4last_seen_date << endl;
  cout << "Last location: " << C4last_seen_place << endl;
  cout << "Further details: " <<C4further_details << endl;
  }
  void updating_criminal_database()
{string search_no;
    cout << " Enter Criminal first name in capital letters or case refernce no."<< endl;
    cin >> search_no;
    if(search_no == "NONAME"  || search_no =="ZEESHAN" ||  search_no== "1"   ||  search_no=="2" || search_no=="WILLIAM" || search_no=="3"||search_no=="ARIANA"||search_no=="4")
      {
        if(search_no =="NONAME" || search_no=="1")
        {cout<<"\n\n";
        criminals1();
        cout << "Where was the criminal last seen ";
          cin.ignore();
       getline(cin,C1last_seen_place);
      cout << "When was the criminal last seen ";
       getline(cin,C1last_seen_date);
       cout<<"\n\n";
     criminals1();}
    if(search_no== "ZEESHAN"|| search_no == "2")
    {cout<<"\n\n";
      criminals2();
             cout << "Where was the criminal last seen ";
              cin.ignore();
         getline(cin,C2last_seen_place);
         cout << "When was the criminal last seen ";
         
          getline(cin,C2last_seen_date);
          cout<<"\n\n";
         criminals2();}
        else if (search_no=="WILLIAM" || search_no == "3")
        {cout<<"\n\n";
        criminals3();
             getline(cin,C3last_seen_place);
         cout << "When was the criminal last seen ";
          getline(cin,C3last_seen_date);
          cout<<"\n\n";
            criminals3();}
          else   if (search_no== "ARIANA"|| search_no=="4")
           { cout<<"\n\n";
            criminals4();
            cout << "Where was the criminal last seen ";
            cin.ignore();
            getline(cin,C4last_seen_place);
         cout << "When was the criminal last seen ";
          getline(cin,C4last_seen_date);
          cout<<"\n\n";
                criminals4();}
        else
            cout <<"INVALID INPUT"<< endl;
}}
void criminal_database()
{string search_no;
    cout << " Enter Criminal first name in capital letters or case refernce no."<< endl;
    cin >> search_no;
    if(search_no == "NONAME"  || search_no =="ZEESHAN" ||  search_no== "1"   ||  search_no=="2" || search_no=="WILLIAM" || search_no=="3"||search_no=="ARIANA"||search_no=="4")
      {
        if(search_no =="NONAME" || search_no=="1")
        criminals1();
    if(search_no== "ZEESHAN"|| search_no == "2")
        criminals2();
        if (search_no=="WILLIAM" || search_no == "3")
            criminals3();
            if (search_no== "ARIANA"|| search_no=="4")
                criminals4();
        else
            cout <<"INVALID INPUT"<< endl;
}}
void login(string &id,string &id1,string &id2,string &id3,string &PW,string &PW1,string &PW2,string &PW3){
  int counter = 3;
    while(((id!=id1&&PW!=PW1)||(id!=id2&&PW!=PW2)||(id!=id3&&PW!=PW3))&&counter>0)
    {
  cout<<"Enter your Username and Password"<<endl;
  cout<<"Username : ";
  cin>>id;
  cout<<"Password : ";
  cin>>PW;
  if (id==id1 &&PW==PW1)
  { cout << string(50, '\n');
    cout<<"Hello commander";
    return ;}
else if (id==id2 &&PW==PW2)
  { cout << string(50, '\n');
    cout<<"Hello commander";
    return ;}
else if (id==id3 &&PW==PW3)
  {cout << string(50, '\n');
    cout<<"Hello commander";
  return ; }
  else if((id!=id1&&PW!=PW1)||(id!=id2&&PW!=PW2)||(id!=id3&&PW!=PW3))
  {PW="";
  id="";
  cout<<"Invalid Username or Password"<<endl;
  cout<<"you have "<<counter-1<<" tries remaining"<<endl;}
counter--;}
cout<<"You have used the maximum number of tries";
exit(1);
}
int main(){
string id ="", PW="",id1="24100003",PW1="daniel123",PW2="aadrish123",PW3="random123",id2="24100174",id3="786453",adminid="24100003";
cout<<"\n\n\nwelcome to  Rob&Rachel's Jewellery shop: ";
cout<<"\n\t\t\t\t\t\t\t\t    '/\\`"<<endl;//this is a very bad attempt at making a diamond but please forgive us.
cout<<"\t\t\t\t\t\t\t\t   '/  \\`"<<endl;
cout<<"\t\t\t\t\t\t\t\t  '/    \\`"<<endl;
cout<<"\t\t\t\t\t\t\t\t  '\\____/`"<<endl;
cout<<"\t\t\t\t\t\t\t\t   ' ' ' ' "<<endl;

login(id,id1,id2,id3,PW,PW1,PW2,PW3);
cout<<"\nWelcome to PHOENIX SECURITY SERVICES";
cout<<"\n\t\t\t\t┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈\n\t\t\t\t┈╭━━━━━╮┈┈┈┈┈┈┈┈\n\t\t\t\t┈╰┳━━━━╰╮╭━╮┈┈┈┈\n\t\t\t\t┈┈╰┳━━━━┣╯▊╲┈┈┈┈\n\t\t\t\t┈┈┈╰━┳━━╯╰╱▔┈┈┈┈\n\t\t\t\t┈┈┈┈┈╰━┳┳╯┈┈┈┈┈┈\n\t\t\t\t━━━━━━━┻┻━━━━━━━\n";
char choice='0';
while(choice!='q'){
cout<<"\n\nPress a function key to execute the function"<<endl;
cout<<"Key\t\t"<<"Function"<<endl;
cout<<" e\t\t Text encryption"<<endl;
cout<<" d\t\t Text decryption"<<endl;
cout<<" c\t\t Write a new message "<<endl;
cout<<" i\t\t View your inbox"<<endl;
cout<<" a\t\t View your Assignments"<<endl;
cout<<" u\t\t update Assignments"<<endl;
cout<<" s\t\t Search criminal database"<<endl;
cout<<" k\t\t Update criminal database"<<endl;
cout<<" l\t\t switch user"<<endl;
cout<<" q\t\t Quit"<<endl;
cin>>choice;
if(choice=='e')
{cout << string(50, '\n');
  cin.ignore();
encrypt();}
else if(choice=='d')
{cout << string(50, '\n');
  cin.ignore();
decrypt();}
else if(choice=='c')
{cout << string(50, '\n');
compose(id);}
else if (choice=='i')
{cout << string(50, '\n');
  Inbox(id);}
else if(choice=='a')
{cout << string(50, '\n');
viewAssignments(id);}
else if(choice=='u')
{cout << string(50, '\n');
updateAssignments(id,adminid);}
else if(choice=='s')
{cout << string(50, '\n');
  criminal_database();}
else if(choice=='k')
{cout << string(50, '\n');
  updating_criminal_database();}
else if(choice=='l')
{cout << string(50, '\n');
login(id,id1,id2,id3,PW,PW1,PW2,PW3);}
else
cout<<"choose a valid Function";}

cout << string(50, '\n');
return 0;
}
