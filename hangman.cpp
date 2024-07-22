#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void hangman(int wrong)
{
	if(wrong==0)
	{
		cout<<"                                ***                "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                           *   o   o   *           "<<endl;
		cout<<"                           *     `     *           "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                                 *                 "<<endl;	
	}
	else if(wrong==1)
	{
		cout<<"                                ***                "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                           *   o   o   *           "<<endl;
		cout<<"                           *     `     *           "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                 *                 "<<endl;	
		cout<<"                                 *                 "<<endl;	
	}
	else if(wrong==2)
	{
		cout<<"                                ***                "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                           *   o   o   *           "<<endl;
		cout<<"                           *     `     *           "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                ***                "<<endl;
		cout<<"                               * * *               "<<endl;
		cout<<"                              *  *  *              "<<endl;
		cout<<"                             *   *   *             "<<endl;
		cout<<"                            *    *    *            "<<endl;	
		cout<<"                           *     *     *           "<<endl;	
	}
	else if(wrong==3)
	{
		cout<<"                                ***                "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                           *   o   o   *           "<<endl;
		cout<<"                           *     `     *           "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                                ***                "<<endl;
		cout<<"                               *|*|*               "<<endl;
		cout<<"                              * |*| *              "<<endl;
		cout<<"                             *  |*|  *             "<<endl;
		cout<<"                            *   |*|   *            "<<endl;	
		cout<<"                           *    |*|    *           "<<endl;
	}
	else if(wrong==4)
	{
		cout<<"                                ***                "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                           *   o   o   *           "<<endl;
		cout<<"                           *     `     *           "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                                 *                 "<<endl;
		cout<<"                               /***\\              "<<endl;
		cout<<"                              /*|*|*\\             "<<endl;
		cout<<"                             /* |*| *\\            "<<endl;
		cout<<"                            /*  |*|  *\\           "<<endl;
		cout<<"                           /*   |*|   *\\          "<<endl;	
		cout<<"                          /*    |*|    *\\         "<<endl;
	}
	else if(wrong==5)
	{
		cout<<"                                ***                "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                           *   o   o   *           "<<endl;
		cout<<"                           *     `     *           "<<endl;
		cout<<"                             *       *             "<<endl;
		cout<<"                                /*\\               "<<endl;
		cout<<"                               /***\\              "<<endl;
		cout<<"                              /*|*|*\\             "<<endl;
		cout<<"                             /* |*| *\\            "<<endl;
		cout<<"                            /*  |*|  *\\           "<<endl;
		cout<<"                           /*   |*|   *\\          "<<endl;	
		cout<<"                          /*    |*|    *\\         "<<endl;
		cout<<"                               / * \\              "<<endl;
		cout<<"                              /*/  *\\             "<<endl;
		cout<<"                             /*/    *\\            "<<endl;
		cout<<"                            /*/      *\\           "<<endl;
		cout<<"                           /*/        *\\          "<<endl;
		cout<<"                          /*/          *\\         "<<endl;
		cout<<"                         /*/            *\\        "<<endl;      
	}
	else if(wrong==6)
	{
		cout<<"  ===============================+                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                            ***                "<<endl;
		cout<<" | |                         *       *             "<<endl;
		cout<<" | |                       *   o   o   *           "<<endl;
		cout<<" | |                       *     `     *           "<<endl;
		cout<<" | |                         *       *             "<<endl;
		cout<<" | |                            /*\\               "<<endl;
		cout<<" | |                           /***\\              "<<endl;
		cout<<" | |                          /*|*|*\\             "<<endl;
		cout<<" | |                         /* |*| *\\            "<<endl;
		cout<<" | |                        /*  |*|  *\\           "<<endl;
		cout<<" | |                       /*   |*|   *\\          "<<endl;	
		cout<<" | |                      /*    |*|    *\\         "<<endl;
		cout<<" | |                           / * \\              "<<endl;
		cout<<" | |                          /*/  *\\             "<<endl;
		cout<<" | |                         /*/    *\\            "<<endl;
		cout<<" | |                        /*/      *\\           "<<endl;
		cout<<" | |                       /*/        *\\          "<<endl;
		cout<<" | |                      /*/          *\\         "<<endl;
		cout<<"_| |___                  /*/            *\\        "<<endl;  
	}
	else if(wrong==7)
	{
		cout<<"  ===============================+                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                            ***                "<<endl;
		cout<<" | |                         *       *             "<<endl;
		cout<<" | |                       *   o   o   *           "<<endl;
		cout<<" | |                       *     `     *           "<<endl;
		cout<<" | |                         *       *             "<<endl;
		cout<<" | |                             *                 "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                           /***\\              "<<endl;
		cout<<" | |                          /*|*|*\\             "<<endl;
		cout<<" | |                         /* |*| *\\            "<<endl;
		cout<<" | |                        /*  |*|  *\\           "<<endl;
		cout<<" | |                       /*   |*|   *\\          "<<endl;	
		cout<<" | |                      /*    |*|    *\\         "<<endl;
		cout<<" | |                           / * \\              "<<endl;
		cout<<" | |                          /*/  *\\             "<<endl;
		cout<<" | |                         /*/    *\\            "<<endl;
		cout<<" | |                        /*/      *\\           "<<endl;
		cout<<" | |                       /*/        *\\          "<<endl;
		cout<<" | |                      /*/          *\\         "<<endl;
		cout<<"_| |___                  /*/            *\\        "<<endl;  
	}
	else if(wrong=8)
	{
		cout<<"  ===============================+                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                             |                 "<<endl;
		cout<<" | |                            ***                "<<endl;
		cout<<" | |                         *       *             "<<endl;
		cout<<" | |                       *   o   o   *           "<<endl;
		cout<<" | |                       *     `     *           "<<endl;
		cout<<" | |                         *       *             "<<endl;
		cout<<" | |                             *                 "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;
		cout<<" | |                                               "<<endl;	
		cout<<" | |                                               "<<endl;
		cout<<" | |                         /****|||\\**//        "<<endl;
		cout<<" | |                     //*** ||///|*|*****///||  "<<endl;
		cout<<" | |                   ** * /* * /* * */* **** **  "<<endl;
		cout<<" | |                * ** \\**  |* * *** |** * * |* "<<endl;
		cout<<" | |              * * * * * * * * ** \\ * * * *  * "<<endl;
		cout<<"_| |___                                            "<<endl;  
	}
}

