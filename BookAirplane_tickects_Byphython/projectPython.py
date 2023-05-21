def p_info():
   with open ('D:\project\project.txt','a')as file :
       c='y'
       while c=='y':
            FirstName=input("please enter your first name: ") 
            SecondName=input("please enter your second name: ")
            Age=input("please enter your age: ")
            Id=input("please enter your id: ")
            Country=input("please enter your country: ")
            Address=input("please enter your address: ")
            file.write(FirstName+'\t'+SecondName+'\t'+Age+'\t'+Id+'\t'+Country+'\t'+Address+'\n' )
            c=input('Do you want to enter record again(y/n) ')            
       print("file is saved succesfly")  
def view_pas_inf():
    with open('D:\project\project.txt','r') as file:
        print('FirstName\tSecondName\tAge\tId\tCountry\tAdress')
        print("************************************")
        for line in file :
          print(line,end='')
          
view_pas_inf()          

        
def SearchByFirstName():
    FirstName=input("Enter the first name you search for ????")
    with open('D:\project\project.txt','r') as file:
        flag=False
        for line in file:
            fields=line.split('\t')
            if fields[0]==FirstName:
              flag =True
              print('FirstName\tSecondName\tAge\tId\tCountry\tAddress')
              print(line)
        if  not flag:
          print("can not find this passenger")
def SearchBySecondName():
    SecondName=input("Enter the second name you search for ????")
    with open('D:\project\project.txt','r') as file:
       flag=False
       for line in file:
          fields=line.split('\t')
          if fields[1]==SecondName:
            flag =True
            print('FirstName\tSecondName\tAge\tId\tCountry\tAddress')
            print(line)
       if  not flag:
         print("can not find this passenger")
def SearchById():
    Id=input("Enter the id you search for ????")
    with open('D:\project\project.txt','r') as file: 
      flag=False
      for line in file:
         fields=line.split('\t')
         if fields[3]==Id:
           flag =True
           print('FirstName\tSecondName\tAge\tId\tCountry\tAddress')
           print(line)
      if  not flag:
        print("can not find this passenger")

def updateAgeById():
    import os
    id=input('Enter the id of passsenger to update it: ')
    file=open('D:\project\project.txt','r')
    qfile1= open('D:\project\qfile1.txt','w') 
    flag=False
    for line in file:
          fields=line.split('\t')
          if fields[3]==id:
             flag =True
             age=input('Enter the new age for '+fields[0] +" "+fields[1]+':')
             line=fields[0]+'\t'+ fields[1] +'\t'+ age+'\t'+fields[3]+'\t'+fields[4]+'\t'+fields[5]
          qfile1.write(line)   
    file.close()
    qfile1.close()         
    os.remove('D:\project\project.txt')    
    os.rename('D:\project\qfile1.txt','D:\project\project.txt') 
    if not flag :
        print("passenger not found")   
    else:
        print("passenger age is updated successfly") 
updateAgeById        
def updateFirstNameById():
    import os
    id=input('Enter the id of passsenger to update it: ')
    file=open('D:\project\project.txt','r')
    qfile1=open('D:\project\qfile1.txt','w')
    flag=False
    for line in file:
        fields=line.split('\t')
        if fields[3]==id:
           flag =True
           firstname=input('Enter the new firstname for '+fields[0] +" "+fields[1]+':')
           line=firstname + '\t' + fields[1] + '\t' + fields[2] + "\t"+ fields[3] + "\t" + fields[4] +"\t"+fields[5]
        qfile1.write(line)       
    file.close()
    qfile1.close()
    os.remove('D:\project\project.txt')    
    os.rename('D:\project\qfile1.txt','D:\project\project.txt') 
    if not flag :
        print("passenger not found")   
    else:
        print("passenger firstname is updated successfly") 
        
def  updateSecondNameById():
    import os
    id=input('Enter the id of passsenger to update it: ')
    file=open('D:\project\project.txt','r')
    qfile1=open('D:\project\qfile1.txt','w')
    flag=False
    for line in file:
        fields=line.split('\t')
        if fields[3]==id:
           flag =True
           Secondname=input('Enter the new secondname for '+fields[0] +" "+fields[1]+':')
           line=fields[0] + '\t' + Secondname + '\t' + fields[2] + "\t"+ fields[3] + "\t" + fields[4] +"\t"+fields[5]
        qfile1.write(line)       
    file.close()
    qfile1.close()
    os.remove('D:\project\project.txt')    
    os.rename('D:\project\qfile1.txt','D:\project\project.txt') 
    if not flag :
        print("passenger not found")   
    else:
        print("passenger second is updated successfly") 
        
def deletePassenger() :
    import os
    id=input('Enter the id of passenger to delete it: ')
    file=open('D:\project\project.txt','r')
    qfile1=open('D:\project\qfile1.txt','w')
    flag=False
    for line in file:
        fields=line.split('\t')
        if fields[3]==id:
           flag =True
        else:
            qfile1.write(line)  
    file.close()
    qfile1.close()
    os.remove('D:\project\project.txt')    
    os.rename('D:\project\qfile1.txt','D:\project\project.txt') 
    if not flag :
        print("passenger not found")   
    else:
        print("passenger is dleted successfly") 

