int sunlightlength(int[][2] x,int a,int b,int n)
{
    int length = 0 , cur = 0;
    for (int i =0; i<n; i++)
    {
        cur = 0;
        for(int j = i*4; j<(i+1)*4 ;j++)
        {
            if(x[j][0]>=a && x[(j+1)%(n-1)][0]< =a)
            {
              if(x[j][0]<0 && x[(j+1)%(n-1)][0]< 0)
              {
                  cur = ||x[(j+1)%(n-1)][0]||x[j][0]||;
                  break;
              }
              else
              {
                 cur = ||x[(j+1)%(n-1)][0]| + x[j][0]||;
                 break;
              }
            }
            else if (x[j][1]>=b && x [(j+1)%(n-1)][1]<=b)
            {
              if(x[j][1]<0 && x[(j+1)%(n-1)][1]< 0)
       {
               cur = ||x[(j+1)%(n-1)][1]|-|x[j][0]||;
              break;
       }
         else
         
             {
              cur = ||x[(j+1)%(n-1)][1]| + x[j][1]||;
              break;
             }
            }
        }
     length = length + cur;

    }
}