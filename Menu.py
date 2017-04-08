from graphics import *

def main():
    win = GraphWin("Menu", 500, 500)
    win.setBackground("black")
    
    yesButton = Rectangle(Point(25, 25), Point(75,75))
    yesButton.setFill("yellow")
    yesButton.draw(win)

    test = Text(Point(50,50), "yes")
    test.setTextColor("blue")
    test.draw(win)
    
main()