#****************************************************************************************** 



def book_tickets():
    with open ('D:\project\plan.txt','a') as file:
      c='y'
      while c=='y':
        Airline_id=input("please enter airline_id: ") 
        Date=input("please enter flight date: ")
        DepartureTime=input("please enter  departureTime: ")
        ArrivalTime=input("please enter arrivalTime: ")
        file.write(Airline_id +"\t"+ Date +"\t"+ DepartureTime +"\t"+ ArrivalTime +"\n")
        c=input('Dif you want to book another ticket enter y \nif you want to return min menu enter m" ')            
      print("file is saved succesfly")  
    if c=='m':
        menu() 
    schedule()
    
def SearchById2():
    id=input('Enter the id of plan to searth for: ')
    with open('D:\project\plan.txt','r')as file:
      flag=False
      for line in file:
         fields=line.split('\t')
         if fields[0]==id:
           flag =True
           print('Airline_id\tDate\tDeperatureTime\tArrivalTime')
           print('********************')
           print(line)
      if  not flag:
        print('plan not found')
            
def editDepartue():
    import os
    id=input('Enter the id of the journy yoy want to update it: ')
    file=open('D:\project\plan.txt','r')
    qfile1=open('D:\project\qfile2.txt','w')
    flag=False
    for line in file:
        fields=line.split('\t')
        if fields[0]==id:
           flag =True
           Depruturetime=input('Enter the new depruturetime ')
           line=fields[0] + '\t' + fields[1] + '\t' + Depruturetime +"\t"+fields[3]
        qfile1.write(line)       
    file.close()
    qfile1.close()
    os.remove('D:\prroject\plan.txt')    
    os.rename('D:\project\qfile2.txt','D:\project\plan.txt') 
    if not flag :
        print("journy not found")   
    else:
        print("deperature is updated successfly")
                      
                      
def cancelJourny ():
        import os
        id=input('Enter the id of the journy to delete it: ')
        file=open('D:\project\plan.txt','r')
        qfile1=open('D:\project\qfile2.txt','w')
        flag=False
        for line in file:
            fields=line.split('\t')
            if fields[0]==id:
                flag =True
            else:
              qfile1.write(line)  
        file.close()
        qfile1.close()
        os.remove('D:\project\plan.txt')    
        os.rename('D:\project\qfile2.txt','D:\project\plan.txt') 
        if not flag :
           print("journy not found")   
        else:
            print("journy is deleted successfly") 



def menu():
    
    print(".....................welcome...................")        
    print("---------------------------------------------------")
    print( "          control passenger info enter  1       "  )
    print("             book a ticket  enter  2              ")
    print("            print passenger data enter 3          ")
    
    s=input("1 or 2 or 3")
    match s:
         case 1:
             print("...........add new passenger enter 1..........")
             print(".............update old info enter 2..........")
             print(".........delete passenger info enter 3.........")
             print(".........return to the min menu enter 4........")
             t=input("1 or 2 or 3 or 4")
             match t:
                 case 1:
                     p_info()
                 case 2:
                     print("............update age enter 1.........")   
                     print(".........update first name enter 2......")
                     print(".........update second name enter 3.......")
                     q=input("1 or 2 or 3")
                     match q:
                         case 1:
                             updateAgeById()
                         case 2:
                             updateFirstNameById()
                         case 3 :
                             updateSecondNameById()
                             
                             
                         case defult:
                             menu()
                 case 3:
                     deletePassenger()
                     
                     
                     
                 case defult:
                     menu()
                         
         case 2:
             print(".............book ticket enter 1.........")
             print(".............edit ticket enter 2.........")
             print(".............cancel ticket enter 3.......")
             w=input("1 or 2 or 3")
             match w :
                 case 1:
                     schedule()
                 case 2:
                     editDepartue()
                 case 3:
                     cancelJourny()
                 
                 
                 
                 case defult:
                     menu()
                    
                    
         case 3:
             SearchById()
             SearchById2()
             key=input("return m menu enter m")
             if key=='m':
                 menu()
             
             
         case defult:
             menu()
                 
