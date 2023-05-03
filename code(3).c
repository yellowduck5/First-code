//#include <stdio.h>
//void main ()
//{
// printf("\t\t\t**********学生信息管理系统********** \n\n");
// printf("\t\t\t*            ver 1.0               * \n\n");
// printf("\t\t\t*==================================* \n\n");
// printf("\t\t\t*   1.新生报到      2.信息查询     * \n\n");//输出表格
// printf("\t\t\t*   3.信息修改      4.删除信息     * \n\n");
// printf("\t\t\t*   5.浏览全部      6.退出系统     * \n\n");
// printf("\t\t\t*==================================* \n\n");
// printf("\t\t\t请输入功能序号 (1-6) ;\n\n");
// 
//}


//#include <stdio.h>
//int main ()
//{
// float r,s;
// printf("半径r=");//单算圆面积
// scanf("%f",&r);
// s=3.1415926*r*r;
// printf("圆的面积为%0.3f\n",s);
//return 0;
//}

//#define PI 3.1415926
//#include <stdio.h>
//void main()
//{
// double r,h,v;
// printf("请依次输入半径，高\n");  //圆柱体体积
// scanf("%lf%lf",&r,&h);
// v=PI*r*r*h;
// printf("圆柱体的体积为%0.3lf\n\n",v);
//
//}

//#include <stdio.h>
//void main()
//{
// int a,b,age;
// printf("依次输入<出生年份><当前年份>\n\n");//年龄计算
// scanf("%d%d",&a,&b);
// age=b-a;
// printf("你的年龄为%d\n\n",age);
//}

//#include <stdio.h>
//void main()
//{
// double r,s,c;
// printf("圆的半径R="); //计算圆的面积与周长
// scanf("%lf",&r);
// s=3.1415*r*r;
// c=2*3.14159*r;
// printf("圆的面积S=%.3f   圆的周长C=%.3f\n",s,c);
//
//}

//#include <stdio.h>
//void main ()
//{
 //float a,b,c,v;
 //printf("请依次输入长宽高:");//立方体体积计算
 //scanf("%f%f%f",&a,&b,&c);
 //v=a*b*c;
 //printf("该立方体的体积 v=");
 //printf("%.3f\n",v);

//}

//#include <stdio.h>
//void main ()
//{
// int x,y;
// printf("依次输入想要转换成八进制和十六进制数\n"); //十进制转换十六进制和八进制
// scanf("%d%d",&x,&y);
// printf("第一个数字的八进制为%o \t第二个数字的十六进制为%X\n",x,y);
// printf("第一个数字的十六进制为%X\t第二个数字的八进制为%o\n",x,y);
//}						
//#include <stdio.h>
//void main ()
//{
// int a,b,s,y;
// printf("请输入被除数:");
// scanf("%d",&a);
// printf("请输入除数:");
// scanf("%d",&b);
// //printf("请依次输入被除数和除数:");
// //scanf("%d%d",&a,&b);
// s=a/b;
// y=a%b;
// printf("商为:%d\n余数为:%d\n",s,y);
//}

//#include <stdio.h>
//void main()
//{
// int n,gw,sw,bw;
// printf("请输入要求的整数:");
// scanf("%d",&n);
// gw=n%10;
// sw=n/10%10;
// bw=n/100%10;
// printf("个位=%d\n十位=%d\n百位=%d\n",gw,sw,bw);
// 
//}

//#include <stdio.h>
//void main ()
//{
// double x;
// printf("请输入需要保留两位小数的实数:");
// scanf("%lf",&x);
// x=(int)(x*100+0.5)/100.0;
// printf("结果=%.2f\n",x);
//}

//#include <stdio.h>
//void main ()
//{
// int a,b;						   //未完成代码
// scanf("%d",&a);
// b=a%4=0&&a%100=0||a%400=0;
// if ()
//}

//#include <stdio.h>
//void main()
//{
// int a,b,c;
// printf("请依次输入需要交换的两个整数\n");//交换整数 (赋值法)
// printf("a=");
// scanf("%d",&a);
// printf("b=");
// scanf("%d",&b);
// c=a;
// a=b;
// b=c;
// printf("交换结果如下\n");
// printf("a=%d\tb=%d\n",a,b);
//}

