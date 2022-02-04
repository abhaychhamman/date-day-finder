import calendar

from sqlalchemy import null

# print(calendar.calendar(2022,2,1,2))
 
# print(calendar.HTMLCalendar(2022,2,2,7))
  
# text_cal = calendar.HTMLCalendar(firstweekday = 0)
  
# year = 2018
# month = 9
# default value of width is 0
  
# printing formatmonth
# print(text_cal.formatmonth(year, month))
# print(calendar.weekday(2022,1,1))

# day=["mon","tues","wed","thur","fri","sat","sun"]
# print(day[calendar.weekday(2022,10,10)])

# user defined function
def dayNameFromWeekday(weekday):
    days = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
    return days[weekday] if 0 < weekday < len(days) else null

print(dayNameFromWeekday(-1))