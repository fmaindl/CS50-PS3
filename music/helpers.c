// Helper functions for music

#include <cs50.h>

#include "helpers.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    string fraction_string = strtok(fraction, "@");
    int fraction_top = fraction_string[0];
    int fraction_bot = fraction_string[2];

    return (fraction_top / fraction_bot * 8);


}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // get note and octave depending on whether there is a sharp or flat
    note = "A4";


    int octave;
    int get_frequency;



    if (strlen(note) == 2)
    {
        octave = note[1];
        octave -= 48;

    }
    else if (strlen(note) == 3)
    {
        octave = note[2];
        octave -= 48;
    }




    // get the frequency per letter



    if (note[0] == 'A')
    {
        get_frequency = round(27.5 * (pow(2, octave)));

        if (note[1] == '#')
        {
            get_frequency *= (pow(2, 1/12));
        }

        else if (note[1] == 'b')
        {
            get_frequency /= (pow(2, 1/12));
        }
    }


    if (note[0] == 'B')
    {
        get_frequency = round(30.87 * pow(2, octave));

        if (note[1] == '#')
        {
            get_frequency *= pow(2, 1/12);
        }

        else if (note[1] == 'b')
        {
            get_frequency /= pow(2, 1/12);
        }

    }



    if (note[0] == 'C')
    {
        get_frequency = round(16.35 * pow(2, octave));

        if (note[1] == '#')
        {
            get_frequency *= pow(2, 1/12);
        }

        else if (note[1] == 'b')
        {
            get_frequency /= pow(2, 1/12);
        }

    }


    if (note[0] == 'D')
    {
        get_frequency = round(18.35 * pow(2, octave));

        if (note[1] == '#')
        {
            get_frequency *= pow(2, 1/12);
        }

        else if (note[1] == 'b')
        {
            get_frequency /= pow(2, 1/12);
        }

    }


    if (note[0] == 'E')
    {
        get_frequency = round(20.60 * pow(2, octave));

        if (note[1] == '#')
        {
            get_frequency *= pow(2, 1/12);
        }

        else if (note[1] == 'b')
        {
            get_frequency /= pow(2, 1/12);
        }

    }


    if (note[0] == 'F')
    {
        get_frequency = round(21.83 * pow(2, octave));

        if (note[1] == '#')
        {
            get_frequency *= pow(2, 1/12);
        }

        else if (note[1] == 'b')
        {
            get_frequency /= pow(2, 1/12);
        }

    }


    if (note[0] == 'G')
    {
        get_frequency = round(24.5 * pow(2, octave));

       if (note[1] == '#')
        {
            get_frequency *= pow(2, 1/12);
        }

        else if (note[1] == 'b')
        {
            get_frequency /= pow(2, 1/12);
        }

    }

    return get_frequency;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strncmp(s, "/n", 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
}
