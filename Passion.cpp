#include"iostream"
#include"fstream"
#include"cstdlib"
using namespace std;
class Passion
{
 int a,b,c,d,e,f,g,h,i,j,temp;
 char name[20];
public:

void read();
void write();

void get()
{
  cout<<"\nEnter Your Name: \n";
  cin.getline(name,20);

  cout<<"\nQ.1 I FEEL MOST MYSELF WHEN I: \n\n";						//Q-1
  cout<<"\t1.GET INSPIRED TO CREATE SOMETHING NEW. \n";
  cout<<"\t2.AM BRAINSTORMING NEW IDEAS WITH OTHER PEOPLE. \n";
  cout<<"\t3.HAVE A WEEKEND FULL OF FUN PLANS. \n";
  cout<<"\t4.CROSS A BUNCH OF THINGS OFF OF MY TO-DO LIST. \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>a;

  if(a==1)
  {
    a=5;
  }
  if(a==2)
  {
    a=2;
  }
  if(a==3)
  {
    a=6;
  }
  if(a==4)
  {
    a=10;
  }
  system("clear");

  cout<<"\nQ.2 I WOULD MOST LIKE TO BE PRAISED FOR BEING: \n\n";						//Q-2
  cout<<"\t1.A POSITIVE PERSON WHO’S FUN TO BE AROUND \n";
  cout<<"\t2.SOMEONE WHO’S INSPIRATIONAL AND COURAGEOUS \n";
  cout<<"\t3.A GREAT LISTENER AND LOYAL PERSON \n";
  cout<<"\t4.A GO-GETTING PERSON WHO MAKES STUFF HAPPEN \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>b;

  if(b==1)
  {
    b=5;
  }
  if(b==2)
  {
    b=2;
  }
  if(b==3)
  {
    b=6;
  }
  if(b==4)
  {
    b=10;
  }
  system("clear");

  cout<<"\nQ.3 TO ME, IT’S MOST IMPORTANT FOR MY CAREER TO ALLOW ME TO HAVE: \n\n";						//Q-3
  cout<<"\t1.MEANINGFUL CONNECTION WITH A GROUP OF AWESOME PEOPLE. \n";
  cout<<"\t2.THE ABILITY TO ENJOY MY JOB AND PROVIDE WELL FOR MY HOBBIES AND LIFESTYLE. \n";
  cout<<"\t3.NO LIMITATIONS AND THE ABILITY TO FOCUS ON MULTIPLE PASSIONS AT ONCE. \n";
  cout<<"\t4.THE FREEDOM TO BE MY OWN BOSS. \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>c;

  if(c==1)
  {
    c=5;
  }
  if(c==2)
  {
    c=2;
  }
  if(c==3)
  {
    c=6;
  }
  if(c==4)
  {
    c=10;
  }
  system("clear");

  cout<<"\nQ.4 IN A TYPICAL WORK MEETING, YOU’LL MOST LIKELY FIND ME: \n\n";						//Q-4
  cout<<"\t1.WISHING THAT I COULD ESCAPE AND DAYDREAMING ABOUT MY OWN CREATIVE IDEAS. \n";
  cout<<"\t2.QUIETLY TAKING NOTES SO I CAN REMEMBER EVERYTHING I’M SUPPOSED TO DO BEFORE I LEAVE. \n";
  cout<<"\t3.AT THE FRONT OF THE ROOM, SHARING MY IDEAS AND MOTIVATING THE TEAM. \n";
  cout<<"\t4.KEEPING EVERYONE FOCUSED SO THE MEETING ENDS ON TIME – I HAVE A LOT TO CHECK OFF OF MY LIST TODAY! \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>d;

  if(d==1)
  {
    d=5;
  }
  if(d==2)
  {
    d=2;
  }
  if(d==3)
  {
    d=6;
  }
  if(d==4)
  {
    d=10;
  }
  system("clear");

  cout<<"\nQ.5 WHEN IT COMES TO MY CAREER, I’M MOST AFRAID OF: \n\n";						//Q-5
  cout<<"\t1.NOT HAVING STABILITY. IT’S IMPORTANT THAT I CAN PREDICT WHERE MY MONEY IS COMING FROM. \n";
  cout<<"\t2.BEING BORED & LIMITED. I JUST CAN’T REPEAT THE SAME THINGS DAY AFTER DAY. \n";
  cout<<"\t3.DISAPPOINTING OTHERS AND LETTING MY TEAM DOWN. \n";
  cout<<"\t4.ALL OF MY TIME BEING OWNED BY SOMEONE ELSE AND NOT GETTING TO FEEL TRULY FREE. \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>e;

  if(e==1)
  {
    e=5;
  }
  if(e==2)
  {
    e=2;
  }
  if(e==3)
  {
    e=6;
  }
  if(e==4)
  {
    e=10;
  }
  system("clear");

  cout<<"\nQ.6 IT WOULD BE MOST IMPORTANT FOR ME TO FEEL LIKE: \n\n";						//Q-6
  cout<<"\t1.I’M SUPPORTING A MOVEMENT THAT DIRECTLY IMPACTS OTHER PEOPLE. \n";
  cout<<"\t2.I’M CONSTANTLY LEARNING, PLANNING, AND DOING NEW THINGS. \n";
  cout<<"\t3.I’M CREATING AND LEADING A MOVEMENT THAT CHANGES PEOPLE’S LIVES \n";
  cout<<"\t4.I’M ENJOYING AN EQUAL BALANCE OF WORK AND PLAY … MAYBE A BIT MORE OF THE PLAY \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>f;

  if(f==1)
  {
    f=5;
  }
  if(f==2)
  {
    f=2;
  }
  if(f==3)
  {
    f=6;
  }
  if(f==4)
  {
    f=10;
  }
  system("clear");

  cout<<"\nQ.7 MY BIGGEST CHALLENGE AT WORK IS: \n\n";						//Q-7
  cout<<"\t1.I CAN SOMETIMES BE A PEOPLE-PLEASER, TO MY DETRIMENT. \n";
  cout<<"\t2.I CAN BE STUBBORN AND A LITTLE REBELLIOUS. \n";
  cout<<"\t3.I HAVE TOO MANY IDEAS/PROJECTS AND NOT ENOUGH TIME. \n";
  cout<<"\t4.I FEEL LIKE I SHOULD COME UP WITH IDEAS AND BE A LEADER, BUT I DON’T REALLY WANT TO. \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>g;

  if(g==1)
  {
    g=5;
  }
  if(g==2)
  {
    g=2;
  }
  if(g==3)
  {
    g=6;
  }
  if(g==4)
  {
    g=10;
  }
  system("clear");

  cout<<"\nQ.8 IF I WON THE LOTTERY, I WOULD:  \n\n";						//Q-8
  cout<<"\t1.HAVE NO PROBLEM NOT WORKING, AS LONG AS MY LIFE WAS DEFINED BY MY FAMILY, FRIENDS, AND INTERESTS. \n";
  cout<<"\t2.ESCAPE FOR A BIT, BUT THEN FEEL GLAD TO HAVE THE MONEY TO CREATE MY OWN BUSINESS/MINI-REVOLUTION. \n";
  cout<<"\t3.VOLUNTEER/WORK FOR A CAUSE I CARE DEEPLY ABOUT, EVEN THOUGH I WOULDN'T NEED THE MONEY. \n";
  cout<<"\t4.DEFINITELY GET BORED IF I WASN’T DOING MEANINGFUL WORK, SO I’D DABBLE IN A BUNCH OF THINGS. \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>h;

  if(h==1)
  {
    h=5;
  }
  if(h==2)
  {
    h=2;
  }
  if(h==3)
  {
    h=6;
  }
  if(h==4)
  {
    h=10;
  }
  system("clear");

  cout<<"\nQ.9 WHEN IT COMES TO TALENT AND MY CAREER: \n\n";						//Q-9
  cout<<"\t1.I DON’T NECESSARILY NEED MY BIGGEST TALENT TO BE ON DISPLAY AT WORK. IT COULD BE TOTALLY SEPARATE OF MY JOB. \n";
  cout<<"\t2.I STRONGLY DESIRE MY EMPLOYER TO RECOGNIZE ME FOR MY TALENT. \n";
  cout<<"\t3.I MUST BE IN CONTROL OF HOW MY TALENT IS DIRECTED. \n";
  cout<<"\t4.I DON’T WANT TO PICK JUST ONE TALENT TO REFINE, I NEED TO DEVELOP THEM ALL! \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>i;

  if(i==1)
  {
    i=5;
  }
  if(i==2)
  {
    i=2;
  }
  if(i==3)
  {
    i=6;
  }
  if(i==4)
  {
    i=10;
  }
  system("clear");

  cout<<"\nQ.10 THE LIFE GOAL THAT I’M MOST ATTRACTED TO IS: \n\n";						//Q-10
  cout<<"\t1.TO NEVER FEEL LIKE I’M LIMITING MYSELF — I WANT TO TAKE ADVANTAGE OF AS MANY OPPORTUNITIES AND EXPRESS AS MANY OF MY PASSIONS AS POSSIBLE. \n";
  cout<<"\t2.TO FREE UP AS MUCH TIME AS I CAN TO SPEND ON MY INTERESTS AND HOBBIES AND BEING WITH MY FRIENDS AND FAMILY. \n";
  cout<<"\t3.TO FEEL LIKE I’VE TAKEN MY BIG IDEA AND MADE IT A REALITY … AND BUILD A PRETTY AMAZING LIFESTYLE FOR MYSELF IN THE PROCESS. \n";
  cout<<"\t4.TO FEEL LIKE PART OF A TEAM OR COMMUNITY THAT’S MAKING A BIG DIFFERENCE IN THE WORLD, AND GET PAID TO BE A PART OF IT. \n";
  cout<<"\nYour Answer(1,2,3,4): ";
  cin>>j;

  if(j==1)
  {
    j=5;
  }
  if(j==2)
  {
    j=2;
  }
  if(j==3)
  {
    j=6;
  }
  if(j==4)
  {
    j=10;
  }
  system("clear");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print()
{
  cout<<"\nName: "<<name;
  
  temp=a+b+c+d+e+f+g+h+i+j;

  if(temp <= 20)
  {
	cout<<"\nSide Hustler\n";
	cout<<"The idea of focusing on just one job or project for your entire career"<<endl;
	cout<<"sounds stifling. You thrive on variety, novelty, and innovation. It’s normal"<<endl;
	cout<<"for Side Hustlers to get bored easily. If you’re not feeling challenged and"<<endl;
	cout<<"aren't constantly learning and growing, you’ll feel restless or frustrated."<<endl;
	cout<<"You find value in being part of a cohesive, supportive team AND building"<<endl;
	cout<<"something of your own "<<endl;
  }
  if(temp <= 50)
  {
	cout<<"\nTribe Member\n";
	cout<<"You, as your name implies, crave being part of a cohesive, engaged, inspired team or community."<<endl;
	cout<<"Others often seek you out when they need help, advice, or just a listening ear. "<<endl;
	cout<<"You love any part of your job that gives you an opportunity to connect and"<<endl;
	cout<<"collaborate — whether it’s hearing a client’s story so you can solve their problem,"<<endl; 
	cout<<"or co­creating and innovating with your team."
  }
  if(temp <= 85)
  {
	cout<<"\nThriver\n";
	cout<<"While it’s important for you to enjoy your job and work with great"<<endl;
	cout<<"people, the best part of your career is that it serves as a way to fund"<<endl;
	cout<<"and support your lifestyle.At work, you shine in support roles and love feeling like an integral"<<endl;
	cout<<"part of the team. Your ideal job would let you do something you’re"<<endl;
	cout<<"naturally good at with an easy­going, supportive team … and you"<<endl;
	cout<<"wouldn’t mind a flexible schedule with some extra vacation time, either."<<endl;
 	 
  }
  if(temp == 100)
  {
	cout<<"\nFire Starter\n";
	cout<<"You have a natural tendency to question “the way things are.” You feel"<<endl;
	cout<<"stifled by rules, and have a hard time committing to a project or"<<endl;
	cout<<"assignment unless you’re fully bought in to the mission and purpose."<<endl;
	cout<<"You thrive in environments that encourage innovation, unbounded<,"<<endl;
	cout<<"creativity, and rapid evolution. You like to color outside the lines."<<endl;
	cout<<"Where others see challenges and lack, you see opportunity,"<<endl;
	cout<<"which makes you a natural leader."<<endl;
  }
} 
};
void Passion::write()								//file
{
ofstream outfile;
outfile.open("record.passion", ios::binary|ios::app);
get();
outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
outfile.close();
}
void Passion::read()
{
ifstream infile;
infile.open("record.passion", ios::binary);
if(!infile)
{
cout<<"Error in Opening! File Not Found!!"<<endl;
return;
}
cout<<"\n****Data from file****"<<endl;
while(!infile.eof())
{
if(infile.read(reinterpret_cast<char*>(this), sizeof(*this)))
{
print();
}
}
infile.close();
}

int main()
{
 Passion obj;
 obj.write();
 obj.read();
 return 0;
}