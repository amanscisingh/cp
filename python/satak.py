import pprint
pp = pprint.PrettyPrinter(indent=4)

l = []
with open('b_better_start_small.in.txt') as f:
    l = f.readlines()

nc, np = l[0].split()    

# skills
skills = {} 

# projects
projects = []


# filling the skills
i=1
for t in range(int(nc)):
    name, noOfSkill = l[i].split()
    i+=1

    for t in range(int(noOfSkill)):
        skill, level = l[i].split()
        if skill in skills:
            skills[skill].append([name, int(level)])
        else:
            skills[skill] = [[name, int(level)]]
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
