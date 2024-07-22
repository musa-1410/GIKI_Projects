#include <iostream>
#include <string>
using namespace std;

class Artwork
{
	protected:
		string title;
		string artist;
		string medium;
		float price;
		int dimensions;
	public:

		float getPrice() const 
		{
   			 return price;
		}
		string getTitle()
		{
			return title;
		}
		
		static int TotalArtworks;
		const float ComPer = 0.02;
		Artwork(string t, string a, string m, float p, int d) : title(t), artist(a), medium(m), price(p), dimensions(d) {} 
		
		virtual void printingDetails()
	{
			cout << "Title: " << title << endl;
			cout << "Artist: " << artist << endl;
			cout << "Medium: " << medium << endl;
			cout << "Price: " << price << endl;
			cout << "Dimensions: " << dimensions << endl;
	}
	
	void operator<(Artwork *oth)
	{
		if (this->price < oth->price)
		{
			cout<<"Price of your artwork is less than this one."<<endl;
		}
		else
		{
			cout<<"Price of your artwork is greater than this one."<<endl;
		}
	}
	
	friend float CalcTotalValue ();
};

int Artwork::TotalArtworks = 0;

class Painting : public Artwork
{
	protected:
		string type;
	public:
		Painting(string t, string a, string m, float p, int d, string pt) : Artwork(t, a, m, p, d), type(pt) {} 
		
		void printingDetails()
		{
			Artwork::printingDetails();
			cout << "Type: " << type << "\n"<<endl;
		}
		
		~Painting() {}
};

class Calligraphy : public Painting
{
	protected:
		string style;
	public:
		Calligraphy(string t, string a, string m, float p, int d, string pt, string s) : Painting(t, a, m, p, d, pt), style(s) {}
		
		void printingDetails()
		{
			Artwork::printingDetails();
			cout << "Style: " << style <<"\n"<< endl;
		}
		
		~Calligraphy() {}
};

class Sculpture : public Artwork
{
	protected:
		int height;
	public:
		Sculpture(string t, string a, string m, float p, int d, int h) : Artwork(t, a, m, p, d), height(h) {} 
		
		void printingDetails()
		{
			Artwork::printingDetails();
			cout << "Height: " << height <<"\n"<< endl;
		}
	
		~Sculpture() {}
};

class DigitalArt : public Artwork
{
	protected:
		string softwareUsed;
		int resolution;
	public:
		DigitalArt(string t, string a, string m, float p, int d, string su, int r) : Artwork(t, a, m, p, d), softwareUsed(su), resolution(r) {} 
		
		void printingDetails()
		{
			Artwork::printingDetails();
			cout << "Software: " << softwareUsed << endl;
			cout << "Resolution: " << resolution <<"\n"<< endl;
		}
		
		~DigitalArt() {}
};

class Manage 
{
	public:
		Artwork ** artwork;
		int count=0;
		Manage()
		{
			artwork = new Artwork*[5];
			for (int i=0; i<5; i++)
			{
				artwork[i] = 0;
			}
		}
		
		void AddArtwork (Artwork* art)
		{
			if (count<5)
			{
				artwork[count++] = art;
				art->TotalArtworks++;
			}
			else 
			{
				cout<<"Art Gallery is full"<<endl;
			}
		}
		
		void RemoveArtwork (Artwork* art)
		{
			for (int i=0; i<count; i++)
			{
				if (artwork[i]==art)
				{
					artwork[i]=artwork[count-1];
					artwork[count-1]=nullptr;
					count--;
					return;
				}
				else 
				{
					cout<<"Art not found"<<endl;
				}
			}
			
		}
		
		int getTotalArtworks()
		{
			return Artwork::TotalArtworks;
		}
		
		void printArtworks()
		{
		    for (int i = 0; i < count; i++)
		    {
		        artwork[i]->printingDetails();
		    }
		}
		
		friend float CalcTotalValue (Manage&);
		friend float calComission(const Artwork* art);
		
		~Manage()
		{
			for (int i=0; i<count; i++)
			{
				delete artwork [i];
			}
			delete [] artwork;
			artwork = nullptr;
		}
};

