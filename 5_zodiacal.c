#include <stdio.h>

int main()
{
    int month, day;

    printf("Please enter in the your month and day of birth:\n");

    scanf("%d %d", &month, &day);

    switch(month)
    {
    case 1:
    {
	if(day>=1 && day<=19)
	{
	    printf("You are a Capricorn\n");
	    break;
	}
	if(day>=20 && day<=31)
	{
	    printf("You are an Aquarius\n");
	    break;
	}
    }
    case 2:
    {
	if(day>=1 && day<=18)
	{
	    printf("You are an Aquarius\n");
	    break;
	}
	if(day>=19 && day<=29)
	{
	    printf("You are a Pisces\n");
	    break;
	}
    }
    case 3:
    {
	if(day>=1 && day<=20)
	{
	    printf("You are a Pisces\n");
	    break;
	}
	if(day>=21 && day<=31)
	{
	    printf("You are an Aries\n");
	    break;
	}
    }
    case 4:
    {
	if(day>=1 && day<=19)
	{
	    printf("You are an Aries\n");
	    break;
	}
	if(day>=20 && day<=30)
	{
	    printf("You are a Taurus\n");
	    break;
	}
    }
    case 5:
    {
	if(day>=1 && day<=20)
	{
	    printf("You are a Taurus\n");
	    break;
	}
	if(day>=21 && day<=31)
	{
	    printf("You are a Gemini\n");
	    break;
	}
    }
    case 6:
    {
	if(day>=1 && day<=21)
	{
	    printf("You are a Gemini\n");
	    break;
	}
	if(day>=22 && day<=30)
	{
	    printf("You are a Cancer\n");
	    break;
	}
    }
    case 7:
    {
	if(day>=1 && day<=22)
	{
	    printf("You are a Cancer\n");
	    break;
	}
	if(day>=23 && day<=31)
	{
	    printf("You are a Leo\n");
	    break;
	}
    }
    case 8:
    {
	if(day>=1 && day<=22)
	{
	    printf("You are a Leo\n");
	    break;
	}
	if(day>=23 && day<=31)
	{
	    printf("You are a Virgo\n");
	    break;
	}
    }
    case 9:
    {
	if(day>=1 && day<=22)
	{
	    printf("You are a Virgo\n");
	    break;
	}
	if(day>=23 && day<=30)
	{
	    printf("You are a Libra\n");
	    break;
	}
    }
    case 10:
    {
	if(day>=1 && day<=23)
	{
	    printf("You are a Libra\n");
	    break;
	}
	if(day>=24 && day<=31);
	{
	    printf("You are a Scorpio\n");
	    break;
	}
    }
    case 11:
    {
	if(day>=1 && day<=21)
	{
	    printf("You are a Scorpio\n");
	    break;
	}
	if(day>=22 && day<=30)
	{
	    printf("You are a Sagittarius\n");
	    break;
	}
    }
    case 12:
    {
	if(day>=1 && day<=21)
	{
	    printf("You are a Sagittarius\n");
	    break;
	}
	if(day>=22 && day<=31)
	{
	    printf("You are a Capricorn\n");
	    break;
	}
    }
    default:
    {
	printf("Invalid option\n");
    }
    }
}
