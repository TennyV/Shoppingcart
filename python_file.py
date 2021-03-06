
import re
import string
from collections import Counter

def ReadFile():
    print("All items and number of times purchased:\n")   
    fileObj = open("CS210_Project_Three_Input_File.txt", "r") # open and reading file
    words = fileObj.read().splitlines()  #words have been loaded into list
    fileObj.close()   
    for x in set(words):
        print ("{0}: {1}".format(x,words.count(x))) # shows how many times everything shows in list


def ItemCount(v):   
    fileObj = open("CS210_Project_Three_Input_File.txt", "r")
    words = fileObj.read().splitlines()
    fileObj.close()
    if v in words:
        print(v, "were purchased", words.count(v), "times today!")  # showing how many things were purchase on the day


def Histogram():
    fileObj = open("CS210_Project_Three_Input_File.txt", "r")
    frequency = open("frequency.dat", "w") # create or write to frequency.dat
    dictionary = dict() # creating an empty dictionary
    for line in fileObj:      # checking each line
        line = line.strip()
        word = line.lower()  # lowercase
        if word in dictionary:
            dictionary[word] = dictionary[word] + 1  # increment nume of times the word appears
        else:
            dictionary[word] = 1  # if not in the dictionary then add one
    for key in list (dictionary.keys()):  # write each key and value to frequency.dat
        frequency.write(str(key.capitalize()) + " " + str(dictionary[key]) + "\n") # bring back the formating pairs
    fileObj.close()
    frequency.close()