int countspace (string temp, int &count)
{
	for (int i=0; temp[i]!='\0';i++)
	{
		count++;
	}
	return count;
}

void chance(int chances)  
{
cout<< endl  <<"                                 "<<  "Guesses remaining" << " ( " << chances  << " ) ";
}
int main()
{
	cout<<" **    **      ***      ***    **   ******  ***        ***      ***      ***    **    "<<endl;
	cout<<" **    **     ** **     ****   **  **    ** ****      ****     ** **     ****   **    "<<endl;
    cout<<" ********    **   **    ** **  ** **        ** **    ** **    **   **    ** **  **    "<<endl;
	cout<<" ********   *********   **  ** ** **    *** **  **  **  **   *********   **  ** **    "<<endl;
	cout<<" **    **  **       **  **   ****  **    ** **   ****   **  **       **  **   ****    "<<endl;                                 
	cout<<" **    ** **         ** **    ***   ******  **    **    ** **         ** **    ***    "<<endl;
	cout<<endl;
	
	int chances=9,count=0,correct=0;
	const char* country[]= {"china","italy","iran","'egypt","vietnam","france","turkey","germany","korea"};
	srand(time(0));
	int ansIndex=rand()%10;
	string temp=country[ansIndex];
	countspace(temp,count);
	
	cout<<"Welcome to Hangman Game"<<endl;
	cout<<"In this game you have to guess the name of a Country"<<endl;
	cout<<"Enter the Name of a Country with "<< count << " letters"<<endl;
	
	for (int i=0;i<count;i++)
	{
		cout<<" _ ";
	}
	cout<<"."<<endl;
	cout<<endl;
	cout<<"Enter the alphabet = ";
	
	char input;
	cin>>input;
	
	string change (count,'_');
	while (chances>1)
	{
		for (int i=0; i<count;i++)
		{
			if(change[i] == input)
			{
				cout<<"You already entered the alphabet"<<endl;
				count++;
			}
		}
		bool state = true;
		for (int i=0; i<count; i++)
		{
			if (input==temp[i])
			{
				correct++;
				change[i] = input;
				cout<<" "<<input<<" ";
				state = false;
			}
			else 
			{
				cout <<" " << change[i] << " " ;
			}
		}  
		
	if(correct == count) 
	{
		cout << endl << "Congrats! You Won,"<<endl;
		cout<< "The country was : " << country[ansIndex];
		break;
	}
	int wrong;
	if(state) 
	{
	   chances--;
	   wrong++;
	   cout << endl;
	   hangman(wrong);
	   cout << endl;
	   chance(chances);
	}
	cout << endl << endl << "Enter alphabet = ";
	cin >> input;
	cout << endl;
}
    if(chances == 1) 
    {
	cout << endl << "You lost, the country was : " << country[ansIndex];
    } 
	return 0;
}
