###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Boxer.x3d',name='title'),
    meta(content='LT Patricia Sweat USN',name='creator'),
    meta(content='Large Deck Amphibious Ship: USS BOXER (LHD 4)',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LargeDeckAmphibBoxerUnitedStates/Boxer.x3d',name='identifier'),
    meta(content='20 August 2004',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Sky and ground are mirror image to have illusion of reflecting sea 
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,.7),(0,.5,1),(1,1,1)],skyAngle=[1.309,1.571],skyColor=[(0,.2,.7),(0,.5,1),(1,1,1)]),
    Transform(DEF='RotateToY-Up',rotation=(1,0,0,-1.57079),
      children=[
      Transform(rotation=(0,0,1,1.57079),
        children=[
        Group(DEF='ViewpointGroup',
          children=[
          Viewpoint(description='USS BOXER (LHD 4)',orientation=(0.899,0.275,0.341,1.0232),position=(160.3,-234.8,222.9)),
          Viewpoint(description='port view',orientation=(0.55,0.558,0.621,2.0206),position=(242.3,68.7,47.5)),
          Viewpoint(description='front view',orientation=(1,0.001,-0.002,1.3122),position=(-0.2,-127.2,10.1)),
          Viewpoint(description='stbd view',orientation=(0.508,-0.505,-0.698,1.9096),position=(-189.7,53.2,54.3)),
          Viewpoint(description='stern view: click well deck to launch LCAC',orientation=(0.003,0.57,0.821,3.1394),position=(1.8,297.9,37.7))]),
        Group(DEF='Patty_Sweat',
          children=[
          Transform(DEF='FlightDeck',rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(-21.3,75),(21.3,75),(21.3,-185),(16.25,-190),(-16.25,-190),(-21.3,-185),(-21.3,75)],scale=[(1,1),(1,1)],spine=[(0,4.57,0),(0,0,0)]),
              appearance=Appearance(
                material=Material(DEF='GREY',ambientIntensity=1)))]),
          Transform(DEF='Hull',
            children=[
            Shape(DEF='WellDeck',
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=3.14,crossSection=[(0,0),(-18,0),(-18,-21),(18,-21),(18,0),(0,0)],scale=[(1,1),(1,1),(.3,.2),(.1,.05)],solid=False,spine=[(0,180,0),(0,0,0),(0,-50,0),(0,-60,0)]),
              appearance=Appearance(
                material=Material(USE='GREY')))]),
          Transform(DEF='Stern_Stbd',translation=(-.4,180,0.1),
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(-18,0),(-13.5,0),(-13.5,-10.5),(-10.125,-14.4375),(-10.125,-21),(-18,-21),(-18,0)]),
              appearance=Appearance(
                material=Material(USE='GREY')))]),
          Transform(DEF='Port_Stbd',translation=(0,180,0.1),
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(18,0),(13.5,0),(13.5,-10.5),(10.125,-14.4375),(10.125,-21),(18,-21),(18,0)]),
              appearance=Appearance(
                material=Material(USE='GREY')))]),
          Transform(DEF='Top_stern',translation=(-.2,180,0.1),
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(-13.6,0),(13.6,0),(13.6,-10.5),(-13.6,-10.5),(-13.6,0)]),
              appearance=Appearance(
                material=Material(USE='GREY'))),
            TouchSensor(DEF='Top',description='touch to activate'),
            TimeSensor(DEF='UpClock',cycleInterval=10.0,startTime=-1.0),
            OrientationInterpolator(DEF='Top_up',key=[0,0.3,0.5,0.6,0.75,1.0],keyValue=[(1,0,0,0),(1,0,0,0.8),(1,0,0,1.0),(1,0,0,1.0),(1,0,0,0.8),(1,0,0,0)]),
            ROUTE(fromField='touchTime',fromNode='Top',toField='set_startTime',toNode='UpClock'),
            ROUTE(fromField='fraction_changed',fromNode='UpClock',toField='set_fraction',toNode='Top_up'),
            ROUTE(fromField='value_changed',fromNode='Top_up',toField='set_rotation',toNode='Top_stern')]),
          Transform(DEF='Stern_gate',translation=(0,180,-21),
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(-13.6,10.5),(13.6,10.5),(12,6.5625),(15,6),(15,0),(-15,0),(-15,6),(-12,6.5625),(-13.6,10.5)]),
              appearance=Appearance(
                material=Material(USE='GREY'))),
            TouchSensor(DEF='Bottom',description='touch to activate'),
            TimeSensor(DEF='DownClock',cycleInterval=10.0,startTime=-1.0),
            OrientationInterpolator(DEF='Bottom_down',key=[0,0.3,0.5,0.6,0.75,1.0],keyValue=[(1,0,0,0),(1,0,0,-1.0),(1,0,0,-1.9),(1,0,0,-1.9),(1,0,0,-2.0),(1,0,0,-2.0)]),
            ROUTE(fromField='touchTime',fromNode='Bottom',toField='set_startTime',toNode='DownClock'),
            ROUTE(fromField='fraction_changed',fromNode='DownClock',toField='set_fraction',toNode='Bottom_down'),
            ROUTE(fromField='value_changed',fromNode='Bottom_down',toField='set_rotation',toNode='Stern_gate')]),
          Transform(DEF='Hull2',
            children=[
            Shape(
              geometry=Extrusion(ccw=False,convex=False,creaseAngle=.7535,crossSection=[(0,0),(-18,0),(-10.5,-5),(-6.75,-7.5),(-3.5,-10),(-2,-12.5),(-1.65,-15),(-1.55,-17),(-1.45,-17.5),(-1.4,-18),(-.5,-20.5),(0,-21),(.5,-20.5),(1.4,-18),(1.45,-17.5),(1.55,-17),(1.65,-15),(2,-12.5),(3.5,-10),(6.75,-7.5),(10.5,-5),(18,0),(0,0)],orientation=[(1,0,0,0),(1,0,0,0),(1,0,0,-.6)],scale=[(1,1),(1,1),(1,1)],solid=False,spine=[(0,50,0),(0,0,0),(0,-75,0)]),
              appearance=Appearance(
                material=Material(USE='GREY')))]),
          Transform(DEF='flightdeck_lines',
            children=[
            Shape(DEF='spots8',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(DEF='spots8points',point=[(21.3,150,4.58),(5,150,4.58)])),
              appearance=Appearance(
                material=Material(DEF='White',diffuseColor=(1,1,1),emissiveColor=(1,1,1)))),
            Transform(DEF='number',rotation=(0,0,1,-3.14),scale=(10,10,10),translation=(-2,187,4.57),
              children=[
              Shape(DEF='hull_number',
                geometry=Text(string=["4"],
                  fontStyle=FontStyle(style_='BOLD')),
                appearance=Appearance(
                  material=Material(USE='White')))]),
            Shape(DEF='white_dashes2',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(11.75,-75,4.58),(11.75,190,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='white_dashes',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(10.25,-75,4.58),(10.25,190,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots9',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(USE='spots8points')),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots7',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(21.3,115,4.58),(5,115,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots6',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(21.3,65,4.58),(5,65,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots5',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(21.3,30,4.58),(5,30,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots4',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(21.3,-5,4.58),(5,-5,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots3',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(-21.3,-15,4.58),(-5,-15,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots2',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(21.3,-42.5,4.58),(5,-42.5,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='spots1',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(-21.3,-55,4.58),(-5,-55,4.58)])),
              appearance=Appearance(
                material=Material(USE='White'))),
            Shape(DEF='center_line',
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(0,190,4.58),(0,-75,4.58)])),
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1)))),
            Transform(DEF='fwd_number',rotation=(0,0,1,-3.14),scale=(12,12,12),translation=(7,-65,5),
              children=[
              Shape(DEF='hull_number1',
                geometry=Text(string=["4"],
                  fontStyle=FontStyle(style_='BOLD')),
                appearance=Appearance(
                  material=Material(USE='White')))])]),
          Transform(DEF='Std_Elev',translation=(-29,155,4.57),
            children=[
            Shape(
              geometry=Box(size=(15.3,15.3,1)),
              appearance=Appearance(
                material=Material(USE='GREY')))]),
          Transform(translation=(11,57.4,4.57),
            children=[
            Shape(DEF='runway1',
              geometry=Box(size=(1,264.5,.005)),
              appearance=Appearance(
                material=Material(DEF='Yellow',diffuseColor=(1,1,.3),emissiveColor=(1,1,.3))))]),
          Transform(DEF='Port_Elev',translation=(29,100,4.57),
            children=[
            Shape(
              geometry=Box(size=(15.3,15.3,1)),
              appearance=Appearance(
                material=Material(USE='GREY'))),
            TouchSensor(DEF='Port_el',description='touch to activate'),
            TimeSensor(DEF='DropClock',cycleInterval=10.0,startTime=-1.0),
            PositionInterpolator(DEF='Portelevmov1',key=[0,.17,.34,.51,.68,.85,1.02,1.19,1.36,1.53,1.7],keyValue=[(29,100,4.57),(29,100,2),(29,100,0),(29,100,-2),(29,100,-4),(29,100,-6),(29,100,-4),(29,100,-2),(29,100,0),(29,100,2),(29,100,4.57)]),
            ROUTE(fromField='touchTime',fromNode='Port_el',toField='set_startTime',toNode='DropClock'),
            ROUTE(fromField='fraction_changed',fromNode='DropClock',toField='set_fraction',toNode='Portelevmov1'),
            ROUTE(fromField='value_changed',fromNode='Portelevmov1',toField='set_translation',toNode='Port_Elev')]),
          Transform(DEF='QtrDeck',rotation=(1,0,0,1.57),translation=(-18,155,-4),
            children=[
            Shape(
              geometry=Box(size=(0.5,10,10)),
              appearance=Appearance(
                texture=ImageTexture(url=["QuarterDeck.jpg","https://savage.nps.edu/Savage/ShipsMilitary/LargeDeckAmphibBoxerUnitedStates/QuarterDeck.jpg"])))]),
          Transform(DEF='QtrDeckMove',translation=(-18,155,-4),
            children=[
            Shape(
              geometry=Box(size=(1.0,10,10)),
              appearance=Appearance(
                material=Material(USE='GREY'))),
            TouchSensor(DEF='Deck',description='touch to activate'),
            TimeSensor(DEF='SlideClock',cycleInterval=10.0,startTime=-1.0),
            PositionInterpolator(DEF='Move_Deck',key=[0,.17,.34,.51,.68,.85],keyValue=[(-18,155,-4),(-18,157,-4),(-18,159,-4),(-18,161,-4),(-18,164,-4),(-18,164,-4)]),
            ROUTE(fromField='touchTime',fromNode='Deck',toField='set_startTime',toNode='SlideClock'),
            ROUTE(fromField='fraction_changed',fromNode='SlideClock',toField='set_fraction',toNode='Move_Deck'),
            ROUTE(fromField='value_changed',fromNode='Move_Deck',toField='set_translation',toNode='QtrDeckMove')])]),
        Transform(rotation=(1,0,0,-1.57),scale=(1.4,1.4,1.4),translation=(5,55,6.25),
          children=[
          Inline(url=["SuperStructure.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LargeDeckAmphibBoxerUnitedStates/SuperStructure.x3d","SuperStructure.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LargeDeckAmphibBoxerUnitedStates/SuperStructure.wrl"])]),
        Transform(DEF='LCAC',rotation=(1,0,0,1.57),translation=(0,164,-14),
          children=[
          Transform(rotation=(0,1,0,1.57),
            children=[
            Inline(url=["../../AmphibiousVehicles/LCAC/LCAC.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LCAC.x3d","../../AmphibiousVehicles/LCAC/LCAC.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LCAC.wrl"]),
            TouchSensor(USE='Bottom'),
            TimeSensor(DEF='OutClock',cycleInterval=15.0,startTime=-1.0),
            PositionInterpolator(DEF='LCAC_out',key=[0,.17,.34,.51,.68,.85,1.02,1.19,1.36,1.53,1.7],keyValue=[(0,164,-14),(0,175,-14),(0,185,-14),(0,195,-14),(0,205,-14),(0,215,-14),(0,205,-14),(0,195,-14),(0,185,-14),(0,175,-14),(0,164,-14)]),
            ROUTE(fromField='touchTime',fromNode='Bottom',toField='set_startTime',toNode='OutClock'),
            ROUTE(fromField='fraction_changed',fromNode='OutClock',toField='set_fraction',toNode='LCAC_out'),
            ROUTE(fromField='value_changed',fromNode='LCAC_out',toField='set_translation',toNode='LCAC')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Boxer.py")
