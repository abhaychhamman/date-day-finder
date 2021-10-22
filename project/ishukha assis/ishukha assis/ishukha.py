import pyaudio
import speech_recognition as rs
import pyttsx3 as p3
from  gtts import gTTS
from  playsound import  playsound
from  test import *

engine = p3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)
rate = engine.getProperty('rate')
engine.setProperty('rate', rate-80)


class Abhay:
   #
   # def __init__(self, name):
   #      self.name = name

   def Speak(self, audio):
        engine.say(audio)
        engine.runAndWait()

ab=Abhay()

ab.Speak("hello how are you")
displayText()



