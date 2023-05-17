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
