using System;
using System.Collections.Generic;

namespace Application.HackerRank
{
    class Solution
    {
        public static int pickingNumbers(List<int> a)
        {
            int sz = a.Count, max = 0;
            List <List<int>> ld = new List<List<int>>();
            for (int i = 0; i < sz; i++)
            {
                int elm = a[i];
                for (int j = 0; j < ld.Count; j++)
                {
                    if (ld[j].Count == 0)
                    {
                        ld[j].Add(elm);
                        break;
                    }
                    else
                    {
                        if (ld[j][0] - elm <= 1)
                        {
                            ld[j].Add(elm);
                            break;
                        }
                    }
                }
            }
            return max;
        }
    }
    public class PickingNumbers
    {
        public static void Main(string[] args)
        {
            List<int> l = new List<int>{0, 0, 1, 1, 2, 2, 3, 3, 4, 5};
            Console.WriteLine(Solution.pickingNumbers(l));
        }
    }
}
