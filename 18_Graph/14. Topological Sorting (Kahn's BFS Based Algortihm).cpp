/*
vertices or nodes as JOB & directed Edges as Dependencies

BFS Based Soltuion  // we have first print 0 in degree vertices

1- store indegree of every vertex.  indegree[V]
2- Create a Queue,q
3- Add all 0 indegree to the queue ,q
4- While (q is not empty)
    {
        a-u=q.pop();
        b- print u
        c- for every adjacent v of u
            1- Reduce indegree of v by 1
            2- If indegree of v becomes 0, add v to the q
    }


// O(V+E) -> Kahr's Algorithm

weighted ,directed and Acyclic

*/
