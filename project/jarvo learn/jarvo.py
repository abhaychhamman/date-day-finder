import  pyaudio
import  speech_r
import pyttsx3 as p3
from  gtts import gTTS
from  playsound import  playsound
import  webbrowser as web
import pywhatkit as kit
import  wikipedia
from pywikihow import WikiHow,search_wikihow
import os



engine = p3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)
rate = engine.getProperty('rate')
engine.setProperty('rate', rate-80)


def Speak(audio):
    engine.say(audio)
    engine.runAndWait()

def listen():
    r=rs.Recognizer()
    with rs.Microphone() as source:
        print(':listening....')
        r.pause_threshold=1
        audio=r.listen(source)

        try:
            print("Recognizing....")
            query=r.recognize_google(audio).lower()
            print(f":your cammond :{query}")

            # Speak(query)
            if query.count("who")>0:
                Speak("My name is ishukha.basically i am cumputer developed by Abhay kumar singh")
            elif query.count("how") > 0:
                Speak("I am good")
            elif query.count("ok") > 0:
                Speak("No problem")
            elif query.count("morning") > 0:
                Speak("Good morning Sir")
            elif query.count("night") > 0:
                Speak("Good night Sir")
            elif query.count("evening") > 0:
                Speak("Good evening Sir")
            elif query.count("afternoon") > 0:
                Speak("Good afternoon Sir")
            elif query.count("are you like") > 0:
                Speak("of course sir")
            elif query.count("hello") or query.count("hi") or query.count("hai")  :
                Speak("hello sir")
            elif query.count(" from youtube") :

                Query=query.replace(" from youtube"," ")
                YoutubeSearch(Query)

            else:
                Speak("I am ishukha .Sir,i can't understand")
        except:
            return  ""

        return  query.lower()

def YoutubeSearch(term):
    res="https://www.youtube.com/results?search_query="+term
    web.open(res)
    Speak("this is what i found for you search")
    kit.playonyt(term)
    Speak("this is may also help you sir")


def Google_search(term):
    query=term.replace("jarvis","")
    query=query.replace("what is","")
    query=query.replace("how to","")
    query=query.replace("what is","")
    query=query.replace("who is","")
    print(term)

listen()
# Google_search("what is python")

