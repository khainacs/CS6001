def uniqueValues(aDict):
    '''
    aDict: a dictionary
    '''
    # Your code here
    key_List = []
    key_Dict = {}

    for item in list(aDict.keys()):
        if aDict[item] not in keyDict:
            key_Dict[aDict[item]] = 1

        else:
            key_Dict[aDict[item]] += 1

    for item in key_Dict.keys():
        if keyDict[item] == 1:
            for item_dict in aDict.keys():
                if aDict[item_dict] == item:
                    keyList.append(item_dict)

    print(key_Dict)


    return sorted(key_List)
