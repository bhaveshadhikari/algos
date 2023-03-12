def intersection(x1, y1, x2, y2, x3, y3, x4, y4):
    # Find the slopes and y-intercepts of the two line segments
    m1 = (y2 - y1) / (x2 - x1)
    b1 = y1 - m1*x1
    m2 = (y4 - y3) / (x4 - x3)
    b2 = y3 - m2*x3
    
    # Find the x-coordinate of the point of intersection
    x = (b2 - b1) / (m1 - m2)
    
    # Find the y-coordinate of the point of intersection
    y = m1*x + b1
    
    return x, y
