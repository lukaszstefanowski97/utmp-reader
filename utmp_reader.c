#include <stdio.h>
#include <utmp.h>
#include <getopt.h>
#include <stdlib.h>
#include <pwd.h>
#include <grp.h>

int main(int argc, char *argv[]) {
        int optionIndex = 0;
        struct utmp *utmpEntry;
        int hFlag = 0;
        int lFlag = 0;

        while ((optionIndex = getopt(argc, argv, "hl")) != -1) {
                switch(optionIndex)
                {
                        case 'h':
                                hFlag = 1;
                                break;
                        case 'l':
                                lFlag = 1;
                                break;
                        default:
                                printf("ERROR: Unknown option\nPlease type -h for hosts and -l for groups.\n");
                                return 1;
                }
        }

        setutent();
        utmpEntry = getutent();
        groupid = malloc()malloc(counter * sizeof (gid_t));
        while(utmpEntry) {
                if(utmpEntry->ut_type==USER_PROCESS) {
                        if (hFlag == 0 && lFlag == 0) printf("%9s\n", utmpEntry->ut_user);
                        if (hFlag == 1 && lFlag == 0) printf("%9s (%s)\n", utmpEntry->ut_user, utmpEntry->ut_host);
                        if (hFlag == 0 && lFlag == 1) printf("%9s%12s\n", utmpEntry->ut_user, utmpEntry->ut_id);
                        if (hFlag == 1 && lFlag == 1) printf("%9s (%s)%12s\n", utmpEntry->ut_user, utmpEntry->ut_host, utmpEntry->ut_line);
                }
                utmpEntry = getutent();
        }

        return 0;
}
