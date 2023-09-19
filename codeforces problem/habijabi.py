from tkinter import*
root =Tk()
#initializing entry box
entry=Entry(root,width=30)
entry.grid(row=0,column=0,padx=40,pady=2,columnspan=4)
#functions
def buttonclick(number):
    current=entry.get()
    entry.delete(0,END)
    entry.insert(0,str(current)+str(number))
def buttonclear():
    entry.delete(0,END)
def buttonadd():
   first_number=entry.get()
   global f
   global math
   math="addition"
   f=int(first_number)
   entry.delete(0,END)
def buttonsubstrac():
    first_number=entry.get()
    global f
    global math
    math="substract"
    f=int(first_number)
    entry.delete(0,END)
    


def buttonmulti():
    first_number=entry.get()
    global f
    global math
    math="multi"
    f=int(first_number)
    entry.delete(0,END)

def buttondivision():
    first_number=entry.get()
    global f
    global math
    math="division"
    f=int(first_number)
    entry.delete(0,END)


def equal():
    second_number=entry.get()
    entry.delete(0,END)
    if math=="addition":
        entry.insert(0,f+int(second_number))
    if math=="substarct":
        entry.insert(0,f-int(second_number))
    if math=="division":
        entry.insert(0,f/int(second_number))
    if math=="multi":
        entry.insert(0,f*int(second_number))
def root1():
    first_number=entry.get()
    entry.delete(0,END)
    global f
    f=float(first_number)
    h=f
    l=1
    eps=1e-3
    while(h-l>eps):
        mid=(h+l)/2
        if(mid*mid<f):
            l=mid
        else:
            h=mid
    entry.insert(0,h)


#initiazling buttons 
button_0=Button( root,padx=10,pady=10,text="0",command=lambda: buttonclick(0))
button_1=Button(root,padx=10,pady=10,text="1",command=lambda: buttonclick(1))
button_2=Button(root,padx=10,pady=10,text="2",command=lambda: buttonclick(2))
button_3=Button(root,padx=10,pady=10,text="3",command=lambda: buttonclick(3))
button_4=Button(root,padx=10,pady=10,text="4",command=lambda: buttonclick(4))
button_5=Button(root,padx=10,pady=10,text="5",command=lambda: buttonclick(5))
button_6=Button(root,padx=10,pady=10,text="6",command=lambda: buttonclick(6))
button_7=Button(root,padx=10,pady=10,text="7",command=lambda: buttonclick(7))
button_8=Button(root,padx=10,pady=10,text="8",command=lambda: buttonclick(8))
button_9=Button(root,padx=10,pady=10,text="9",command=lambda: buttonclick(9))
button_add=Button(root,padx=10,pady=10,text="+",command=buttonadd)
button_clear=Button(root,padx=10,pady=10,text="clr",command=buttonclear)
button_equal=Button(root,padx=10,pady=10,text="=",command=equal)
button_substract=Button(root,padx=10,pady=10,text="-",command=buttonsubstrac)
button_multi=Button(root,padx=10,pady=10,text="*",command=buttonmulti)
button_divide=Button(root,padx=10,pady=10,text="/",command=buttondivision)
button_root=Button(root,padx=10,pady=10,text="root()",command=root1)

#7-9
button_7.grid(row=1, column=0)
button_8.grid(row=1, column=1)
button_9.grid(row=1, column=2)
#4-6
button_4.grid(row= 2, column=0)
button_5.grid(row= 2, column=1)
button_6.grid(row= 2, column=2)
#3-1
button_1.grid(row=3, column=0)
button_2.grid(row=3, column=1)
button_3.grid(row=3, column=2)
button_0.grid(row=4, column=0)
#options
button_add.grid(row=4, column=1)
button_clear.grid(row=4, column=2)
button_equal.grid(row=5,column=0)
button_multi.grid(row=5,column=1)
button_divide.grid(row=5,column=2)
button_substract.grid(row=6,column=0)
button_root.grid(row=6,column=1)

root.mainloop()


