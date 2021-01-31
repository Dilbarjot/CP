using System;
using System.Collections.Generic;

namespace Application.HackerRank
{
    class Solution1
    {
        public static int equalizeArray(int[] arr)
        {
            Dictionary<int, int> d = new Dictionary<int, int>();
            int sz = arr.Length;
            for (int i = 0; i < sz; i++)
            {
                int c = arr[i];
                if (d.ContainsKey(c))
                {
                    d[c]++;
                }
                else
                {
                    d[c] = 1;
                }
            }

            int max = 0, count = 0;
            foreach (KeyValuePair<int, int> entry in d)
            {
                int val = entry.Value;
                if (val > max)
                { 
                    max = val;
                }

                count += val;
            }
            count -= max;
            return count;
        }
    }
    public class EqualizetheArray
    {
        public static void main(string[] args)// kept it main since there is Main method in another file
        {
            Console.Write(Solution1.equalizeArray(new int[]{1,2,2,3}));
        }
    }
}