//#include <stdio.h>
//void main ()
//{
//int a,b;
//printf("请依次输入需要交换的两个整数:\n");	//交换整数 (异或运算法)
// printf("a=");
// scanf("%d",&a);
// printf("b=");
// scanf("%d",&b);a^b,b^a,a^b;
//printf("交换结果如下\n");
//printf("a=%d\tb=%d\n",a,b);
//}

//#include <stdio.h>
//void main()
//{
// int a,b,c,d,e; //三个数比大小
// printf("请输入三个数进行比较大小:\n");
// printf("a=");
// scanf("%d",&a);
// printf("b=");
// scanf("%d",&b);
// printf("c=");
// scanf("%d",&c);
// d=a>b?a:b,e=d>c?d:c;
// printf("三个数中最大的是:");
// printf("%d\n",e);
//}

//#include <stdio.h>
//void main ()
//{
//  int a,b,c;
//  printf("请输入三个数比较大小:");
//  scanf("%d%d%d",&a,&b,&c);
//  a=a>b?a:b,a=a>c?a:c;
//  printf("三个数中最大的是:");
//  printf("%d\n",a);
//}

//#include <math.h>
//#include <stdio.h>
//void main ()
//{
// double x,y,z;
// printf("计算x的y次方\n");
// printf("请依次输入x,y：");
// scanf("%lf%lf",&x,&y);
// z=pow (x,y);
// printf("x的y次方=%.3f\n",z);
//
//}

//#include <math.h>
//#include <stdio.h>
//void main()
//{
// double x,y;
// printf("计算一个数的算术平方根\n");
// printf("x=");
// scanf("%lf",&x);
// if (x>=0)
// {
//   y=sqrt(x);
//   printf("x的算术平方根=%.3f\n",y);
// }
// if (x<0)
//	 printf("请输入一个非负数哦！！！\n");
//}

//#include <math.h>
//#include <stdio.h>
//void main ()
//{
// double x,y;
// printf("计算一个数的算术平方根\n");
// printf("x=");
// scanf("%lf",&x);
// if(x>=0)
// {
//   y=sqrt(x);
//   printf("x的算术平方根=%.3f\n",y);
// }
// else
//   printf("请输入一个非负数哦！！！\n");
//}

//#include <stdio.h>
//void main()
//{
//	int x;
//	scanf("%d",&x);
//	if (x == 1) printf("今天是周一\n");
//	else if (x == 2)  printf("今天是周二\n");
//	else if (x == 3)  printf("今天是周三\n");
//	else if (x == 4)  printf("今天是周四\n");
//	else if (x == 5)  printf("今天是周五\n");
//	else if (x == 6)  printf("今天是周六\n");
//	else if (x == 7)  printf("今天是周日\n");
//	else printf("你在说什么???\n");
//}

