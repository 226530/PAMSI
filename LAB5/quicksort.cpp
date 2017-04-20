#include <iostream>

#include "quicksort.hh"
#include "tablica.hh"

	QuickSort::QuickSort()
	{}

	void QuickSort::KopiujTablice(Tablica &obj)
	{
		for(unsigned int i = 0; i < obj.ZwrocRozmiar(); ++i)
		{
			_kopia.Wpisz(i, obj[i]);
		}
	}

	void QuickSort::DrukujKopie()
	{
		_kopia.Drukuj();
	}


	void QuickSort::SortujKopie( int lewy, int prawy, int typ_piwot)
	{

		int i = lewy;
	    int j = prawy;
	    int x = 0;
	   
	   switch(typ_piwot)
	   {
	   		case '1':
	   		{
	   			x = _kopia[i];
	   		}

	   		case '2':
	   		{
	   			x = _kopia[j];
	   		}	
	   		
	   		default:
	   			{
	   				x = _kopia[(lewy + prawy ) / 2 ];
	   				break;
	   			}
	   }

	    do
	    {
	        while( _kopia[ i ] < x )
	             i++;
	        
	        while( _kopia[ j ] > x )
	             j--;
	        
	        if( i <= j )
	        {
	            std::swap(_kopia[ i ], _kopia[ j ] );
	            
	            i++;
	            j--;
	        }
	    } while( i <= j );
	    
	    if( lewy < j ) Sortuj(_kopia, lewy, j, typ_piwot );
	    
	    if( prawy > i ) Sortuj(_kopia, i, prawy , typ_piwot );
	    //_kopia.Drukuj();
	}
	


	void QuickSort::Sortuj(Tablica &obj, int lewy, int prawy, int typ_piwot)
	{
		int i = lewy;
	    int j = prawy;
	    int x = 0;
	   // int x = obj[(lewy + prawy ) / 2 ];
	   // int x = obj[j];
	   // int x = obj[prawy];

	   switch(typ_piwot)
	   {
	   		case '1':
	   		{
	   			x = obj[i];
	   		}

	   		case '2':
	   		{
	   			x = obj[j];
	   		}	
	   		
	   		default:
	   			{
	   				x = obj[(lewy + prawy ) / 2 ];
	   				break;
	   			}
	   }

	    do
	    {
	        while( obj[ i ] < x )
	             i++;
	        
	        while( obj[ j ] > x )
	             j--;
	        
	        if( i <= j )
	        {
	            std::swap(obj[ i ], obj[ j ] );
	            
	            i++;
	            j--;
	        }
	    } while( i <= j );
	    
	    if( lewy < j ) Sortuj(obj, lewy, j, typ_piwot );
	    
	    if( prawy > i ) Sortuj(obj, i, prawy , typ_piwot );
	   

	}

	void QuickSort::WykonajAlgorytm(unsigned int ile)
	{
		SortujKopie(0,ile, 3);
	}

