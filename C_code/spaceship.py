import requests
import pprint

KEY = "eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpZGVudGlmaWVyIjoiU0hBU1dBVDUxIiwidmVyc2lvbiI6InYyIiwicmVzZXRfZGF0ZSI6IjIwMjMtMDUtMjAiLCJpYXQiOjE2ODUxODA3NjYsInN1YiI6ImFnZW50LXRva2VuIn0.pxpHrcdSaASEXQb0eheXd0OPkQQUnSDQ3LHyRi-A695WfzPAY_2t7-bzfWJhIfGWS9QbblVhy0opy0UfPj72fqdeq2VEuF7za8QEtHKJM6VGjdRiYKvwSvirQVeVIaS1r1Z5mPfmHkja-rH3QaH0VCsSh5Omvs42dTfD_EVuMa7PGVY5pJhH69MYH4XEZX8r5_i6mnTwJnccCFI95evtbb9awjA0DAHyh1Amd1OXCOBU28jkw4ZGGyM8mWGePzfFl7s0QnBorWbTIu5-kZb09c6EIVpP9yXLKB_UUlD7f_KuU92bMhyqCRlkcooiLwwfzJ8OGPo-YMYP9HDSk-_gLQ"
Headers = {
        "Accept": "application/json",
        "Authorization": "Bearer "+ KEY
    }

def getShips():
    url = "https://api.spacetraders.io/v2/my/ships"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getStatus():
    url = "https://api.spacetraders.io/v2"
    response = requests.get(url,headers=Headers)
    pprint.pprint(response.json())

def getShip(name):
    url = "https://api.spacetraders.io/v2/my/ships/"+name
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getShipCargo(name):
    url = "https://api.spacetraders.io/v2/my/ships/"+name+"/cargo"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def listFactions():
    url = "https://api.spacetraders.io/v2/factions"
    response = requests.get(url,headers=Headers)
    pprint.pprint(response.json())

def getFaction(name):
    url = "https://api.spacetraders.io/v2/factions/"+name
    response=requests.get(url,headers=Headers)
    pprint.pprint(response.json())

