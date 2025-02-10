#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    int m, d, y;
    scanf("%d/%d/%d", &m, &d, &y);

    if(d == 1) {
        switch(m) {
            case(1): printf("Dated this 1st day of January, 20%.2d ", y); break;
            case(2): printf("Dated this 1st day of February, 20%.2d ", y); break;
            case(3): printf("Dated this 1st day of March, 20%.2d ", y); break;
            case(4): printf("Dated this 1st day of April, 20%.2d ", y); break;
            case(5): printf("Dated this 1st day of May, 20%.2d ", y); break;
            case(6): printf("Dated this 1st day of June, 20%.2d ", y); break;
            case(7): printf("Dated this 1st day of July, 20%.2d ", y); break;
            case(8): printf("Dated this 1st day of August, 20%.2d ", y); break;
            case(9): printf("Dated this 1st day of September, 20%.2d ", y); break;
            case(10): printf("Dated this 1st day of October, 20%.2d ", y); break;
            case(11): printf("Dated this 1st day of November, 20%.2d ", y); break;
            case(12): printf("Dated this 1st day of December, 20%.2d ", y); break;
        }        
    }

    else if(d == 2) {
        switch(m) {
            case(1): printf("Dated this 2nd day of January, 20%.2d ", y); break;
            case(2): printf("Dated this 2nd day of February, 20%.2d ", y); break;
            case(3): printf("Dated this 2nd day of March, 20%.2d ", y); break;
            case(4): printf("Dated this 2nd day of April, 20%.2d ", y); break;
            case(5): printf("Dated this 2nd day of May, 20%.2d ", y); break;
            case(6): printf("Dated this 2nd day of June, 20%.2d ", y); break;
            case(7): printf("Dated this 2nd day of July, 20%.2d ", y); break;
            case(8): printf("Dated this 2nd day of August, 20%.2d ", y); break;
            case(9): printf("Dated this 2nd day of September, 20%.2d ", y); break;
            case(10): printf("Dated this 2nd day of October, 20%.2d ", y); break;
            case(11): printf("Dated this 2nd day of November, 20%.2d ", y); break;
            case(12): printf("Dated this 2nd day of December, 20%.2d ", y); break;
        }        
    }

    else if(d == 3) {
        switch(m) {
            case(1): printf("Dated this 3rd day of January, 20%.2d ", y); break;
            case(2): printf("Dated this 3rd day of February, 20%.2d ", y); break;
            case(3): printf("Dated this 3rd day of March, 20%.2d ", y); break;
            case(4): printf("Dated this 3rd day of April, 20%.2d ", y); break;
            case(5): printf("Dated this 3rd day of May, 20%.2d ", y); break;
            case(6): printf("Dated this 3rd day of June, 20%.2d ", y); break;
            case(7): printf("Dated this 3rd day of July, 20%.2d ", y); break;
            case(8): printf("Dated this 3rd day of August, 20%.2d ", y); break;
            case(9): printf("Dated this 3rd day of September, 20%.2d ", y); break;
            case(10): printf("Dated this 3rd day of October, 20%.2d ", y); break;
            case(11): printf("Dated this 3rd day of November, 20%.2d ", y); break;
            case(12): printf("Dated this 3rd day of December, 20%.2d ", y); break;
        }        
    }

    else{
        switch(m) {
            case(1): printf("Dated this %dth day of January, 20%.2d ",d, y); break;
            case(2): printf("Dated this %dth day of February, 20%.2d ",d, y); break;
            case(3): printf("Dated this %dth day of March, 20%.2d ",d, y); break;
            case(4): printf("Dated this %dth day of April, 20%.2d ",d, y); break;
            case(5): printf("Dated this %dth day of May, 20%.2d ",d, y); break;
            case(6): printf("Dated this %dth day of June, 20%.2d ",d, y); break;
            case(7): printf("Dated this %dth day of July, 20%.2d ",d, y); break;
            case(8): printf("Dated this %dth day of August, 20%.2d ",d, y); break;
            case(9): printf("Dated this %dth day of September, 20%.2d ",d, y); break;
            case(10): printf("Dated this %dth day of October, 20%.2d ",d, y); break;
            case(11): printf("Dated this %dth day of November, 20%.2d ",d, y); break;
            case(12): printf("Dated this %dth day of December, 20%.2d ",d, y); break;
        }        
    }    
    //printf("%d %d %d", m, d, y);
}