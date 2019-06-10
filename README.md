# utmp-reader

This script is getting the content of Linux var/run/utmp file in order to iterate through all of the user processes and print the information.

<b>Possible arguments:</b>

-h shows hosts

-l shows ut_line

You can also run script without arguments and see just usernames, or use both at once.

<b>To run the script please type</b>


    make utmp_reader


And then type


    ./utmp_reader (optional arguments)
  
  
Of course this script is going to work only on Linux OS. :)
