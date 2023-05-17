/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_102_git/
 * created on:  Wed May 17 18:57:31 2023
 * 1st author:  user
 * description: abs.c
*/



int stu_abs(int test)
{
 
    if(test < 0)
        {
            int a = test;
            test = a* -1;
            return(test);
        }
    else
        {
            return(test);
        }
}
