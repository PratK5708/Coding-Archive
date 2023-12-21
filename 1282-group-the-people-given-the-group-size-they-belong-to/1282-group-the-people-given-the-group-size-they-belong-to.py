class Solution(object):
    def groupThePeople(self, groupSizes):
        """
        :type groupSizes: List[int]
        :rtype: List[List[int]]
        """
        # dic={}
        # for i in groupSizes.length():
        #     if(groupSizes[i] in dic):
        #         dic.values= to the key of;
        #     else:
        #         make a new dic.key and value to ++;
        
        result=[]
        dic={}

        for i in range(len(groupSizes)):
            size=groupSizes[i]

            if size in dic:
                dic[size].append(i)
            else:
                dic[size]=[i]

            if (len(dic[size])==size):
                result.append(dic[size])
                dic[size]=[]

        return result