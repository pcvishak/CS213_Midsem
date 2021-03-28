def sum(S):
    """ recursive implementation of sum of n numbers"""
    if len(S) == 1:
        return S[0]
    else:
        B = [0] * (len(S)//2)
        return sum2(S, B)

def sum2(A, B):
    """ Assumes len(A) is a power of 2 """
    for m in range(len(B)):
        B[m] = A[2*m] + A[2*m+1]
    if len(B) == 1:
        return B[0]
    else:
        A = B
        B = [0] * (len(A)//2)
        return sum2(A,B)

n = int(input())
A = list(map(int, input().split()))
print(sum(A))