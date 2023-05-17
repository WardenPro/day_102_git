/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_102_git/
 * created on:  Wed May 17 18:57:31 2023
 * 1st author:  user
 * description: clamp.c
*/

int stu_clamp(int low, int high,int nmb)
{
    if(nmb < low)
        {
            return (low);
        }
    else if(nmb > high)
        {
            return (high);
        }
    else
        {
            return (nmb);
        }
}
