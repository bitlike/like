	#include<iostream.h>
	#include<iomanip.h>
    #include<math.h>
	class student
	{
	public :
		student(){
		//cout<<"success called"<<endl;
		}
		~student(){
	    //cout<<"success called"<<endl;
		}
	    friend void getcha(student &B,student &C,int b1);
    	void  inset(long a,int b,int c,int d) ;
	    void getxuehao();
		void getchengji();
	    static void Sum(student M,int b);
		static void average1();
		static void average2();
        static int getb(student M,int h);
	    static void Y(student N);
	private:
		  long x;int y,z,w;
		  static double sum,n,g;
	};
		double student::sum =0;
		double student::n =0;
		double student:: g=0;
		void student::inset(long a,int b,int c,int d) 
		{x=a; y=b;z=c;w=d;  }  
		void student::Sum (student M,int b)
		{ switch(b) 
		{case 1:sum=sum+M.y;break;
		case 2:sum=sum+M.z;break;
		case 3:sum=sum+M.w;break;}
		n=n+1;}
		void student::Y(student M)
		{g=M.y+M.w+M.z;}
		int student::getb(student M,int h)
		{if(M.x==h)
		return 1;
		else return 0;}
		void student::getxuehao ()
		{cout<<"学号："<<x<<endl;}
		void student::getchengji()
		{ cout<<"成绩："<<"score1="<<y<<" "<<"score2="<<z<<" "<<"score"<<w<<endl;}
		void student::average1 ()
		{ cout<<"该科目的平均成绩为："<<setiosflags(ios::fixed)<<setprecision(2)<<sum/n<<endl;}
		void student::average2 ()
		{   cout<<"该学生的总分为："<<g<<endl;
			cout<<"该学生的平均成绩为："<<setiosflags(ios::fixed)<<setprecision(2)<<g/3<<endl;}
		void getcha(student &B,student &C,int b1)
		{switch(b1) 
		{case 1:cout<<"成绩差为："<<abs(B.y-C.y)<<endl;break;
		case 2:cout<<"成绩差为："<<abs(B.z-C.z)<<endl;break;
		case 3:cout<<"成绩差为："<<abs(B.w-C.w)<<endl;break;}}
	main()
		{student a[100];
		int n,x1,x2,x3,x4,m=0 ,d,d1,i,j,j1,j2,j3=0,j4=0;
		cout<<"请输入学生人数：" ;
		cin>>n; 
		cout<<"请输入学号和科目1 2 3的成绩：" <<endl;
		while(m<=n-1)
		{
			cin>>x1>>x2>>x3>>x4;
			a[m++].inset(x1,x2,x3,x4);}
			cout<<"请输入要计算的成绩的科目编号：";
			cin>>d;
		for(i=0;i<=m-1;i++)
			{student::Sum (a[i],d);
			}	
		student::average1();
		cout<<"请输入要查询的学生学号:";
		cin>>j;
		for(i=0;i<=m-1;i++)
		{ if(student::getb(a[i],j))
		break;
		else 
		if(i==m-1)
		{cout<<"输入错误！！！"<<endl;
		goto k;}}
		a[i].getxuehao ();
		 a[i].getchengji();
		student::Y(a[i]);
		student::average2();
		cout<<"请输入要算差的学生学号:";
		cin>>j1>>j2;
		for(i=0;i<=m-1;i++)
		{ if(student::getb(a[i],j1))
		{j3=i;break;}}
		for(i=0;i<=m-1;i++)
		{ if(student::getb(a[i],j2))
		{j4=i;break;}}
			cout<<"请输入要计算的成绩的科目编号：";
			cin>>d1;
		getcha(a[j3],a[j4],d1);
	k:return 0;
		}