import turtle
t = turtle.Turtle()
for i in range (180):
    t.speed(0)
    t.color("#EAE610")
    t.circle(190 - i, 90)
    t.left(90)
    t.color("#1310C2")
    t.circle(190 - i,90)
    t.left(18)