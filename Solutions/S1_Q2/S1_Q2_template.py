def Q(A, i, j, k):
	"""
    Complete this function ..!
    """

n = int(input())
A = list(map(int, input().split()))
k = int(input())
print(str(Q(A, 0, n-1, k)).lower())