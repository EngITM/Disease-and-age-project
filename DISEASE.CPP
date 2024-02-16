// program for calculate average age of man and  weman
// if he/she have all disease or some disease
// if he/she have disease will reduce from average age
// written by Engineer Muhammad
// IT Engineer
// from Iraq

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
// average age for man and weman
float man = 73.5 , weman = 79.3;
int sex;
int drink,smoke,psycho,heart,diabetes;
float avg;
int ans;
cout<<"Enter Sex, for man = 1 , for weman = 2"<<endl;
cin>>sex;
if(sex == 1)
{
// if user choose all disease will calculate as following
cout<<"all disease?"<<endl;
cin>>ans;
if(ans == 1)
{
// 2 for drinking
// 10 for smoking
// 20 for psych disease
// 10 for heart disease
// 10 for diabetes disease
// sum of all disease which reduce age and average
avg = (2+10+20+10+5)/5;
man = man - avg;
cout<<"average age of man have all disease ="<<man;
}
else
{
cout<<"do you have drink ?"<<endl;
cin>>drink;
// if ans == 1 he drink else he don't
if(drink == 1)
{
man = man - 2;
}
else
{
// do nothing
man = man + 0;
}
cout<<"do you have smoking ?"<<endl;
cin>>smoke;
// if ans == 1 he smoking else he don't
if(smoke == 1)
{
man = man - 10;
}
else
{
// do nothing
man = man + 0;
}
cout<<"do you have psycho disease ?"<<endl;
cin>>psycho;
// if ans == 1 he has psych disease
if(psycho == 1)
{
man = man - 20;
}
else
{
// do nothing
man = man + 0;
}
cout<<"do you have heart disease ?"<<endl;
cin>>heart;
// if ans == 1 he has heart disease
if(heart == 1)
{
man = man - 10;
}
else
{
// do nothing
man = man + 0;
}
cout<<"do you have diabetes ?"<<endl;
cin>>diabetes;
// if ans == 1 he has diabetes else no
if(diabetes == 1)
{
man = man - 5;
}
else
{
// do no thing
man = man + 0;
}
cout<<"the age of man is ="<<man<<endl;
}
}
else
{
cout<<"do you have all disease ?"<<endl;
cin>>ans;
if(ans == 2)
// if ans == 2 she has all disease
{
avg = (2+10+20+10+5)/5;
weman = weman - avg;
cout<<"the age of weman have all disease ="<<weman<<endl;
}
else
{
cout<<"do you have drink ?"<<endl;
cin>>drink;
if(drink == 1)
{
weman = weman - 2;
}
else
{
weman = weman + 0;
}
cout<<"do you have smoking ?"<<endl;
cin>>smoke;
if(smoke == 1)
{
weman = weman - 10;
}
else
{
weman = weman + 0;
}
cout<<"do you have psycho disease ?"<<endl;
cin>>psycho;
if(psycho == 1)
{
weman = weman - 20;
}
else
{
weman = weman + 0;
}
cout<<"do you have heart disease ?"<<endl;
cin>>heart;
if(heart == 1)
{
weman = weman - 10;
}
else
{
weman = weman + 0;
}
cout<<"do you have diabetes ?"<<endl;
cin>>diabetes;
if(diabetes == 1)
{
weman = weman - 5;
}
else
{
weman = weman + 0;
}
cout<<"the age of weman = "<<weman<<endl;
}
}
}