def orbitShip(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/orbit"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def shipRefine(symbol,resource):
    import requests
    url = "https://api.spacetraders.io/v2/my/ships/" + symbol + "/refine"
    payload = { "produce": resource }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def createChart(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/chart"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def getCooldown(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/cooldown"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def dockShip(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/dock"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def createSurvey(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/survey"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def extractResources(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/extract"
    payload = { "survey": {
            "signature": "string",
            "symbol": symbol,
            "deposits": [{ "symbol": "string" }],
            "expiration": "2019-08-24T14:15:22Z",
            "size": "SMALL"
        } }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def negotiateContract(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/negotiate/contract"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def transferCargo(symbol,tradeSymbol,unit):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/transfer"
    payload = {
        "tradeSymbol": tradeSymbol,
        "units": unit,
        "shipSymbol": symbol
    }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def purchaseCargo(symbol,item,unit):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/purchase"
    payload = {
        "symbol": item,
        "units": unit
    }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def refuelShip(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/refuel"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def scanShips(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/scan/ships"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def scanWaypoints(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/scan/waypoints"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def scanSystems(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/scan/systems"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def sellCargo(symbol,cargo,unit):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/sell"
    payload = {
        "symbol": cargo,
        "units": unit
    }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def warpShip(symbol,waypointSymbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/warp"
    payload = { "waypointSymbol": waypointSymbol }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def getShipNav(symbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/nav"
    response = requests.get(url, headers=Headers)
    print(response.json())

def patchShipNav(symbol,mode):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/nav"
    payload = { "flightMode": mode}
    Headers["Content-Type"] = "application/json"
    response = requests.patch(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def navigateShip(symbol,waypointSymbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/navigate"
    payload = { "waypointSymbol": waypointSymbol }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def jumpShip(symbol,systemSymbol):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/jump"
    payload = { "systemSymbol": systemSymbol }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def jettisonCargo(symbol,cargo,unit):
    url = "https://api.spacetraders.io/v2/my/ships/"+symbol+"/jettison"
    payload = {
        "symbol": cargo,
        "units": unit
    }
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def getAgentDetail():
    url = "https://api.spacetraders.io/v2/my/agent"
    response = requests.get(url, headers=Headers)
    print(response.json())

def listContracts():
    url = "https://api.spacetraders.io/v2/my/contracts"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getContract(contractID):
    url = "https://api.spacetraders.io/v2/my/contracts/"+contractID
    response = requests.get(url, headers=Headers)   
    pprint.pprint(response.json())

def acceptContract(contractID):
    url = "https://api.spacetraders.io/v2/my/contracts/"+contractID+"/accept"
    Headers["Content-Type"] = "application/json"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def deliverContract(contractId,ship,tradeSymbol,units):
    url = "https://api.spacetraders.io/v2/my/contracts/"+contractId+"/deliver"
    payload = {
        "shipSymbol": ship,
        "tradeSymbol": tradeSymbol,
        "units": units
    }
    response = requests.post(url, json=payload, headers=Headers)
    pprint.pprint(response.json())

def fulfilContract(contractId):
    url = "https://api.spacetraders.io/v2/my/contracts/"+contractId+"/fulfill"
    response = requests.post(url, headers=Headers)
    pprint.pprint(response.json())

def listSystems():
    url = "https://api.spacetraders.io/v2/systems"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getSystems(systemSymbol):
    url = "https://api.spacetraders.io/v2/systems/"+ systemSymbol
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def listWaypoints():
    url = "https://api.spacetraders.io/v2/systems/systemSymbol/waypoints"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getWaypoint(waypointSymbol):
    url = "https://api.spacetraders.io/v2/systems/systemSymbol/waypoints/"+waypointSymbol
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getMarket(systemSymbol,waypointSymbol):
    url = "https://api.spacetraders.io/v2/systems/" + systemSymbol + "/waypoints/" + waypointSymbol +"/market"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getShipyard(systemSymbol,waypointSymbol):
    url = "https://api.spacetraders.io/v2/systems/"+systemSymbol+"/waypoints/"+waypointSymbol+"/shipyard"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

def getJumpGate(systemSymbol,waypointSymbol):
    url = "https://api.spacetraders.io/v2/systems/"+systemSymbol+"/waypoints/"+waypointSymbol+"/jump-gate"
    response = requests.get(url, headers=Headers)
    pprint.pprint(response.json())

while True:
    choice = int(input("Press 1)Status ,2)Fleet, 3) Factions, 4) Ship Tasks, 5) Contracts , 6) Systems and 7) Agents:"))
    if choice == 1:
        getStatus()

    if choice == 2:
        getShips()

    if choice == 3:
        choice2 = int(input("1) List Factions 2) Get Factions:"))
        if choice2 == 1:
            listFactions()
        if choice2 == 2:
            faction = input("Enter Faction Name:")
            getFaction(faction)

    if choice == 4:
        choice2 = int(input("1) Purchase Ship 2)Get Ship 3)Get Ship Cargo 4)Orbit Ship 5)Ship Refine 6)Create Chart 7)Get Ship Cooldown 8)Dock Ship 9)Create Survey 10)Extract Resources 11)Jettison Cargo 12)Jump Ship 13)Navigate Ship 14)Patch Ship Nav 15) Get Ship Nav 16)Warp Ship 17)Sell Cargo 18)Scan Systems 19) Scan Waypoints 20)Scan Ships 21)Refuel Ship 22)Purchase cargo 23)Transfer Cargo 24)Negotiate Contract:"))
        ship = input("Enter the name:")
        if choice2 == 1:
            item = input("Enter the resource:")
            unit = int(input("Enter the units:"))
            purchaseCargo(ship,item,unit)
        if choice2 == 2:
            getShip(ship)
        if choice2 == 3:
            getShipCargo(ship)
        if choice2 == 4:
            orbitShip(ship)
        if choice2 == 5:
            resource = input("Enter the Resource:")
            shipRefine(ship,resource)
        if choice2 == 6:
            createChart()
        if choice2 == 7:
            getCooldown(ship)
        if choice2 == 8:
            dockShip(ship)
        if choice2 == 9:
            createSurvey(ship)
        if choice2 == 10:
            extractResources(ship)
        if choice2 == 11:
            resource = input("Enter the resource:")
            unit = int(input("Enter the units of the resource:"))
            jettisonCargo(ship,resource,unit)
        if choice2 == 12:
            system = input("Enter the system symbol:")
            jumpShip(ship,system)
        if choice2 == 13:
            waypoint = input("Enter the waypoint symbol:")
            navigateShip(ship,waypoint)
        if choice2 == 14:
            mode = input("Enter the mode of travel:")
            patchShipNav(ship,mode)
        if choice2 == 15:
            getShipNav(ship)
        if choice2 == 16:
            waypoint = input("Enter the waypoint symbol:")
            warpShip(ship,waypoint)
        if choice2 == 17:
            cargo = input("Enter the cargo name:")
            unit = int(input("Enter the units of the cargo to sell:"))
            sellCargo(ship,cargo,unit)
        if choice2 == 18:
            scanSystems(ship)
        if choice2 == 19:
            scanWaypoints(ship)
        if choice2 == 20:
            scanShips(ship)
        if choice2 == 21:
            refuelShip(ship)
        if choice2 == 22:
            cargo = input("Enter the cargo to buy:")
            unit = int(input("Enter the amount of cargo to buy:"))
            purchaseCargo(ship,cargo,unit)
        if choice2 == 23:
            tradeSymbol = input("Enter the trade symbol:")
            unit = int(input("Enter the amount of cargo to move:"))
            transferCargo(ship,tradeSymbol,unit)
        if choice2 == 24:
            negotiateContract(ship)

    if choice == 5:
        choice2 = int(input("1)List Contract 2)Get Contracts 3)Accept     Contracts 4)Deliver Contract 5)Fulfill Contract:"))
        if choice2 == 1:
            listContracts()
        if choice2 == 2:
           contractId = input("Enter the contract ID:")
           getContract(contractId)
        if choice2 == 3:
            contractId = input("Enter the Contract ID:")
            acceptContract(contractId)
        if choice2 == 4:
            contractId = input("Enter the contract ID:")
            ship = input("Enter the ship symbol:")
            tradeSymbol = input("Enter the trade Symbol:")
            unit = int(input("Enter the number of cargo units"))
            deliverContract(contractId,ship,tradeSymbol,unit)
        if choice2 == 5:
            contractId = input("Enter the Contract Id")
            fulfilContract(contractId)
    
    if choice == 6:
        choice2 = int(input("1)List Systems 2)Get System 3)List Waypoints 4)Get Waypoint 5)Get market 6)Get Shipyard"))
        if choice2 == 1:
            listSystems()
        if choice2 == 2:
            systemSymbol = input("Enter the system Symbol :")
            getSystems(systemSymbol)
        if choice2 == 3:
            listWaypoints()
        if choice2 == 4:
            waypointSymbol = input("Enter the waypoint Symbol:")
            getWaypoint(waypointSymbol)
        if choice2 == 5:
            systemSymbol = input("Enter the system symbol:")
            waypointSymbol = input("Enter the waypoint symbol:")
            getMarket(systemSymbol,waypointSymbol)
        if choice2 == 6:
            systemSymbol = input("Enter the system symbol:")
            waypointSymbol = input("Enter the waypoint symbol:")
            getShipyard(systemSymbol,waypointSymbol)

    if choice == 7:
        getAgentDetail()