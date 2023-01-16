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
	system("title 预备页面");
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
	cout<<"				   *　　　　 *"<<endl;
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
	cout<<"        				        龙门工作室、生草实验室\n"; 
	system("timeout /t 5");
	system("cls");
	cout<<"--------------------------"<<endl;
	cout<<"           ERIC "<<endl;
	cout<<"      Version   5.0"<<endl;
	cout<<"  生草实验室、龙门工作室"<<endl; 
	cout<<"--------------------------"<<endl<<endl;
	cout<<" 按任意键进入ERIC...";
	system("pause>nul");
	Tips();
}
void Tips()
{
	system("title 《ERIC用户协议》");
	system("cls");
	system("color 2f");
	cout<<"				《ERIC用户协议》\n";
	cout<<"1.该程序使用的账号密码为本地储存，请注意密码设置，切勿与QQ、微信等重要软件密码相同。\n";
	cout<<"2.该程序由生草实验室制作，请勿进行破解、仿冒。\n";
	cout<<"3.请勿输入与程序选项无关的任何字母、数字或者符号，会导致程序紊乱。\n";
	cout<<"4.该程序仅用于学习，若对电脑进行不当操作，生草实验室概不负责。\n";
	cout<<"5.该程序源码未发布，若希望进行参考学习请联系作者，生草实验室将根据情况给予源代码。\n";
	cout<<"6.建议可发至作者QQ或者邮箱。\n";
	cout<<"\n\n";
	cout<<"是(Y)否(N)同意上述内容？[Y/N]\n";
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
	system("title 《ERIC指南》");
	system("cls");
	system("color 2f");
	ofstream OutFile;
	ifstream InFile;
	InFile.open("username.info");
	InFile>>username;
	InFile.close();
	cout<<"欢迎新用户"<<username<<"!";
	system("timeout /t 3");
	system("cls");
	system("color 7c");
	cout<<"当登录次数超过3次后，《ERIC指南》将自动移至Home板块。\n";
	system("timeout /t 5");
	system("cls");
	system("color 2f");
	cout<<"				《ERIC指南》\n";
	cout<<"1.ERIC账户和密码忘记了怎么办？\n";
	cout<<"2.ERIC上面的字体为什么会闪动，我不能输入选项？\n";
	cout<<"3.我为什么从Home界面来到了《ERIC指南》？\n";
	cout<<"4.ERIC为什么很卡？\n";
	cout<<"5.返回\n";
	cout<<" >";
	int x;
	cin>>x;
	if(x==1)
	{
		system("cls");
		cout<<"解答：\n";
		cout<<"你似乎忘了《ERIC用户协议》里说,密码采用本地存储。所以你只需把ERIC这个程序产出的文件：username.info和password.info删除就行\n\n";
		system("pause"); 
		Home();
	}
	if(x==2)
	{
		system("cls");
		cout<<"解答：\n";
		cout<<"你似乎忘了《ERIC用户协议》里说,不能输入除选项外任何字母、数字或者符号。\n";
		cout<<"你可能输错了选项代码\n";
		cout<<"系统会出现紊乱。\n";
		cout<<"退出再重进就行了！\n\n";
		system("pause");
		Home();
	}
	if(x==3)
	{
		system("cls");
		cout<<"你可能按错键了。系统判断用户输入错误的选项代码后，会自动转入这里。\n";
		system("pause");
	} 
	if(x==4)
	{
		system("cls");
		cout<<"解答：\n";
		cout<<"请耐心等待一会。\n";
		cout<<"程序可能需要加载。\n\n"; 
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
	system("title ERIC登录/注册");
	char lor;
	if(Login_TOF==0)
	{
		cout<<"登录(Y)还是注册(N)？[Y/N]\n";
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
		system("title 登录ERIC");
		InFile.open("username.info");
		InFile>>username;
		InFile.close();
		InFile.open("password.info");
		InFile>>password;
		InFile.close();
		cout<<"用户名|";
		cin>>usname;
		cout<<"密  码|";
		cin>>passw;
		if(usname!=username)
		{
			system("cls");
			system("color 7c");
			cout<<"用户名错误！\n";
			system("timeout /t 5");
			return Login();
		}
		else
		{
			if(password!="Ijloedioj^&EFYUIDEHFjk"+passw+"8uf3efiojaedf8uj8")
			{
				system("cls");
				system("color c");
				cout<<"密码错误！\n";
				system("timeout /t 5");
				return Login();
			}
			else
			{
				system("cls");
				system("color f2");
				cout<<"登录成功！\n";
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
					cout<<"检测到您为新用户，是(1)否(0)前往阅读《ERIC指南》？\n";
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
				cout<<"您已注册ERIC账号，请直接登录！\n"<<endl;
				system("timeout /t 5");
				return Login();
			}
			else
			{
				Login_TOF=2;
				system("title 注册ERIC");
				system("cls"); 
				string username;
				string pass1,pass2;
				cout<<"用户名|";
				cin>>username;
				cout<<"密码|";
				cin>>pass1;
				cout<<"密码|";
				cin>>pass2;
				if(pass1!=pass2)
				{
					system("cls");
					system("color 7c");
					cout<<"密码输入不一致！\n";
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
					cout<<"注册成功，正在重定向至登录页面\n"<<endl;
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
		cout<<" 欢迎您, "<<username<<endl;
		cout<<" ERIC 主菜单"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about 关于ERIC\n 0 《ERIC指南》\n 1 查看系统信息\n 2 简单控制电脑\n 3 简单数学计算\n"<<endl<<endl;
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
			system("title 关于作者");
			system("cls");
			system("color 2f");
			cout<<"关于作者\n";
			_sleep(200); 
			cout<<" 龙门工作室、生草实验室 制作\n\n";
			_sleep(1000);
			cout<<"关于ERIC5\n";
			_sleep(200);
			cout<<" Version 5.0.0.0\n";
			_sleep(200);
			cout<<" Copyright (c) ERIC\n\n";
			_sleep(1000);
			cout<<"下一版本预告\n";
			_sleep(200);
			cout<<" ERIC 6.0  预计2023年发布\n\n";
			_sleep(1000);
			cout<<"下一工具预告\n";
			_sleep(200);
			cout<<" EPT插件\n";
			_sleep(200);
			cout<<" ERIC云项目\n";
			_sleep(1000);
			cout<<"你绝对玩不透这个软件！\n";
			_sleep(100);
			cout<<"快去菜单寻找隐藏指令吧！\n";
			_sleep(100);
			cout<<"                      ------Eric 留言\n"; 
			_sleep(3000);
			system("pause");
			system("cls");
			cout<<"联系方式\n";
			_sleep(200);
			cout<<" QQ:3345615469\n";
			_sleep(200);
			cout<<" Email:eric.etstudio@qq.com\n";
			_sleep(200);
			cout<<"              或\n";
			_sleep(200);
			cout<<" 官网:https://gblog.tech/\n\n\n"; 
			_sleep(1000);
			cout<<"是否需要复制联系方式？【1：好的/2：不了】\n" ;
			cout<<" >";
			_sleep(1000);
			int y;
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"复制选项\n";
				_sleep(200);
				cout<<"1 前往作者的CSDN主页\n";
				_sleep(200);
				cout<<"2 前往生草博客\n";
				_sleep(200);
				cout<<"3 复制QQ\n";
				_sleep(200);
				cout<<"4 复制Email\n";
				_sleep(200);
				cout<<"5 返回\n";
				_sleep(200);
				cout<<" >";
				_sleep(1000);
				int a;
				cin>>a;
				if(a==1)
				{
					system("cls");
					cout<<"页面即将跳转...（按任意键继续）\n";
					system("pause");
					system("start https://blog.csdn.net/qq_50594697?spm=1000.2115.3001.5343"); 
				} 
				if(a==2)
				{
					system("cls");
					cout<<"页面即将跳转...（按任意键继续）\n";
					system("pause");
					system("start https://gblog.tech"); 
				} 
				if(a==3)
				{
					system("cls");
					system("echo 3345615469|clip");
					cout<<"已复制！(按任意键继续)";
					system("pause>nul"); 
				}
				if(a==4)
				{
					system("cls");
					system("echo eric.etstudio@qq.com|clip");
					cout<<"已复制！(按任意键继续)";
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
			system("title ERIC查看类");
			system("cls");
			int y;
			cout<<" 1 查看C盘文件（并复制到电脑剪切板）\n";
			cout<<" 2 查看D盘文件（并复制到电脑剪切板）\n";
			cout<<" 3 查看E盘文件（并复制到电脑剪切板）\n";
			cout<<" 4 查看F盘文件（并复制到电脑剪切板）\n";
			cout<<" 5 查看G盘文件（并复制到电脑剪切板）\n";
			cout<<" 6 查看H盘文件（并复制到电脑剪切板）\n";
			cout<<" 7 tree查看C盘文件（并复制到电脑剪切板）\n";
			cout<<" 8 tree查看D盘文件（并复制到电脑剪切板）\n";
			cout<<" 9 tree查看E盘文件（并复制到电脑剪切板）\n";
			cout<<"10 tree查看F盘文件（并复制到电脑剪切板）\n";
			cout<<"11 tree查看G盘文件（并复制到电脑剪切板）\n";
			cout<<"12 tree查看H盘文件（并复制到电脑剪切板）\n"; 
			cout<<"13 查看计算机中所有适配器的TCP/IP信息（并复制到电脑剪切板）\n";
			cout<<"14 查看本地计算机中的NetBIOS名称表（并复制到电脑剪切板）\n";
			cout<<"15 查看当前计算机活动的TCP连接详细信息（并复制到电脑剪切板）\n";
			cout<<"16 查看本地计算机当前所有活动的TCP连接，以及侦听的TCP和UDP端口（并复制到电脑剪切板）\n";
			cout<<"17 查看本地计算机数据包查看和接收情况（并复制到电脑剪切板）\n";
			cout<<"18 查看ip连接情况（并复制到电脑剪切板）\n";
			cout<<"19 查看(数字形式)活动TCP连接的PID进程（并复制到电脑剪切板）\n"; 
			cout<<"20 查看计算机所有接口的ARP缓存表（并复制到电脑剪切板）\n";
			cout<<"21 查看ip路由器信息（并复制到电脑剪切板）\n";
			cout<<"22 查看计算机使用的工作域或工作组（并复制到电脑剪切板）\n";
			cout<<"23 查看本地计算机共享资源（并复制到电脑剪切板）\n";
			cout<<"24 查看计算机所有账户列表（并复制到电脑剪切板）\n";
			cout<<"25 查看本地计算机的本地组列表（并复制到电脑剪切板）\n";
			cout<<"26 查看所有连接过的wifi（并复制到电脑剪切板）\n";
			cout<<"27 返回主页\n"; 
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
			system("title ERIC控制类");
			int y;
			cout<<" 1 用百度来测试网速\n";
			cout<<" 2 更改管理员密码为12345\n";
			cout<<" 3 新建一个叫：xxx的账户,密码为123\n想要删除刚刚的xxx账户?输入序号123\n";
			cout<<" 4 在局域网中隐藏本计算机\n";
			cout<<" 5 更改日期\n"; 
			cout<<" 6 更改时间\n"; 
			cout<<" 7 定时关机\n";
			cout<<" 8 远程给局域网中的计算机关机或重启\n";
			cout<<" 9 启动本地安全设置\n" ;
			cout<<"10 禁用服务\n";
			cout<<"11 返回主页\n";
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
				cout<<"您想在几秒后关机：";	
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
				cout<<"此电脑将在"<<tempString<<"秒后关机!"<<endl;	
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
				cout<<"方法：(窗口将在最后弹出)\n\n\n";
				system("pause");
				cout<<"\n";
				cout<<"1.打开“账户策略”—>“账户锁定策略”\n";
				system("pause");
				cout<<"\n";
				cout<<"2.选中“账户锁定阈值”,右击\n";
				system("pause");
				cout<<"\n";
				cout<<"3.选中属性\n"; 
				system("pause");
				cout<<"\n";
				cout<<"4.系统弹出“建议的数值改动”,点击确定\n";
				system("pause");
				cout<<"\n";
				cout<<"5.再次点击确定\n";
				system("pause");
				cout<<"\n";
				cout<<"完成！！！";
				cout<<"\n";
				system("secpol.msc");
				system("pause"); 
			}
			if(y==10)
			{
				system("cls"); 
				cout<<"方法：\n";
				system("pause");
				cout<<"\n";
				cout<<"1.双击你想要禁用的服务";
				system("pause");
				cout<<"\n";
				cout<<"2.在启动类型中选择“禁用”";
				system("pause");
				cout<<"\n";
				cout<<"3.点击下方“确定”";
				system("pause"); 
				cout<<"\n"; 
				cout<<"完成！！！";
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
			system("title ERIC数学类");
			system("cls");
			int y;
			cout<<"1 加法\n";
			cout<<"2 减法\n";
			cout<<"3 乘法\n";
			cout<<"4 除法\n";
			cout<<"5 长(正)方体\n";
			cout<<"6 圆柱（π取值3.14）\n";
			cout<<"7 圆形\n"; 
			cout<<"8 斐波拉契数列\n"; 
			cout<<"9 返回主页\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"输入“加数 空格 加数”"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a+b;
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				cout<<"输入“被减数 空格 减数”"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a-b;
				system("pause");
				system("cls");
			} 
			if(y==3)
			{
				system("cls");
				cout<<"输入“乘数 空格 乘数”"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a*b;
				system("pause");
				system("cls");
			} 
			if(y==4)
			{
				system("cls");
				cout<<"输入“被除数 空格 除数”"<<endl;
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
				cout<<"依次输入长方体的长宽高\n"; 
				cin>>a>>b>>h;
				cout<<"长方体的表面积是"<<a*b*2+a*h*2+b*h*2<<"\n";
				cout<<"长方体的体积是"<<a*b*h; 
				system("pause");
				system("cls");
			} 
			if(y==6)
			{
				system("cls");
				double r,h;
				cout<<"依次输入圆柱的半径和高"<<endl;
				cin>>r>>h;
				cout<<"圆柱的表面积是"<<3.14*r*r*h+3.14*r*r*2<<endl;
				cout<<"圆柱的体积是"<<3.14*r*r*h;
				system("pause");
				system("cls");
			}
			if(y==7){	
				system("cls");
				double r;
				cout<<"输入圆形的半径"<<endl;
				cin>>r;
				cout<<"圆的面积是"<<3.14*r*r;
				cout<<"圆的周长是"<<3.14*2*r;
				system("pause"); 
			}
			if(y==8){
				system("cls");
				int n;
				cout<<"第几个数:"; 
				cin>>n;
				cout<<"斐波拉契数列第"<<n<<"个数是";
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
			system("title 隐藏指令");
			cout<<"即将播出新球大战！\n";
			cout<<"观影之前请按指令对你的电脑进行设置：\n";
			cout<<"指令如下：\n\n\n";
			cout<<"1.在“控制面板”里找到“程序”，并且打开\n";
			cout<<"2.在“程序”中找到“打开或关闭Windows功能”\n";
			cout<<"3.勾选“Telnet服务器”以及“Telnet客户端”\n";
			cout<<"4.确定以后等待一会，直到程序关闭\n";
			cout<<"5.最后，打开网络连接\n";
			cout<<"注意：ERIC会等你100s，不要着急(你也可以按任意键结束等待)\n";
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
			system("title 隐藏指令");
			cout<<"Eric Cfstar计算机各方面掌握的知识量占此方面总体知识统计图:\n";
			cout<<"Cmd:\n";
			cout<<"————————————————————————————————————————\n";
			cout<<"批处理（Bat）:\n";
			cout<<"—————————————————————————————————————\n";
			cout<<"DDoS:\n";
			cout<<"——————————————————————————————————\n";
			cout<<"Nmap:\n";
			cout<<"—————————————————————————————————\n";
			cout<<"Dev-C++:\n";
			cout<<"—————————————\n";
			cout<<"VBS:\n";
			cout<<"——————————\n";
			cout<<"VB:\n";
			cout<<"———\n";
			cout<<"Python:\n";
			cout<<"—\n";
			cout<<"MySql:\n";
			cout<<"—\n";
			cout<<"Delphin:\n\n\n";
			cout<<"(不是没显示，是我根本不会Delphin语言/doge)\n";
			cout<<"别看了，";
			system("pause"); 
		}
		if(CoutCode==10000)
		{
			system("color 2f");
			system("title 隐藏命令"); 
			system("cls");
			cout<<"所有ERIC隐藏命令如下：\n";
			cout<<"1.Hidden/hidden :显示所有隐藏命令\n";
			cout<<"2.Film/film/Movie/movie :观看ASCII版星球大战\n";
			cout<<"3.Eric/EricCfstar :关于EricCfstar的统计图\n";
			cout<<"*.Ericissb/Admin/yuanzui_cf :在《ERIC协议》输入，可以绕过登录、注册\n";
			system("pause");
		}
	}
}