//#include <stdio.h>
//void main ()
//{
// double x,y,z;
// printf("三个数比大小\n第一个数x=");   //三个数大小比较
// scanf("%lf",&x);
// printf("第二个数y=");
// scanf("%lf",&y);
// printf("第一个数z=");
// scanf("%lf",&z);
// if (x>y)
//	x=x;
// else
//	x=y;
// if (x>z)
//	x=x;
// else
//	x=z;
//printf("三个数中最大的是%.2f\n",x);
//}
//
//#define PI 3.1415926
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//void main ()
//{
//int x;
//	 printf("\t	**************代码汇总************** \n\n");
//	 printf("\t	*            ver 1.0               * \n\n");
//	 printf("\t	*==================================* \n\n");
//	 printf("\t	*  1.圆的面积与周长   2.圆柱体体积 * \n\n");//输出表格
//	 printf("\t	*  3.立方体体积计算   4.年龄计算   * \n\n");
//	 printf("\t	*  5.三个数比较大小   6.平方根     * \n\n");
//   printf("\t	*  7.分数等级         8.暂无       * \n\n");
//	 printf("\t	*==================================* \n\n");
//	 printf("请输入功能序号 (1-6);  ");
//	 scanf("%d",&x);
// if (x==1)
//{
//	 double r,s,c;
//	 printf("计算圆的面积与周长\n");
//	 printf("圆的半径R="); //计算圆的面积与周长
//	 scanf("%lf",&r);
//	 s=PI*r*r;
//	 c=2*PI*r;
//	 printf("圆的面积S=%.3f   圆的周长C=%.3f\n",s,c);
// }
// if (x==2)
// {
//	 double r,h,v;
//	 printf("计算圆柱体体积\n");
//	 printf("请依次输入半径，高\n");  //圆柱体体积
//	 scanf("%lf%lf",&r,&h);
//	v=PI*r*r*h;
//	 printf("圆柱体的体积为%0.3lf\n\n",v);
// }
//
// if (x==4)
// {
//	 int a,b,age;
//	 printf("依次输入<出生年份><当前年份>\n\n");//年龄计算
//	 scanf("%d%d",&a,&b);
//	 age=b-a;
//	 printf("你的年龄为%d\n\n",age);
// }
//
// if (x==3)
// {
//	  float a,b,c,v;
//	 printf("请依次输入长宽高:\n");//立方体体积计算
//	 printf("长=");
//	 scanf("%f",&a);
//	 printf("宽=");
//	 scanf("%f",&b);
//	 printf("高=");
//	 scanf("%f",&c);
//	 v=a*b*c;
//	 printf("该立方体的体积 v=");
//	 printf("%.3f\n",v);
// }
//
// if (x==5)
// {
//	 double x,y,z;
//	 printf("三个数比大小\n第一个数x=");   //三个数大小比较
//	 scanf("%lf",&x);
//	 printf("第二个数y=");
//	 scanf("%lf",&y);
//	 printf("第一个数z=");
//	 scanf("%lf",&z);
//	if (x>y)
//		x=x;
//	 else
//		x=y;
//	if (x>z)
//		x=x;
//	else
//		x=z;
//	printf("三个数中最大的是%.2f\n",x);
// }
//
// if (x==6)
// {
//	double x,y;
//	 printf("计算一个数的算术平方根\n");
//	 printf("x=");
//	 scanf("%lf",&x);
//	 if(x>=0)
//	 {
//	   y=sqrt(x);
//	   printf("x的算术平方根=%.3f\n",y);
//	 }
//	 else
//	   printf("请输入一个非负数哦！！！\n");
//	 }
// if ( x==7)
// {
//	double s;
//	char g;
// printf("请输入分数\n分数=");
// scanf("%lf",&s);
// if (s>=0&&s<=100)
// {
//	 if (s>90)
//		 g='A';
//	 else if (s>=80)     ///////////有问题！
//		 g='B';
//	 else if (s>=70)
//		 g='C';
//	 else if (s>=60)
//		 g='D';
//	 else if
//		 g='E';
//	 printf("你的等级为%c\n",g);
// }
// else
//	 printf("您输入的成绩有误！！！\n ");
// }
//
//
// Sleep (4000);
//}


//#include <stdio.h>
//void main ()
//{
// int a,i;
// a=0;
// i=1;
// while (i<=100)
// {
//  a=a+i;
//  i++;
// }
// printf("%d\n",a);
//}

//#include <stdio.h>
//void main ()
//{
//  int s,i;
//  for (
//		s=0,i=1;
//		i<=100;
//		i++
//	  )
//		s=s+i;
//	  
//  printf("%d\n",s);
//}

//#include <stdio.h>
//void main ()
//{ 
// int i;
// double s,f;
// s=0;f=1;
// for (i=1;i<=8;i++)
//	 {
//		f=f*i;
//	    s+=f;
//     }
//
//	printf("%.0f\n",s);
//}

//#include <stdio.h>
//void main ()
//{
// int s,i;
// i=1;
// s=0;
// do{s+=i;i++;}
// while(i<=100);
// printf("%d\n",s);
//}


//#include <stdio.h>
//void main ()
//{
//	int s,i;
//	s=0;
//	i=1;
//	for (s)
//}

//#include <stdio.h>
//void main ()
//{
// double s;
// char g;
// printf("请输入分数\n分数=");
// scanf("%lf",&s);
// if (s>=0&&s<=100)
// {
//	 if (s>90)
//		 g='A';
//	 else if (s>=80)
//		 g='B';
//	 else if (s>=70)
//		 g='C';
//	 else if (s>=60)
//		 g='D';
//	 else 
//		 g='E';
//	 printf("你的等级为%c\n",g);
// }
// else
//	 printf("您输入的成绩有误！！！\n ");
//}

