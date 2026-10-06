import turtle
import random

screen = turtle.Screen()
t = turtle.Turtle()
t.speed(0)
t.left(90)
t.color("brown")


def tree(length):
    if length < 15:
        t.color("green")
        t.begin_fill()
        t.circle(8)
        t.end_fill()
        t.color("brown")
        return

    t.forward(length)
    t.left(30)
    tree(length - random.randint(10, 20))
    t.right(60)
    tree(length - random.randint(10, 20))
    t.left(30)
    t.backward(length)


t.penup()
t.goto(0, -200)
t.pendown()
tree(100)
t.hideturtle()
screen.mainloop()