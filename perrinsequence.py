p0=3 #first term of the sequence
p1=0 #second term of the sequence
p2=2 #third term of the sequence
ctr=3 #number of terms displayed currently
pn=p0+p1 #n'th term of the sequence
n=int(input("Enter the number of terms:")) #number of terms to be displayed on the screen
print("The Perrin Sequence is....")
print("{}\n{}\n{}".format(p0,p1,p2))
while(ctr<n):
    #displaying n'th term
    print("{}".format(pn))
    # updating the terms of the sequence for the next iteration
    p0=p1
    p1=p2
    p2=pn
    pn=p0+p1
    # updating ctr value
    ctr=ctr+1
