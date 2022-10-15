
#include <stdio.h>

void
main ()
{
  int d, m, a, y;
  srand (time (NULL));
  a = rand () % 12 + 1;

  printf ("Know your hororscope");
  printf ("\n here the olest is 1996");
  printf ("\n1\tjanuary");
  printf ("\n2\tfabruary");
  printf ("\n3\tmarch");
  printf ("\n4\tapril");
  printf ("\n5\tmay");
  printf ("\n6\tjune");
  printf ("\n7\tjuly");
  printf ("\n8\taugust");
  printf ("\n9\tseptember");
  printf ("\n10\toctomber");
  printf ("\n11\tnovember");
  printf ("\n12\tdecember");
  printf ("\nchoose your birth month");
  scanf ("%d", &m);
  switch (m)
    {				//for month
    case 1:			//january 
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{			//year
	case 2009:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 25)
	    printf ("\nrat");
	  else
	    printf ("\nox");
	  break;
	case 1998:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 27)
	    printf ("\nox");
	  else
	    printf ("\ntiger");
	  break;
	case 2012:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 22)
	    printf ("\nrabbit");
	  else
	    printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nenter your birth date:");
	  scanf ("%d", &d);
	  if (d <= 23)
	    printf ("\ndragon");
	  else
	    printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 30)
	    printf ("\nsnake");
	  else
	    printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 31)
	    printf ("\nhorse");
	  break;
	case 2004:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 21)
	    printf ("\ngoat");
	  else
	    printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 27)
	    printf ("\nmonkey");
	  else
	    printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 28)
	    printf ("\nrooster");
	  else
	    printf ("\ndog");
	  break;
	case 2020:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 24)
	    printf ("\npig");
	  else
	    printf ("\n data not found");
	  break;


	}
      break;
    case 2:			//tfabruary
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1996:
	  printf ("\nenter your birht date");
	  scanf ("%d", &d);
	  if (d >= 19)
	    printf ("\nrat");
	  else
	    printf ("\n no data found");
	  break;
	case 1997:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 6)
	    printf ("\nrat");
	  else
	    printf ("\nox");
	  break;
	case 2008:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d >= 7)
	    printf ("\nrat");
	  else
	    printf ("\npig");
	  break;
	case 2010:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 13)
	    printf ("\nox");
	  else
	    printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 15)
	    printf ("\ntiger");
	  else
	    printf ("\nrabbit");
	  break;
	case 2011:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 2)
	    printf ("\ntiger");
	  else
	    printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 4)
	    printf ("\nrabbit");
	  else
	    printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nenter you birth date");
	  scanf ("%d", &d);
	  if (d <= 9)
	    printf ("\ndragon");
	  else
	    printf ("\nsnke");
	  break;
	case 2002:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 11)
	    printf ("\nsnake");
	  else
	    printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 18)
	    printf ("\nhorse");
	  else
	    printf ("\ngoat");
	  break;
	case 2003:
	  printf ("\nenter your birht date:");
	  scanf ("%d", &d);
	  if (d >= 1)
	    printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 7)
	    printf ("\ngoat");
	  else
	    printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nenter your birht date");
	  scanf ("%d", &d);
	  if (d <= 8)
	    printf ("\nmonkey");
	  else
	    printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 15)
	    printf ("\nrooster");
	  else
	    printf ("\ndog");
	  break;
	case 2007:
	  printf ("enter your birth date");
	  scanf ("%d", &d);
	  if (d <= 17)
	    printf ("\ndog");
	  else
	    printf ("\npig");
	  break;
	case 2019:
	  printf ("\nenter your birth date");
	  scanf ("%d", &d);
	  if (d <= 4)
	    printf ("\ndog");
	  else
	    printf ("\npig");
	  break;

	}
    case 3:
      printf ("\n enter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	  break;
	}
      break;
    case 4:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 5:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 6:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 7:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 8:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 9:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}

      break;
    case 10:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 11:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    case 12:
      printf ("\nenter your birth year");
      scanf ("%d", &y);
      switch (y)
	{
	case 1997:
	  printf ("\nox");
	  break;
	case 1998:
	  printf ("\ntiger");
	  break;
	case 1999:
	  printf ("\nrabbit");
	  break;
	case 2000:
	  printf ("\ndragon");
	  break;
	case 2001:
	  printf ("\nsnake");
	  break;
	case 2002:
	  printf ("\nhorse");
	  break;
	case 2003:
	  printf ("\ngoat");
	  break;
	case 2004:
	  printf ("\nmonkey");
	  break;
	case 2005:
	  printf ("\nrooster");
	  break;
	case 2006:
	  printf ("\ndog");
	  break;
	case 2007:
	  printf ("\npig");
	  break;
	case 2008:
	  printf ("\nrat");
	  break;
	case 2009:
	  printf ("\nox");
	  break;
	case 2010:
	  printf ("\ntiger");
	  break;
	case 2011:
	  printf ("\nrabbit");
	  break;
	case 2012:
	  printf ("\ndragon");
	  break;
	case 2013:
	  printf ("\nsnake");
	  break;
	case 2014:
	  printf ("\nhorse");
	  break;
	case 2015:
	  printf ("\ngoat");
	  break;
	case 2016:
	  printf ("\nmonkey");
	  break;
	case 2017:
	  printf ("\nrooster");
	  break;
	case 2018:
	  printf ("\ndog");
	  break;
	case 2019:
	  printf ("\npig");
	  break;
	}
      break;
    }
  switch (a)
    {
    case 1:
      printf ("\nyou are smart,charming and imaginative");
      break;
    case 2:
      printf ("\nyou are dependable and hard working");
      break;
    case 3:
      printf ("\nyou are impulsive but playful");
      break;
    case 4:
      printf ("\nyou are sensitive and kind");
      break;
    case 5:
      printf ("\nyou are majestic and demanding");
      break;
    case 6:
      printf ("\nyou are wise and grounded");
      break;
    case 7:
      printf ("\nyou are energetic and cheerful :)");
      break;
    case 8:
      printf ("\nyou are gentle and balanced");
      break;
    case 9:
      printf ("\nyou are loving and charming");
      break;
    case 10:
      printf ("\n you are proud but talktive");
      break;
    case 11:
      printf ("\n you are well liked and loyal the great type");
      break;
    case 12:
      printf ("\nyou are honest but diplomatic");
      break;


    }


}