def schedule():
    print(" for Dubai enter 1" )
    print(" for Kanada enter 2" )
    print(" for USA enter 3" )
    print(" for England enter 4" )
    print(" for Austorlia enter 5" )
    s=input("1 or 2or 3 or 4 or 5")
    match s :
        case 1:
            print("                                      Schedule for Dubai       ")
            print("                                        ----------------                         ")
            print("Air_line name        Air_line id          Date           Departure time         Arrival time")
            print("                                                                                              ")
            print("----------------------------------------------------------------------------------------------")
            print( "Misrair                11             1-1-2024            4:00 am               6:00 am   "    )
            print(" Misrair                21             1-1-2024             4:40 am              6:40 am        ")
            print(" Misrair                31             1-1-2024             8:00 am             10:00 am "       )
            print("Misrair                 41             1-1-2024            10:00 am             12:00 pm  "     )
            print("Misrair                 51             1-1-2024            11:40 am              1:40 pm  ")
            print("Misrair                 61             1-1-2024             3:30 pm              5:30 pm   "    )
            print("Misrair                 71             1-1-2024             4:00 pm              6:00 pm "   )
            print(" Misrair                81             1-1-2024             8:00 pm             10:00 pm"  )
            
            print("....................enter the Air line data that suitable for you........................")
            book_tickets()
            
    
        case 2:
             print("                                      Schedule for kanada       ")
             print("                                        ----------------                         ")
             print("Air_line name        Air_line id          Date           Departure time         Arrival time")
             print("                                                                                              ")
             print("----------------------------------------------------------------------------------------------")
             print( "Misrair                12            1-1-2024            4:00 am               6:00 am   "    )
             print(" Misrair                22             1-1-2024             4:40 am              6:40 am        ")
             print(" Misrair                32             1-1-2024             8:00 am             10:00 am "       )
             print("Misrair                42             1-1-2024            10:00 am             12:00 pm  "     )
             print("Misrair                55             1-1-2024            11:40 am              1:40 pm  ")
             print("Misrair                66             1-1-2024             3:30 pm              5:30 pm   "    )
             print("Misrair                72             1-1-2024             4:00 pm              6:00 pm "   )
             print(" Misrair                82             1-1-2024             8:00 pm             10:00 pm"  )
            
             print("....................enter the Air line data that suitable for you........................")
             book_tickets()
            
        case 3:
             print("                                      Schedule for USA       ")
             print("                                        ----------------                         ")
             print("Air_line name        Air_line id          Date           Departure time         Arrival time")
             print("                                                                                              ")
             print("----------------------------------------------------------------------------------------------")
             print( "Misrair                19            1-1-2024            4:00 am               6:00 am   "    )
             print(" Misrair                27             1-1-2024             4:40 am              6:40 am        ")
             print(" Misrair                38             1-1-2024             8:00 am             10:00 am "       )
             print("Misrair                49             1-1-2024            10:00 am             12:00 pm  "     )
             print("Misrair                58             1-1-2024            11:40 am              1:40 pm  ")
             print("Misrair                67             1-1-2024             3:30 pm              5:30 pm   "    )
             print("Misrair                74             1-1-2024             4:00 pm              6:00 pm "   )
             print(" Misrair                83           1-1-2024             8:00 pm             10:00 pm"  )
            
             print("....................enter the Air line data that suitable for you........................")
             book_tickets()
                    
        case 4:
             print("                                      Schedule for England       ")
             print("                                        ----------------                         ")
             print("Air_line name        Air_line id          Date           Departure time         Arrival time")
             print("                                                                                              ")
             print("----------------------------------------------------------------------------------------------")
             print( "Misrair                11            1-1-2024            4:00 am               6:00 am   "    )
             print(" Misrair                25             1-1-2024             4:40 am              6:40 am        ")
             print(" Misrair                39             1-1-2024             8:00 am             10:00 am "       )
             print("Misrair                48             1-1-2024            10:00 am             12:00 pm  "     )
             print("Misrair                57             1-1-2024            11:40 am              1:40 pm  ")
             print("Misrair                66             1-1-2024             3:30 pm              5:30 pm   "    )
             print("Misrair                75             1-1-2024             4:00 pm              6:00 pm "   )
             print(" Misrair                84           1-1-2024             8:00 pm             10:00 pm"  )
            
             print("....................enter the Air line data that suitable for you........................")
             book_tickets()
            
        case 5:
             print("                                      Schedule for Austoralia            ")
             print("                                        ----------------                         ")
             print("Air_line name        Air_line id          Date           Departure time         Arrival time")
             print("                                                                                              ")
             print("----------------------------------------------------------------------------------------------")
             print( "Misrair                15           1-1-2024            4:00 am               6:00 am   "    )
             print(" Misrair                28             1-1-2024             4:40 am              6:40 am        ")
             print(" Misrair                36             1-1-2024             8:00 am             10:00 am "       )
             print("Misrair                42            1-1-2024            10:00 am             12:00 pm  "     )
             print("Misrair                54             1-1-2024            11:40 am              1:40 pm  ")
             print("Misrair                65             1-1-2024             3:30 pm              5:30 pm   "    )
             print("Misrair                76             1-1-2024             4:00 pm              6:00 pm "   )
             print(" Misrair                84           1-1-2024             8:00 pm             10:00 pm"  )
            
             print("....................enter the Air line data that suitable for you........................")
             book_tickets()
            


        case defult:
            menu()
             
                                     
                                             
                        
                 
             
             
             
              
        

    
                              