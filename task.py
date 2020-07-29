class Point:
    def init(self, x, y):
        self.x = x
        self.y = y
def is_within(polygon,point):
    A = []
    B = []
    C = []  
    for i in range(len(polygon)):
        p1 = polygon[i]
        p2 = polygon[(i + 1)%len(polygon)]
        a = -(p2.y - p1.y)
        b = p2.x - p1.x
        c = -(a*p1.x + b*p1.y)
        A.append(a)
        B.append(b)
        C.append(c)
    D = []
    for i in range(len(A)):
        d = A[i]*point.x + B[i]*point.y+C[i]
        D.append(d)
    t1 = all(d >= 0 for d in D)
    t2 = all(d <= 0 for d in D)
    return t1 or t2
polygon = [Point(-3,2),Point(-2,-0.8),Point(0,1.2),Point(2.2,0),Point(2,4.5)]
P= Point(0,0)
print(is_within(polygon,P))