//#include <stdio.h>
//void main ()
//{
// int s;
// char g;
//  printf("请输入分数\n分数=");
// scanf("%d",&s);
// if (s>=0&&s<=100)
// {
// switch ((int)s/=10)
// {
//	case 10 :
//	case 9 : 
//   		 g='A';break;
//	case 8 :
//		 g='B';break;
//	case 7 :
//		 g='C';break;
//	case 6 :
//		 g='D';break;
//	default :
//		 g='E';
// }
//  printf("你的等级为%c\n",g);
//  
//}
//  else
//	 printf("您输入的成绩有误！！！\n ");
//}

//#include <stdio.h>
//void main()
//{
//  int  year,month,day;
//   printf("Please input a year:");
//  scanf("%d",&year);
//  printf("Please input a month:");
//  scanf("%d",&month);
//  switch(month)
//  {
//   case 1: case 3:  case 5:  case 7:  case 8:  case 10:  case 12: day=31;break;
//   case 4: case 6:  case 9:  case 11: day=30;break;
//   case 2:  
//	  if(year%4==0&&year%100!=0||year%400==0)
//		  day=29;
//	  else
//		  day=28;
//	  break;
//  }
//  printf("%d month has %d days\n",month ,day);
// }


//#include <stdio.h>
//void main()
//{
	//double sum,i;
	//i=1,sum=0;
	//while(i<=100)
	//{
	//	sum=sum+1/i;
	//	i++;
	//}
	//printf("%f\n",sum);
	//int i,sum;
	//i=1,sum=0;
	//while (i<=100)
	//{
	//	sum=sum+i*i;
	//	i++;
	//}
	//printf("%d\n",sum);
	//int i,sum;
	//i=1,sum=0;
	//while (i<=100)
	//{
	//	sum=sum+i;
	//	i=i+2;
	//}
	//printf("%d\n",sum);
	//int i,sum;
	//i=1,sum=0;
	//while (i<=100)
	//{
    //    if(i%2==0)	  
	//	  sum=sum-i;  	  
	//  else
	//	  sum=sum+i;
	//  i++;
	//}
	//printf("%d\n",sum);

//#include <stdio.h>
//#include <math.h>
//main()
//{ 
//    float sum = 0, term = 1,n = 1;   
//    int    sign = 1;            
//                       
//    while (fabs(term) >= 1e-4)
//    {
//        sum = sum + term;           
//        sign = -sign;     //实现+-         
//        n = n + 2;        //分母+2        
//        term = sign * (1/n);   //主要算法         
//    }
//     
//    printf("sum=%f\n",sum);
//}


//#include <stdio.h>
//#include <math.h>
//void main ()
//{
//	double s,sign,n;
//	n=1,s=0,sign=1;
//	while (fabs(sign/n)>=1e-4)
//	{
//		s+=sign/n;
//		n+=2;
//		sign=-sign;
//	}
//	printf("和值是：%f\n",s);
//}

//#include <stdio.h>
//void main ()
//{
//	int f1,f2,f3,i;
//	f1=1;
//	f2=1;
//	printf("%5d%5d",f1,f2);
//	for (i=3;i<=20;i++)
//	{
//		f3=f1+f2;
//		printf("%5d",f3);
//		f1=f2;
//		f2=f3;
//		if(i%5==0)
//			printf("\n");
//	}
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,k,n;
//	printf(" 行数为：");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		for (j=1;j<=i-1;j++)
//			printf(" ");
//		for (k=1;k<=(2*n+1)-2*i;k++)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,k,n;
//	n=0;
//	for (i=1;i<=4;i++)
//		for (j=1;j<=4;j++)
//			for (k=1;k<=4;k++)
//				if (i!=j&&i!=k&&j!=k)
//				{
//					printf("%d\n",100*i+10*j+k);
//					n++;
//				}
//	printf("一共有%d个数符合\n",n);	
//} 

