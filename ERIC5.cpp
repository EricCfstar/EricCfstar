#include<bits/stdc++.h>
using namespace std;
int Login_TOF=0,CinCode_TOF=0,Home_TOF=0;
void Logo();
void Tips();
void Introduction();
void Login();
string username,usname;
string password,passw;
void Home();
int cincode();
long long times;
int main()
{
	Logo();
}
void Logo()
{
	system("title Ԥ��ҳ��");
	system("color 2f");
	system("cls");
	cout<<"\n\n\n\n";
	cout<<"				    *       *"<<endl;
	_sleep(300);
	cout<<"				*****************"<<endl;
	_sleep(300);
	cout<<"				      *   * "<<endl;
	_sleep(300);
	cout<<"				   ***********"<<endl;
	_sleep(300);
	cout<<"				   *�������� *"<<endl;
	_sleep(300);
	cout<<"				   ***********"<<endl;
	_sleep(300);
	cout<<"				   *         *"<<endl; 
	_sleep(300);
	cout<<"				   ***********"<<endl;
	_sleep(300);
	cout<<"				        *"<<endl;
	_sleep(300);
	cout<<"				  *************"<<endl;
	_sleep(300);
	cout<<"				        *"<<endl;
	_sleep(300);
	cout<<"				        *"<<endl;
	_sleep(300);
	cout<<"				        *"<<endl;
	_sleep(300);
	cout<<"				        *"<<endl;
	_sleep(300);
	cout<<"        				        ���Ź����ҡ�����ʵ����\n"; 
	system("timeout /t 5");
	system("cls");
	cout<<"--------------------------"<<endl;
	cout<<"           ERIC "<<endl;
	cout<<"      Version   5.0"<<endl;
	cout<<"  ����ʵ���ҡ����Ź�����"<<endl; 
	cout<<"--------------------------"<<endl<<endl;
	cout<<" �����������ERIC...";
	system("pause>nul");
	Tips();
}
void Tips()
{
	system("title ��ERIC�û�Э�顷");
	system("cls");
	system("color 2f");
	cout<<"				��ERIC�û�Э�顷\n";
	cout<<"1.�ó���ʹ�õ��˺�����Ϊ���ش��棬��ע���������ã�������QQ��΢�ŵ���Ҫ���������ͬ��\n";
	cout<<"2.�ó���������ʵ������������������ƽ⡢��ð��\n";
	cout<<"3.�������������ѡ���޹ص��κ���ĸ�����ֻ��߷��ţ��ᵼ�³������ҡ�\n";
	cout<<"4.�ó��������ѧϰ�����Ե��Խ��в�������������ʵ���ҸŲ�����\n";
	cout<<"5.�ó���Դ��δ��������ϣ�����вο�ѧϰ����ϵ���ߣ�����ʵ���ҽ������������Դ���롣\n";
	cout<<"6.����ɷ�������QQ�������䡣\n";
	cout<<"\n\n";
	cout<<"��(Y)��(N)ͬ���������ݣ�[Y/N]\n";
	cout<<" >";
	string agree;
	cin>>agree;
	if(agree=="Y"||agree=="y")
	{
		Login();
	}
	if(agree=="N"||agree=="n")
	{
		return Tips();
	}
	if(agree=="Ericissb"||agree=="Admin"||agree=="yuanzui_cf")
	{
		Home();
	}
}
void Introduction()
{
	system("title ��ERICָ�ϡ�");
	system("cls");
	system("color 2f");
	ofstream OutFile;
	ifstream InFile;
	InFile.open("username.info");
	InFile>>username;
	InFile.close();
	cout<<"��ӭ���û�"<<username<<"!";
	system("timeout /t 3");
	system("cls");
	system("color 7c");
	cout<<"����¼��������3�κ󣬡�ERICָ�ϡ����Զ�����Home��顣\n";
	system("timeout /t 5");
	system("cls");
	system("color 2f");
	cout<<"				��ERICָ�ϡ�\n";
	cout<<"1.ERIC�˻���������������ô�죿\n";
	cout<<"2.ERIC���������Ϊʲô���������Ҳ�������ѡ�\n";
	cout<<"3.��Ϊʲô��Home���������ˡ�ERICָ�ϡ���\n";
	cout<<"4.ERICΪʲô�ܿ���\n";
	cout<<"5.����\n";
	cout<<" >";
	int x;
	cin>>x;
	if(x==1)
	{
		system("cls");
		cout<<"���\n";
		cout<<"���ƺ����ˡ�ERIC�û�Э�顷��˵,������ñ��ش洢��������ֻ���ERIC�������������ļ���username.info��password.infoɾ������\n\n";
		system("pause"); 
		Home();
	}
	if(x==2)
	{
		system("cls");
		cout<<"���\n";
		cout<<"���ƺ����ˡ�ERIC�û�Э�顷��˵,���������ѡ�����κ���ĸ�����ֻ��߷��š�\n";
		cout<<"����������ѡ�����\n";
		cout<<"ϵͳ��������ҡ�\n";
		cout<<"�˳����ؽ������ˣ�\n\n";
		system("pause");
		Home();
	}
	if(x==3)
	{
		system("cls");
		cout<<"����ܰ�����ˡ�ϵͳ�ж��û���������ѡ�����󣬻��Զ�ת�����\n";
		system("pause");
	} 
	if(x==4)
	{
		system("cls");
		cout<<"���\n";
		cout<<"�����ĵȴ�һ�ᡣ\n";
		cout<<"���������Ҫ���ء�\n\n"; 
		system("pause");
		Home();
	}
	if(x==5)
	{
		Home();
	}
}
void Login()
{
	ofstream OutFile;
	ifstream InFile;
	system("color 2f");
	system("cls");
	system("title ERIC��¼/ע��");
	char lor;
	if(Login_TOF==0)
	{
		cout<<"��¼(Y)����ע��(N)��[Y/N]\n";
		cout<<" >";
		cin>>lor;
	}
	if(Login_TOF==1)
	{
		lor='Y';
	}
	else{
		if(Login_TOF==2)
		{
			lor='N';
		}
	}
	if(lor=='Y'||lor=='y')
	{
		Login_TOF=1;
		system("cls");
		system("title ��¼ERIC");
		InFile.open("username.info");
		InFile>>username;
		InFile.close();
		InFile.open("password.info");
		InFile>>password;
		InFile.close();
		cout<<"�û���|";
		cin>>usname;
		cout<<"��  ��|";
		cin>>passw;
		if(usname!=username)
		{
			system("cls");
			system("color 7c");
			cout<<"�û�������\n";
			system("timeout /t 5");
			return Login();
		}
		else
		{
			if(password!="Ijloedioj^&EFYUIDEHFjk"+passw+"8uf3efiojaedf8uj8")
			{
				system("cls");
				system("color c");
				cout<<"�������\n";
				system("timeout /t 5");
				return Login();
			}
			else
			{
				system("cls");
				system("color f2");
				cout<<"��¼�ɹ���\n";
				system("timeout /t 5");
				system("cls");
				InFile.open("times.info");
				InFile>>times;
				InFile.close();
				times++;
				OutFile.open("times.info");
				OutFile<<times;
				OutFile.close();
				if(times-1<=3)
				{
					cout<<"��⵽��Ϊ���û�����(1)��(0)ǰ���Ķ���ERICָ�ϡ���\n";
					cout<<"[1/0]\n";
					int choose;
					cout<<" >";
					cin>>choose;
					if(choose==1)
					{
						Introduction();
					}
					if(choose==0)
					{
						Home();
					}
				}
				else
				{
					Home();
				}
			}
		}
	}
	else
	{
		if(lor=='N'||lor=='n')
		{
			string user;
			InFile.open("username.info");
			InFile>>user;
			InFile.close();
			if(user!="")
			{
				system("cls");
				system("color c");
				cout<<"����ע��ERIC�˺ţ���ֱ�ӵ�¼��\n"<<endl;
				system("timeout /t 5");
				return Login();
			}
			else
			{
				Login_TOF=2;
				system("title ע��ERIC");
				system("cls"); 
				string username;
				string pass1,pass2;
				cout<<"�û���|";
				cin>>username;
				cout<<"����|";
				cin>>pass1;
				cout<<"����|";
				cin>>pass2;
				if(pass1!=pass2)
				{
					system("cls");
					system("color 7c");
					cout<<"�������벻һ�£�\n";
					system("timeout /t 5");
					return Login();
				}
				else
				{
					OutFile.open("username.info");
					OutFile<<username;
					OutFile.close();
					OutFile.open("password.info");
					OutFile<<"Ijloedioj^&EFYUIDEHFjk"<<pass1<<"8uf3efiojaedf8uj8";
					OutFile.close();
					system("color f2");
					OutFile.open("times.info");
					OutFile<<"1";
					OutFile.close();
					cout<<"ע��ɹ��������ض�������¼ҳ��\n"<<endl;
					system("timeout /t 5");
					Login_TOF=1;
					return Login();
				}
			}
		}
	}
}
void Home()
{
	system("title ERIC Home");
	system("color f2");
	system("cls");
	ifstream InFile;
	string username;
	int code;
	bool Use_TOF=false;
	CinCode_TOF=0;
	InFile.open("username.info");
	InFile>>username;
	InFile.close();
	if(Home_TOF==1)
	{
		cout<<endl;
	}
	if(Home_TOF==0)
	{
		system("color f2");
		system("cls");
		cout<<endl;
		cout<<" ��ӭ��, "<<username<<endl;
		cout<<" ERIC ���˵�"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about ����ERIC\n 0 ��ERICָ�ϡ�\n 1 �鿴ϵͳ��Ϣ\n 2 �򵥿��Ƶ���\n 3 ����ѧ����\n"<<endl<<endl;
		Home_TOF=1;
	}
	code=cincode();
	if(code==11)
	{
		Use_TOF=true;
	}
	if(code==1)
	{
		Use_TOF=true;
	}
	if(code==2)
	{
		Use_TOF=true;
	}
	if(code==3)
	{
		Use_TOF=true;
	}
	if(code==4)
	{
		Use_TOF=true;
	}
	if(code==5)
	{
		Use_TOF=true;
	}
	if(code==1004)
	{
		Use_TOF=true;
		Home_TOF=0;
		return Home();
	}
	return Home();
}
int cincode()
{
	if(CinCode_TOF==0)
	{
		string CinCode;
		int CoutCode;
		cout<<" >";
		cin>>CinCode;
		if(CinCode=="about")
		{
			CoutCode=11;
		}
		if(CinCode=="0")
		{
			CoutCode=0;
		}
		if(CinCode=="1")
		{
			CoutCode=1;
		}
		if(CinCode=="2")
		{
			CoutCode=2;
		}
		if(CinCode=="3")
		{
			CoutCode=3;
		}
		if(CinCode=="4") 
		{
			CoutCode=4;
		}
		if(CinCode=="film"||CinCode=="Film"||CinCode=="movie"||CinCode=="Movie")
		{
			CoutCode=101; 
		}
		if(CinCode=="Eric"||CinCode=="EricCfstar")
		{
			CoutCode=102;
		}
		if(CinCode=="Hidden"||CinCode=="hidden")
		{
			CoutCode=10000;
		}
		if(CoutCode==11)
		{
			system("title ��������");
			system("cls");
			system("color 2f");
			cout<<"��������\n";
			_sleep(200); 
			cout<<" ���Ź����ҡ�����ʵ���� ����\n\n";
			_sleep(1000);
			cout<<"����ERIC5\n";
			_sleep(200);
			cout<<" Version 5.0.0.0\n";
			_sleep(200);
			cout<<" Copyright (c) ERIC\n\n";
			_sleep(1000);
			cout<<"��һ�汾Ԥ��\n";
			_sleep(200);
			cout<<" ERIC 6.0  Ԥ��2023�귢��\n\n";
			_sleep(1000);
			cout<<"��һ����Ԥ��\n";
			_sleep(200);
			cout<<" EPT���\n";
			_sleep(200);
			cout<<" ERIC����Ŀ\n";
			_sleep(1000);
			cout<<"������治͸��������\n";
			_sleep(100);
			cout<<"��ȥ�˵�Ѱ������ָ��ɣ�\n";
			_sleep(100);
			cout<<"                      ------Eric ����\n"; 
			_sleep(3000);
			system("pause");
			system("cls");
			cout<<"��ϵ��ʽ\n";
			_sleep(200);
			cout<<" QQ:3345615469\n";
			_sleep(200);
			cout<<" Email:eric.etstudio@qq.com\n";
			_sleep(200);
			cout<<"              ��\n";
			_sleep(200);
			cout<<" ����:https://gblog.tech/\n\n\n"; 
			_sleep(1000);
			cout<<"�Ƿ���Ҫ������ϵ��ʽ����1���õ�/2�����ˡ�\n" ;
			cout<<" >";
			_sleep(1000);
			int y;
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"����ѡ��\n";
				_sleep(200);
				cout<<"1 ǰ�����ߵ�CSDN��ҳ\n";
				_sleep(200);
				cout<<"2 ǰ�����ݲ���\n";
				_sleep(200);
				cout<<"3 ����QQ\n";
				_sleep(200);
				cout<<"4 ����Email\n";
				_sleep(200);
				cout<<"5 ����\n";
				_sleep(200);
				cout<<" >";
				_sleep(1000);
				int a;
				cin>>a;
				if(a==1)
				{
					system("cls");
					cout<<"ҳ�漴����ת...���������������\n";
					system("pause");
					system("start https://blog.csdn.net/qq_50594697?spm=1000.2115.3001.5343"); 
				} 
				if(a==2)
				{
					system("cls");
					cout<<"ҳ�漴����ת...���������������\n";
					system("pause");
					system("start https://gblog.tech"); 
				} 
				if(a==3)
				{
					system("cls");
					system("echo 3345615469|clip");
					cout<<"�Ѹ��ƣ�(�����������)";
					system("pause>nul"); 
				}
				if(a==4)
				{
					system("cls");
					system("echo eric.etstudio@qq.com|clip");
					cout<<"�Ѹ��ƣ�(�����������)";
					system("pause>nul"); 
				}
				if(a==5)
				{
					
				}
			}
			if(y==2)
			{
				
			}
			system("pause"); 
		}
		if(CoutCode==0)
		{
			Introduction();
		}
		if(CoutCode==1)
		{
			system("title ERIC�鿴��");
			system("cls");
			int y;
			cout<<" 1 �鿴C���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 2 �鿴D���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 3 �鿴E���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 4 �鿴F���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 5 �鿴G���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 6 �鿴H���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 7 tree�鿴C���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 8 tree�鿴D���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 9 tree�鿴E���ļ��������Ƶ����Լ��а壩\n";
			cout<<"10 tree�鿴F���ļ��������Ƶ����Լ��а壩\n";
			cout<<"11 tree�鿴G���ļ��������Ƶ����Լ��а壩\n";
			cout<<"12 tree�鿴H���ļ��������Ƶ����Լ��а壩\n"; 
			cout<<"13 �鿴�������������������TCP/IP��Ϣ�������Ƶ����Լ��а壩\n";
			cout<<"14 �鿴���ؼ�����е�NetBIOS���Ʊ������Ƶ����Լ��а壩\n";
			cout<<"15 �鿴��ǰ��������TCP������ϸ��Ϣ�������Ƶ����Լ��а壩\n";
			cout<<"16 �鿴���ؼ������ǰ���л��TCP���ӣ��Լ�������TCP��UDP�˿ڣ������Ƶ����Լ��а壩\n";
			cout<<"17 �鿴���ؼ�������ݰ��鿴�ͽ�������������Ƶ����Լ��а壩\n";
			cout<<"18 �鿴ip��������������Ƶ����Լ��а壩\n";
			cout<<"19 �鿴(������ʽ)�TCP���ӵ�PID���̣������Ƶ����Լ��а壩\n"; 
			cout<<"20 �鿴��������нӿڵ�ARP����������Ƶ����Լ��а壩\n";
			cout<<"21 �鿴ip·������Ϣ�������Ƶ����Լ��а壩\n";
			cout<<"22 �鿴�����ʹ�õĹ���������飨�����Ƶ����Լ��а壩\n";
			cout<<"23 �鿴���ؼ����������Դ�������Ƶ����Լ��а壩\n";
			cout<<"24 �鿴����������˻��б������Ƶ����Լ��а壩\n";
			cout<<"25 �鿴���ؼ�����ı������б������Ƶ����Լ��а壩\n";
			cout<<"26 �鿴�������ӹ���wifi�������Ƶ����Լ��а壩\n";
			cout<<"27 ������ҳ\n"; 
			cout<<" >";
			cin>>y; 
			if(y==1)
			{
				system("cls");
				system("dir c:&&dir c|clip");
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				system("dir d:&&dir d:|clip");
				system("pause");
				system("cls");
			}
			if(y==3)
			{
				system("cls");
				system("dir e:&&dir e:|clip");
				system("pause");
				system("cls");
			}
			if(y==4)
			{
				system("cls");
				system("dir f:&&dir f:|clip");
				system("pause"); 
				system("cls");
			}
			if(y==5)
			{
				system("cls");
				system("dir g:&&dir g:|clip");
				system("pause");
				system("cls");
			}
			if(y==6)
			{
				system("cls");
				system("dir h:&&dir h:|clip");
				system("pause");
				system("cls");
			}
			if(y==7)
			{
				system("cls");
				system("dir i:&&dir i:|clip");
				system("pause");
				system("cls");
			}
			if(y==8)
			{
				system("cls");
				system("tree c:&&tree c:|clip");
				system("pause");
				system("cls");
			}
			if(y==9)
			{
				system("cls");
				system("tree d:&&tree d:|clip");
				system("pause");
				system("cls");
			}
			if(y==9)
			{
				system("cls");
				system("tree e:&&tree e:|clip");
				system("pause");
				system("cls");
			}
			if(y==10)
			{
				system("cls");
				system("tree f:&&tree f:|clip");
				system("pause");
				system("cls");
			}
			if(y==11)
			{
				system("cls");
				system("tree g:&&tree g:|clip");
				system("pause");
				system("cls");
			}
			if(y==12)
			{
				system("cls");
				system("tree h:&&tree h:|clip");
				system("pause");
				system("cls");
			}
			if(y==13)
			{
				system("cls");
				system("tree i:&&tree i:|clip");
				system("pause");
				system("cls");
			}
			if(y==14)
			{
				system("cls");
				system("ipconfig/all&&ipconfig/all|clip");
				system("pause");
				system("cls");
			}
			if(y==15)
			{
				system("cls");
				system("nbtstat -o&&nbtstat -o|clip");
				system("pause");
				system("cls");
			}
			if(y==16)
			{
				system("cls");
				system("netstat -a&&netstat -a|clip");
				system("pause");
				system("cls");
				}
			if(y==17)
			{
				system("cls");
				system("netstat -e&&netstat -a|clip");
				system("pause");
				system("cls");
			}
			if(y==18)
			{
				system("cls");
				system("netstat -n&&netstat -n|clip");
				system("pause");
				system("cls");
			}
			if(y==19)
			{
				system("cls");
				system("netstat -n -o&&netstat -n -o|clip");
				system("pause");
				system("cls");
			}
			if(y==20)
			{
				system("cls");
				system("arp -a&&arp -a|clip");
				system("pause");
				system("cls");
			}
			if(y==21)
			{
				system("cls");
				system("route print&&route print|clip");
				system("pause");
				system("cls");
			}
			if(y==22)
			{
				system("cls");
				system("net view /domain:workgroup&&net view /domain:workgroup|clip");
				system("pause");
				system("cls");
			}
			if(y==23)
			{
				system("cls");
				system("net share&&net share|clip");
				system("pause");
				system("cls");
			}
			if(y==24)
			{
				system("cls");
				system("net user&&net user|clip");
				system("pause");
				system("cls");
			}
			if(y==25)
			{
				system("cls");
				system("net group&&net group|clip");
				system("pause");
				system("cls");
			}
			if(y==26)
			{
				system("cls");
				system("netsh wlan show profiles&&netsh wlan show profiles|clip");
				system("pause");
				system("cls");
			}
			if(y==27)
			{
				
			}
		}
		if(CoutCode==2)
		{
			system("cls");
			system("title ERIC������");
			int y;
			cout<<" 1 �ðٶ�����������\n";
			cout<<" 2 ���Ĺ���Ա����Ϊ12345\n";
			cout<<" 3 �½�һ���У�xxx���˻�,����Ϊ123\n��Ҫɾ���ոյ�xxx�˻�?�������123\n";
			cout<<" 4 �ھ����������ر������\n";
			cout<<" 5 ��������\n"; 
			cout<<" 6 ����ʱ��\n"; 
			cout<<" 7 ��ʱ�ػ�\n";
			cout<<" 8 Զ�̸��������еļ�����ػ�������\n";
			cout<<" 9 �������ذ�ȫ����\n" ;
			cout<<"10 ���÷���\n";
			cout<<"11 ������ҳ\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				system("ping www.baidu.com");
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				system("net user administrator 12345");
				system("pause");
				system("cls");
			}
			if(y==3)
			{
				system("cls");
				system("net user xxx 123 /add");
				system("pause");
				system("cls");
			}
			if(y==123)
			{
				system("cls");
				system("net user xxx /del");
				system("pause");
				system("cls");
			} 
			if(y==4)
			{
				system("cls");
				system("net config server /hidden:yes");
				system("pause");
				system("cls");
			}
			if(y==5)
			{
				system("cls");
				system("date");
				system("pause");
				system("cls");
			}
			if(y==6)
			{
				system("cls");
				system("time");
				system("pause");
				system("cls");
			}
			if(y==7)
			{
				system("cls");
				string tempString;	
				cout<<"�����ڼ����ػ���";	
				int num_1;
				cin>>num_1;	
				while(num_1 != 0)
				{
					tempString = char((num_1 % 10) + 48) + tempString;
					num_1 = num_1 / 10;
				}
				char chr[255];
				for(int i = 0; i <= tempString.size(); i++)
				{	
					chr[i] = tempString[i];
				}	
				char cmdTemp[] = "shutdown -s -t ";	
				strcat(cmdTemp, chr);
				cout<<"�˵��Խ���"<<tempString<<"���ػ�!"<<endl;	
				system(cmdTemp);
				system("pause");
				system("cls");
			}
			if(y==8)
			{
				system("cls");
				system("shutdown -i");
				system("pause");
				system("cls");
			}
			if(y==9)
			{
				system("cls");
				cout<<"������(���ڽ�����󵯳�)\n\n\n";
				system("pause");
				cout<<"\n";
				cout<<"1.�򿪡��˻����ԡ���>���˻��������ԡ�\n";
				system("pause");
				cout<<"\n";
				cout<<"2.ѡ�С��˻�������ֵ��,�һ�\n";
				system("pause");
				cout<<"\n";
				cout<<"3.ѡ������\n"; 
				system("pause");
				cout<<"\n";
				cout<<"4.ϵͳ�������������ֵ�Ķ���,���ȷ��\n";
				system("pause");
				cout<<"\n";
				cout<<"5.�ٴε��ȷ��\n";
				system("pause");
				cout<<"\n";
				cout<<"��ɣ�����";
				cout<<"\n";
				system("secpol.msc");
				system("pause"); 
			}
			if(y==10)
			{
				system("cls"); 
				cout<<"������\n";
				system("pause");
				cout<<"\n";
				cout<<"1.˫������Ҫ���õķ���";
				system("pause");
				cout<<"\n";
				cout<<"2.������������ѡ�񡰽��á�";
				system("pause");
				cout<<"\n";
				cout<<"3.����·���ȷ����";
				system("pause"); 
				cout<<"\n"; 
				cout<<"��ɣ�����";
				cout<<"\n"; 
				system("services.msc");
				system("pause");		
			}
			if(y==11)
			{
				
			}
		}
		if(CoutCode==3)
		{
			system("title ERIC��ѧ��");
			system("cls");
			int y;
			cout<<"1 �ӷ�\n";
			cout<<"2 ����\n";
			cout<<"3 �˷�\n";
			cout<<"4 ����\n";
			cout<<"5 ��(��)����\n";
			cout<<"6 Բ������ȡֵ3.14��\n";
			cout<<"7 Բ��\n"; 
			cout<<"8 쳲���������\n"; 
			cout<<"9 ������ҳ\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"���롰���� �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a+b;
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				cout<<"���롰������ �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a-b;
				system("pause");
				system("cls");
			} 
			if(y==3)
			{
				system("cls");
				cout<<"���롰���� �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a*b;
				system("pause");
				system("cls");
			} 
			if(y==4)
			{
				system("cls");
				cout<<"���롰������ �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a/b;
				system("pause");
				system("cls");
			} 
			if(y==5)
			{
				system("cls");
				double a,b,h;
				cout<<"�������볤����ĳ����\n"; 
				cin>>a>>b>>h;
				cout<<"������ı������"<<a*b*2+a*h*2+b*h*2<<"\n";
				cout<<"������������"<<a*b*h; 
				system("pause");
				system("cls");
			} 
			if(y==6)
			{
				system("cls");
				double r,h;
				cout<<"��������Բ���İ뾶�͸�"<<endl;
				cin>>r>>h;
				cout<<"Բ���ı������"<<3.14*r*r*h+3.14*r*r*2<<endl;
				cout<<"Բ���������"<<3.14*r*r*h;
				system("pause");
				system("cls");
			}
			if(y==7){	
				system("cls");
				double r;
				cout<<"����Բ�εİ뾶"<<endl;
				cin>>r;
				cout<<"Բ�������"<<3.14*r*r;
				cout<<"Բ���ܳ���"<<3.14*2*r;
				system("pause"); 
			}
			if(y==8){
				system("cls");
				int n;
				cout<<"�ڼ�����:"; 
				cin>>n;
				cout<<"쳲��������е�"<<n<<"������";
				n--;
				if(n==0){
					cout<<0<<endl;
					system("pause");
				}
				if (n <= 2)
				{
					cout<<1<<endl;
					system("pause");
				}
				int a = 1;
				int b = 1;
				int c = 1;
				for (int i = 3; i <= n; i++)
				{
					a = b;
					b = c;
					c = a + b;
				}
				cout<<c<<endl;
				system("pause");
			}
			if(y==9)
			{
				
			} 
		}
		if(CoutCode==101)
		{
			system("color 2f");
			system("cls");
			system("title ����ָ��");
			cout<<"�������������ս��\n";
			cout<<"��Ӱ֮ǰ�밴ָ�����ĵ��Խ������ã�\n";
			cout<<"ָ�����£�\n\n\n";
			cout<<"1.�ڡ�������塱���ҵ������򡱣����Ҵ�\n";
			cout<<"2.�ڡ��������ҵ����򿪻�ر�Windows���ܡ�\n";
			cout<<"3.��ѡ��Telnet���������Լ���Telnet�ͻ��ˡ�\n";
			cout<<"4.ȷ���Ժ�ȴ�һ�ᣬֱ������ر�\n";
			cout<<"5.��󣬴���������\n";
			cout<<"ע�⣺ERIC�����100s����Ҫ�ż�(��Ҳ���԰�����������ȴ�)\n";
			system("pause");
			system("control.exe");
			system("timeout /t 100");
			system("cls");
			system("telnet towel.blinkenlights.nl");
			system("pause");
		}
		if(CoutCode==102)
		{
			system("color 2f");
			system("cls"); 
			system("title ����ָ��");
			cout<<"Eric Cfstar��������������յ�֪ʶ��ռ�˷�������֪ʶͳ��ͼ:\n";
			cout<<"Cmd:\n";
			cout<<"��������������������������������������������������������������������������������\n";
			cout<<"������Bat��:\n";
			cout<<"��������������������������������������������������������������������������\n";
			cout<<"DDoS:\n";
			cout<<"��������������������������������������������������������������������\n";
			cout<<"Nmap:\n";
			cout<<"������������������������������������������������������������������\n";
			cout<<"Dev-C++:\n";
			cout<<"��������������������������\n";
			cout<<"VBS:\n";
			cout<<"��������������������\n";
			cout<<"VB:\n";
			cout<<"������\n";
			cout<<"Python:\n";
			cout<<"��\n";
			cout<<"MySql:\n";
			cout<<"��\n";
			cout<<"Delphin:\n\n\n";
			cout<<"(����û��ʾ�����Ҹ�������Delphin����/doge)\n";
			cout<<"���ˣ�";
			system("pause"); 
		}
		if(CoutCode==10000)
		{
			system("color 2f");
			system("title ��������"); 
			system("cls");
			cout<<"����ERIC�����������£�\n";
			cout<<"1.Hidden/hidden :��ʾ������������\n";
			cout<<"2.Film/film/Movie/movie :�ۿ�ASCII�������ս\n";
			cout<<"3.Eric/EricCfstar :����EricCfstar��ͳ��ͼ\n";
			cout<<"*.Ericissb/Admin/yuanzui_cf :�ڡ�ERICЭ�顷���룬�����ƹ���¼��ע��\n";
			system("pause");
		}
	}
}


