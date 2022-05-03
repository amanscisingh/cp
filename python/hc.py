import pprint
pp = pprint.PrettyPrinter(indent=4)

l = []
with open('f.txt') as f:
    l = f.readlines()

nc, np = l[0].split()    

# skills
globalSkills = {} 

# projects
projects = []


# filling the globalSkills
i=1
for t in range(int(nc)):
    name, noOfSkill = l[i].split()
    i+=1

    for t in range(int(noOfSkill)):
        skill, level = l[i].split()
        if skill in globalSkills:
            globalSkills[skill].append([name, int(level),0])
        else:
            globalSkills[skill] = [[name, int(level),0]]
        i+=1


# filling the projects
for t in range(int(np)):
    
    name, bestBefore, points, deadline , noOfSkill = l[i].split()
    p = {
        'name': name,
        'bestBefore': int(bestBefore),
        'points': int(points),
        'deadline': int(deadline),
        'noOfSkill': int(noOfSkill),
        'skills' : []
    }
    i+=1
    for t in range(int(noOfSkill)):
        skill, level = l[i].split()
        p['skills'].append({'skill':skill, 'level':int(level)})
        i+=1
    projects.append(p)



projects.sort(key=lambda x: x['points'] / x['deadline'], reverse=True)

output = [] # array of array - each subarray for each project
visited = []
finalScore = 0
cnt = 0

dummyRoles = set()
def check(skillsRequired, points, name, bestBefore, totalContributor):
    global dummyRoles
    global visited
    for skill in skillsRequired:
        if skill['skill'] not in globalSkills:
            dummyRoles.clear()
            
            return False
        else:
            for t in globalSkills[skill['skill']]:
                if t[1] >= skill['level'] and t[0] not in visited and t[2] <= bestBefore:
                    
                    dummyRoles.add(t[0])
                    break
                else:
                    dummyRoles.clear()
                    return False

    visited += list(dummyRoles)
    return True



def addAns(name, point): 
    global dummyRoles
    global cnt
    global finalScore
    finalScore += point
    # print(name, point)
    output.append(name)
    s = ""
    for t in dummyRoles:
        s += t + " "
    output.append(s)
    
    cnt += 1
    dummyRoles.clear()


for project in projects:
    if check(project['skills'], project['points'], project['name'], project['bestBefore'], project['noOfSkill']):
        addAns(project['name'],  project['points'])
    

pp.pprint(cnt)
pp.pprint(finalScore)

        

f = open("answer_f.txt", "w")
f.write(str(cnt) + "\n")
for t in output:
    f.write(t + "\n")
f.close() 