//#include <stdio.h>
//void main ()
//{
//	double x,s,a;
//	int i,j,N,M;
//	printf("请依次输入学生人数，科目数目：");
//	scanf("%d%d",&N,&M);
//	for (i=1;i<=N;i++)
//	{
//		s=0;
//		printf("请依次输入第%d学生的成绩\n",i);
//		for (j=1;j<=M;j++)
//		{
//			
//			scanf("%lf",&x);
//			s+=x;
//		}
//		a=s/M;
//		printf("该同学的平均分为：%.3f\n\n",a);
//	}
//		
//		
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,n;
//	printf("请输入行数:");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		for (j=1;j<=i-1;j++)
//			printf(" ");
//		for (j=1;j<=(2*n+1)-2*i;j++)
//			printf("*");
//		printf("\n");
//	}   
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,n;
//	n=0;
//	for (i=3;i<=100;i++)
//	{
//		for (j=2;j<=i-1;j++)
//			if (i%j==0)
//				break;		
//		if (i==j)
//		{
//			printf("%6d",i);
//			n++;
//			if (n%5==0)
//				printf("\n");	
//		}
//		
//	}
//	printf("\n共有%d个素数\n",n);
//}

//#include <stdio.h>
//#define N 10
//void main ()
//{
// double s[N],a=0;
// int i;
// printf("请输入十个同学的成绩：");
// for (i=0;i<=N-1;i++)
// {
//	scanf("%lf",&s[i]);
//	a+=s[i];
// }
// a/=N;
// printf("\n平均分为：%.2f\n\n",a);
// for (i=0;i<=N-1;i++)
//	if (s[i]<a)
//		printf ("低于平均分的是：%d号  他的分数是：%.2f\n\n",i+1,s[i]);
// printf("\n");
//
//}

//#include <stdio.h>
//#define N 5
// void main ()
// {
//	int i,max,min,a[N];
//	printf("请依次输入要比较的数：");
//	for (i=0;i<=N-1;i++)
//		scanf("%d",&a[i]);
//	min=max=a[0];
//	for (i=1;i<=N-1;i++)
//		if (a[i]>max)
//			max=a[i];
//		else
//			min=a[i];
//	printf("\n最大值为：%d\n\n最小值为：%d\n\n",max,min);
//
//
// }

//#include <stdio.h>/////统计字符
//void main ()
//{
//	int ge,qi,shu[10]={0},i;
//	char a=0;
//	ge=qi=0;
//	while ((a=getchar())!=EOF)
//	{
//		if (a==' '||a=='\n'||a=='\t')
//			ge++;
//		else if (a>='0'&&a<='9')
//			++shu[a-'0'];
//		else 
//			qi++;
//		
//	}
//	for (i=0;i<10;i++)	
//		printf("数字%d有%d个\n",i,shu[i]);
//	printf("空白符号%d个\n其他%d个\n",ge,qi);
//}


//#include <stdio.h>//////////////////// 冒泡排序法
//#define N 5
//void main ()
//{
//	int a[N],i,j,x;
//	for (i=0;i<=N-1;i++)
//		scanf("%d",&a[i]);
//
//	for (i=1;i<=N-1;i++)
//		for (j=1;j<=N-i;j++)
//		{
//			if (a[j-1]>a[j])
//			{
//				x=a[j];
//				a[j]=a[j-1];
//				a[j-1]=x;
//			}
//		}
//	
//	for (i=0;i<=N-1;i++)
//		printf("%5d",a[i]);
//	printf("\n");
//}



//#include "stdlib.h"/////////////////选择排序法
//#include "stdio.h"
//void main()
//{   int i,j,k,t,a[10];
//    for(i=0;i<10;i++)
//          a[i]=rand()%61+30;
//    for(i=0;i<9;i++)
//     {
//  /***********space***********/
//        k=i;
//          for(j=i+1;j<10;j++)
//  /***********space***********/
//              if(a[k]>a[j])
//                     k=j;
//         if(k!=i) 
//         {   t=a[k];
//  /***********space***********/
//            a[k]=a[i];
//             a[i]=t;
//           }
//      } 
//  for(i=0;i<10;i++)
//    printf("%5d",a[i]);
//  printf("\n");
//}
