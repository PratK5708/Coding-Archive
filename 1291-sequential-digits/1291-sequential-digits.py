class Solution(object):
    def sequentialDigits(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: List[int]
        """
#         a=""
#         cast=str(low)
#         size=len(cast)
#         #arr=[1,2,3,4,5,6,7,8,9]
#         final=[]
#         while(int(a)<high):
#             b=0
#             for i in range(size):
#                 a=arr[b]+a
                
#                 final.append(a)            
#                 a=""

        result=[]
        digits="123456789"
        for i in range(len(str(low)),len(str(high))+1):
            for j in range(10-i):
                nstr=digits[j:j+i]
                num=int(nstr)
                if (low<=num<=high):
                    result.append(num)

        return result
                