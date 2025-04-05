#include<iostream.h>
void mainmenu();
void submenuA();
void submenuB();
void submenuC();
void submenuD();
void count_of_rty();
void change_to_number();
void small_char_to_capital();
int power(int x , int n );
int factorial( int n );
void sum_perfect();
void max_odd_digit(int num);
float avg_prime(int num);
void binarytodeaimal();
void deaimaltobinary();

main()
{
	char choice;
	mainmenu();
	cout<<"Please , enter  your choice :"<<endl;
	cin>>choice;
	switch(choice){//
	case'A':
	{
		char choic;
		submenuA();
	   	cout<<"Please , enter  your choice :"<<endl;
	    cin>>choic;
	    switch(choice)
	    {
    		case('1'):
   	  	        count_of_rty();  
         	    break;
         	
        	case('2'):
		        change_to_number();
            	break;
         	
	        case('3'):
		        small_char_to_capital();
         	    break;
         	
        	case('4'):
        		mainmenu();
            	break;
         	
        	default:
            	cout<<"Value not allowed."<<endl;

    	
	  } 
	  break;
  case('B'):
  {
		char choic;
		submenuB();
	   	cout<<"Please , enter  your choice :"<<endl;
	    cin>>choic;
	    switch(choice)
	    {
    		case('1'):
   	  	        {  
        	  	    int x,n,sign=-1;
                    float sum=0;
                   
                    cout << "Please, enter the number x:\n ";
                    cin>>x;
                    cout<<"Please, enter the number of terms n:"<<endl;
                    cin >>n;
                    
                    for(int i=1;i<=n;i+=2)
                    {
                        sign=sign*(-1);
                        sum=sum+(power(x,i)/(factorial(i)*1.0))*sign;
                    }
                     cout<<"sin(" << x << ") = "<<sum<<endl;	
                     break;
        	    }  
         	
         	
        	case('2'):
	        	{
	        			int x,n, sign=1;
                        float sum=1;
                        
                        cout << "Please, enter the number x:\n ";
                        cin>>x;
                        cout<<"Please, enter the number of terms n:"<<endl;
                        cin >>n;
                        
                        for(int i=2;i<=n;i+=2)
                        {
                            sign=sign*-1;
                            sum=sum+(power(x,i)/(factorial(i)*1.0))*sign;
                        }
                        cout<<"cos(" << x << ") = "<<sum<<endl;
						break;
	        	}
        	
        	
	        case('3')://///////////////////////////////////////////////////////////////////////////////////////////////
		        {
        				int x,n;
                        float sum=1;
                       
                        cout << "Please, enter the number x:\n ";
                        cin>>x;
                        cout<<"Please, enter the number of terms n:"<<endl;
                        cin >>n;
                        for(int i=2;i<=n;i+=2)/////////////
                        {   
                           sign=sign*-1;
                           sum=sum+(power(x,i)/(power((x-1),(i+1))*1.0))*sign;
                        }
                        cout<<"cos(" << x << ") = "<<sum<<endl;
						break;
        		}
         	
         	
        	case('4'):
        		mainmenu();
         	    break;
         	
        	default:
            	cout<<"Value not allowed."<<endl;

    	}
        break;
	}
	
	case('C'):
	{
		
		char choic;
		submenuC();
	   	cout<<"Please , enter  your choice :"<<endl;
	    cin>>choic;
	    switch(choice)
	    {
    		case('1'):
        	  	  	sum_perfect();    
     	            break;
         	
        	case('2'):
		        { 
                	int num;
                	cout << "Please, enter your number: " << endl;
                    cin >> num;
                  	max_odd_digit(num);
				    break; 

        		}
        	
        	
	        case('3'):
                {
        	  	  	int num;
	                cout << "Please, enter any  number: " << endl;
                    cin >> num;
    
                 	float average = avg_prime(num);
                 	cout<<"The average of prime numbers from 1 to "<<num<<" is :" << average <<endl; 
                	break;
                }
         	
         	
        	case('4'):
        		mainmenu();
         	    break;
         	
        	default:
            	cout<<"Value not allowed."<<endl;

    	}
		break;
	}
	
	case('D'):
	{
	    char choic;
	    submenuD();
	   	cout<<"Please , enter  your choice :"<<endl;
	    cin>>choic;
	    switch(choice)
	    {
    		case('1'):
   	  	        binarytodeaimal();  
         	    break;
         	
        	case('2'):
		        deaimaltobinary();
            	break;
        	
        	default:
            	cout<<"Value not allowed."<<endl;

        	
  	   }
	break;
	}
		case('E'):
		cout<<"End of program."<<endl;
		break;

       	default:
	    cout<<"Value not allowed."<<endl;
	
	}
}

void mainmenu()
{
	cout<<"A. Count characters, change text numbers to integers and converts small character to capital."<<endl;
    cout<<"B. Series."<<endl;
    cout<<"C. Sum Perfects, Max Digits and Average Number."<<endl;
	cout<<"D. Binary and Decimal."<<endl;
	cout<<"E. Exit."<<endl;
}

void submenuA()
{
	cout<<"1. count characters."<<endl;
    cout<<"2. change text to numbers to integers."<<endl;
    cout<<"3. converts small character to capital."<<endl;
	cout<<"4. Return to main menu."<<endl;

}

void submenuB()
{
	cout<<"1. Sin(X)=x-x^3/3!+x^5/5!-x^7/7!......x^n/n!"<<endl;
    cout<<"2. Cos(X)=1-x^2/2!+x^4/4!-x^6/6!.....x^n/n!"<<endl;
    cout<<"3. F2= 1 + x1/(x-1)2 + x2/( x-1)3  +  x3/( x-1)4……+ xn/( x-1)n+1…xn/n!. "<<endl;
	cout<<"4. Return to the main menu."<<endl;

}

void submenuC()
{
	cout<<"1. Sum perfect numbers."<<endl;
    cout<<"2. Max Odd Digit."<<endl;
    cout<<"3. Average Prime numbers."<<endl;
	cout<<"4. Return to main menu."<<endl;
}

void submenuD()
{
	cout<<"1. Binary to decimal." <<endl;
    cout<<"2. Decimal to binary."<<endl;
}

void count_of_rty()
{
	char word ;
	int counterr=0, countert=0, countery=0;
	cout<<"please, enter any characters:\n";
	cin>>word;
	while(word!='q')
	{
		if(word=='r')
		  counterr++;
	    else if (word=='t')
		  countert++; 
		else if (word =='y')
		  countery++;
        cout<<"please, enter any characters:\n";
     	cin>>word;
	}
	cout<< "The occurrence of (r) is :"<<counterr<<endl;
	cout<< "The occurrence of (t) is :"<<countert<<endl;
	cout<< "The occurrence of (y) is :"<<countery<<endl;   
}

void change_to_number()
{
	char word ;
	cout<<"Please,Enter Your Letters:\n";
	cin>>word;
	while(word!='q')
	{
		if(int(word)>=48&&int(word)<=57)
        cout<<char(word);
     	cin>>word;
	}
	
}

void small_char_to_capital()
{
	char word ;
	cout<<"Please,enter your small character:\n";
	cin>>word;

		if(int(word)>=97&&int(word)<=112)
		{
			cout<<char(word)<<"---->"<<(char)int(word -32)<<endl;;

		}
        else
        cout<<"You have entered an invalid value."<<endl;

}

int power(int x , int n )
{
	int pow = 1 ;
	for(int i = 1; i <= n ;i++)
	{
		pow*= x ;
	}
	return(pow);
		
}

int factorial( int n )
{
	
	int fact = 1 ;
	for(int i = 1; i<=n ;i++)
	{
		fact*= i ;
	}
	return(fact);
		
}

void max_odd_digit(int num)
{
	
   if(num<0)
      num=num*-1;
      
   int digit , maxodd=0;
   while(num!=0)
	{
		digit=num%10;
		if(digit%2==1)
		{
			 if(digit>maxodd)
			       maxodd=digit;	
		}
		num/=10;
   	}
	cout<< " ---> The Maximum odd Digit is:"<< maxodd<<endl;
}

void binarytodeaimal()
{
    int num, mod= 0, binary = 0, product = 1,numb; 
    
    cout << "Please, enter any binary number: " << endl;
    cin >> num;
    
    numb=num;
    
    while (num != 0)
   {
        mod = num % 10; 
        binary = binary + (mod * product);
        
        num = num / 10;
        product = product * 2; 
    }
    
    cout << numb<<" in binary = " << binary <<" in decimal "<< endl;
 
}

void deaimaltobinary()
{
	
    int num, mod= 0, decimal = 0, product = 1,numb; 
    
    cout << "Please, enter any decimal number: " << endl;
    cin >> num;
    
    numb=num;
    
    while (num != 0)
   {
        mod = num % 2; 
        decimal = decimal + (mod * product);
        
        product = product * 10; 
        num = num / 2;
        
    }
    
    cout << numb<<" in decimal = " << decimal <<" in binary "<< endl;

}

float avg_prime(int num)
{
	int sum=0, counter2=0; 
	float avg ;
    
    for(int i = 1 ; i<=num ; i++)
    {   
	    int counter=0;
    	for(int j =1 ; j<= i ;j++)
    	{
	    	if(i%j==0)
	    	{
	    		counter++;
	    	} 
	    }
	    if(counter==2)
	    {
	        sum+=i;
	        counter2++;
    	}
	    
    }
    
    avg=sum/(counter2*1.0);
    return(avg);
}

void sum_perfect()
{
	int num;
	int c=0;
	int sum=0;
	int totalsum=0;
	
	cout << "Please, enter any number: " << endl;
    cin >> num;
    for(int i=1 ; i<num; i++)
    {   
	    sum=0;
    	for(int j=1 ; j<i ; j++)
    	{   

	    	if(i%j==0)
	    	   sum=sum+j;
   	    }
	    
	    if(sum==i)
	    { c++;
         if(c==1)
         cout<<"The perfect numbers from 1 to "<<num <<" is : "<<endl;
    	 totalsum+=i;
   		 cout<<i<<endl;
   		 
    	}
    }
    cout<<"the summation of perfect numbers from 1 to "<<num<<" is "<<totalsum<<endl;
    
}



