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
		{cout<<"ѧ�ţ�"<<x<<endl;}
		void student::getchengji()
		{ cout<<"�ɼ���"<<"score1="<<y<<" "<<"score2="<<z<<" "<<"score"<<w<<endl;}
		void student::average1 ()
		{ cout<<"�ÿ�Ŀ��ƽ���ɼ�Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<sum/n<<endl;}
		void student::average2 ()
		{   cout<<"��ѧ�����ܷ�Ϊ��"<<g<<endl;
			cout<<"��ѧ����ƽ���ɼ�Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<g/3<<endl;}
		void getcha(student &B,student &C,int b1)
		{switch(b1) 
		{case 1:cout<<"�ɼ���Ϊ��"<<abs(B.y-C.y)<<endl;break;
		case 2:cout<<"�ɼ���Ϊ��"<<abs(B.z-C.z)<<endl;break;
		case 3:cout<<"�ɼ���Ϊ��"<<abs(B.w-C.w)<<endl;break;}}
	main()
		{student a[100];
		int n,x1,x2,x3,x4,m=0 ,d,d1,i,j,j1,j2,j3=0,j4=0;
		cout<<"������ѧ��������" ;
		cin>>n; 
		cout<<"������ѧ�źͿ�Ŀ1 2 3�ĳɼ���" <<endl;
		while(m<=n-1)
		{
			cin>>x1>>x2>>x3>>x4;
			a[m++].inset(x1,x2,x3,x4);}
			cout<<"������Ҫ����ĳɼ��Ŀ�Ŀ��ţ�";
			cin>>d;
		for(i=0;i<=m-1;i++)
			{student::Sum (a[i],d);
			}	
		student::average1();
		cout<<"������Ҫ��ѯ��ѧ��ѧ��:";
		cin>>j;
		for(i=0;i<=m-1;i++)
		{ if(student::getb(a[i],j))
		break;
		else 
		if(i==m-1)
		{cout<<"������󣡣���"<<endl;
		goto k;}}
		a[i].getxuehao ();
		 a[i].getchengji();
		student::Y(a[i]);
		student::average2();
		cout<<"������Ҫ����ѧ��ѧ��:";
		cin>>j1>>j2;
		for(i=0;i<=m-1;i++)
		{ if(student::getb(a[i],j1))
		{j3=i;break;}}
		for(i=0;i<=m-1;i++)
		{ if(student::getb(a[i],j2))
		{j4=i;break;}}
			cout<<"������Ҫ����ĳɼ��Ŀ�Ŀ��ţ�";
			cin>>d1;
		getcha(a[j3],a[j4],d1);
	k:return 0;
		}