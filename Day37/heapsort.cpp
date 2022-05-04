void heapSort(int pq[], int n)
    {
        //code here
          for (int i = 1; i < n; i++)
      {
        int childindex = i;
        while (childindex > 0)
        {
            int parentindex = (childindex - 1) / 2;
            if (pq[childindex] > pq[parentindex])
            {
                swap(pq[childindex], pq[parentindex]);
            }
            else
            {
                break;
            }
            childindex = parentindex;
        }
    }

    
        int size = n;
        
        while (size > 1)
        {
            int temp = pq[0];
            pq[0] = pq[size - 1];
            pq[size - 1] = temp;
    
            size--;
            int parentindex = 0;
            int lci = (2 * parentindex) + 1;
            int rci = (2 * parentindex) + 2;
            // int  minindex=0;
            while (lci < size)
            {
                int minindex = parentindex;
    
                if (pq[lci] >pq[minindex] && (rci >= size || pq[lci] >pq[rci]))
                {
                    // swap(pq[lci],pq[parentindex]);
                    minindex = lci;
                }
                else if (rci < size && pq[rci] > pq[minindex] )
                {
                    // swap(pq[rci],pq[parentindex]);
                    minindex = rci;
                }
                if (parentindex == minindex)
                    break;
    
                int temp = pq[minindex];
                pq[minindex] = pq[parentindex];
                pq[parentindex] = temp;
              
                parentindex = minindex;
                lci = (2 * parentindex) + 1;
                rci = (2 * parentindex) + 2;
            }
        }
    }