float CalcTotalValue (Manage& manage)
{
    float sum = 0;
    for (int i=0; i<manage.count; i++)
    {
        sum += manage.artwork[i]->getPrice();
    }
    return sum;
}

float calComission(const Artwork* art) 
{
    return art->getPrice() * art->ComPer; 
}

int main()
{
    Manage gallery;

    while (true) 
	{
        cout << "\n----- WELCOME TO GIKIART -----" << endl;
        cout << "Select an option:" << endl;
        cout << "1. Add artwork" << endl;
        cout << "2. Remove artwork" << endl;
        cout << "3. Print details of artworks" << endl;
        cout << "4. Calculate total value" << endl;
        cout << "5. Commision of Art Gallery" << endl;
        cout << "6. Exit"<<endl;

        int choice;
        cin >> choice;

        if (choice == 1) 
		{
            cout << "Select artwork type: " << endl;
            cout << "1. Painting" << endl;
            cout << "2. Calligraphy" << endl;
            cout << "3. Sculpture" << endl;
            cout << "4. Digital Art" << endl;

            int artworkType;
            cin >> artworkType;

            string title, artist, medium, type, style, softwareUsed;
            float price;
            int dimensions, height, resolution;

            cout << "Enter title: ";
            cin.ignore();
            getline(cin, title);

            cout << "Enter artist: ";
            getline(cin, artist);

            cout << "Enter medium: ";
            getline(cin, medium);

            cout << "Enter price: ";
            cin >> price;

            cout << "Enter dimensions: ";
            cin >> dimensions;

            if (artworkType == 1) 
			{
                cin.ignore();
                cout << "Enter type: ";
                getline(cin, type);
                gallery.AddArtwork(new Painting(title, artist, medium, price, dimensions, type));
            } 
			else if (artworkType == 2) 
			{
                cin.ignore();
                cout << "Enter type: ";
                getline(cin, type);
                cout << "Enter style: ";
                getline(cin, style);
                gallery.AddArtwork(new Calligraphy(title, artist, medium, price, dimensions, type, style));
            } 
			else if (artworkType == 3) 
			{
              cin.ignore();
                cout << "Enter height: ";
                cin >> height;
                gallery.AddArtwork(new Sculpture(title, artist, medium, price, dimensions, height));
            } 
			else if (artworkType == 4) 
			{
                cin.ignore();
                cout << "Enter software used: ";
                getline(cin, softwareUsed);
                cout << "Enter resolution: ";
                cin >> resolution;
                gallery.AddArtwork(new DigitalArt(title, artist, medium, price, dimensions, softwareUsed, resolution));
            } 
			else 
			{
                cout << "Invalid artwork type" << endl;
            }
        } 
		else if (choice == 2) 
		{
            cout << "Enter title of artwork to remove: ";
            string title;
            cin.ignore();
            getline(cin, title);

            for (int i = 0; i < gallery.getTotalArtworks(); i++) 
			{
                if (gallery.artwork[i]->getTitle() == title) 
				{
                    gallery.RemoveArtwork(gallery.artwork[i]);
                    break;
                }
            }
        } 
		else if (choice == 3) 
		{
            gallery.printArtworks();
        } 
		else if (choice == 4) 
		{
            cout << "Total value: " << CalcTotalValue(gallery) << endl;
        } 
		else if (choice == 5) 
		{	
			cout << "Enter title of artwork to check commission: ";
            string title;
            cin.ignore();
            getline(cin, title);
            
			float total;
            for (int i=0; i<5; i++)
            {
            	for (int i = 0; i < gallery.getTotalArtworks(); i++) 
			{
                if (gallery.artwork[i]->getTitle() == title) 
				{
                    total = calComission(gallery.artwork[i]);
                    break;
                }
			}
			}
        if (total > 0) 
		{
          cout << "Total Commission: $" << total << endl;
        } 
		else 
		{
          cout << "No artworks added yet." << endl;
        } 	 
    	}
        else if (choice == 6) 
		{
            break;
        } 
		else 
		{
            cout << "Invalid option" << endl;
        }
    }

    return 0;
}
