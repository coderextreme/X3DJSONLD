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
    meta(content='TomahawkPrototype.x3d',name='title'),
    meta(content='BGM-109, Tomahawk Land Attack Missile prototype',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='4 September 2001',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/smart/bgm-109.htm',name='reference'),
    meta(content='http://www.specialoperations.com/multimedia/sounds.html',name='reference'),
    meta(content='http://www.specialoperations.com/multimedia/sounds.html',name='reference'),
    meta(content='See url "soundpermissions.html" for copyright info and use on missile1.au and exp03.au that are converted to missile1.wav and exp03.wav for use in this file/model',name='reference'),
    meta(content='soundpermissions.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/TomahawkPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='BGM-109',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='STARTLAUNCH',type='SFBool'),
        field(accessType='inputOnly',name='THETIME',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='TLAM',rotation=(0,1,0,-1.57),
          children=[
          Transform(
            #  Used with permission. See soundpermissions.html for details. 
            children=[
            Sound(maxBack=50000,maxFront=50000,
              source=AudioClip(DEF='TLAMSOUND',description='Tomahawk missile',url=["MISSILE1.wav","https://savage.nps.edu/Savage/Weapons/Missiles/MISSILE1.wav"])),
            Transform(translation=(0,-2.775,0),
              children=[
              Group(DEF='MISSILEBODY',
                children=[
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(DEF='TLAMCOLOR',
                      material=Material(diffuseColor=(1,1,1),shininess=.7,specularColor=(1,1,1))),
                    geometry=Cylinder(height=5.56,radius=.25905))])]),
              Transform(rotation=(0,0,1,-1.56),translation=(-.27,2.5,0),
                children=[
                Transform(rotation=(1,0,0,1.56),
                  children=[
                  Shape(
                    geometry=Text(string=["TOMAHAWK"],
                      fontStyle=FontStyle(size=.225,style_='BOLD')),
                    appearance=Appearance(
                      material=Material(diffuseColor=(0,0,0))))])]),
              Transform(rotation=(0,0,1,1.56),translation=(.27,.25,0),
                children=[
                Transform(rotation=(1,0,0,1.56),
                  children=[
                  Shape(
                    geometry=Text(string=["U.S. NAVY"],
                      fontStyle=FontStyle(size=.225,style_='BOLD')),
                    appearance=Appearance(
                      material=Material(diffuseColor=(0,0,0))))])])]),
            Transform(
              children=[
              Group(DEF='CONE',
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,1,1),shininess=.7,specularColor=(1,1,1))),
                  geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1.00,1.00),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48)],spine=[(0.00,0.00,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00)]))])]),
            Transform(
              children=[
              Group(DEF='MIDFIN',
                children=[
                Transform(DEF='STBDFIN',rotation=(0,0,1,-1.57),translation=(-.25905,-3.5,0),
                  children=[
                  Transform(
                    children=[
                    Shape(
                      appearance=Appearance(DEF='FINCOLOR',
                        material=Material(diffuseColor=(.9,.9,.9))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,.5,0),(1.2,.4,0),(1.2,.1,0),(0,0,0)])))])]),
                Transform(DEF='PORTFIN',rotation=(0,0,1,1.57),translation=(.25905,-3.5,0),
                  children=[
                  Transform(
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(.9,.9,.9))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,.5,0),(-1.2,.4,0),(-1.2,.1,0),(0,0,0)]))),
                    Transform(),])])])]),
            Transform(DEF='BOOSTSECT',
              children=[
              Group(DEF='BOOSTER',
                children=[
                Transform(translation=(0,-5.91,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='TLAMCOLOR'),
                    geometry=Cylinder(height=.69,radius=.25905))]),
                Group(DEF='BOOSTERFIN',
                  children=[
                  Transform(translation=(.25905,-6.27,0),
                    children=[
                    Shape(DEF='BFIN',
                      appearance=Appearance(USE='FINCOLOR'),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,.5,0),(.5,.35,0),(.5,0,0),(0,0,0)])))]),
                  Transform(rotation=(0,1,0,1.57),translation=(0,-6.27,-.25905),
                    children=[
                    Shape(USE='BFIN')]),
                  Transform(rotation=(0,1,0,3.14),translation=(-.25905,-6.27,0),
                    children=[
                    Shape(USE='BFIN')]),
                  Transform(rotation=(0,1,0,-1.57),translation=(0,-6.27,.25905),
                    children=[
                    Shape(USE='BFIN')])])]),
              Transform(DEF='EXHAUST',rotation=(0,1,0,3.14),scale=(0.5,0.5,0.5),translation=(0,-8,0),
                #  Exhaust flames are from the torch example in the source book. 
                children=[
                Shape(DEF='Flames',
                  #  No appearance, use emissive shading 
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
                    coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,-0.25,0.00)]),
                    color=Color(color=[(1.0,0.0,0.0),(0.9,0.5,0),(1.0,0.0,0.0),(0.9,0.3,0),(1.0,1.0,0.0),(0.9,0.3,0),(0.7,0.1,0.2),(0.9,0.8,0),(1.0,0.0,0.0)])),
                  appearance=Appearance(
                    material=Material(transparency=.15))),
                Transform(rotation=(0,1,0,1.57),scale=(0.9,0.9,1),
                  children=[
                  Shape(USE='Flames')]),
                Transform(rotation=(0,1,0,-1.57),scale=(0.9,0.9,1),
                  children=[
                  Shape(USE='Flames')])])])]),
          Transform(rotation=(1,0,0,-.35),translation=(0,-4.5,-.1),
            children=[
            Shape(
              geometry=Box(size=(.25,.5,.4)),
              appearance=Appearance(
                material=Material(diffuseColor=(.91,.91,.91))))]),
          PositionInterpolator(DEF='EXHINT',key=[0,.25,.5,.75,1],keyValue=[(1.4,1.4,1.4),(2,2,2),(2.5,2.5,2.5),(2,2,2),(1.4,1.4,1.4)]),
          TimeSensor(DEF='EXHAUSTCLOCK',loop=True),
          TimeSensor(DEF='TLAMCLOCK',cycleInterval=16,enabled=False),
          Script(DEF='TimeFilter2',
            field=[
            field(accessType='inputOnly',name='setStart',type='SFBool'),
            field(accessType='inputOnly',name='InputTime',type='SFTime'),
            field(accessType='outputOnly',name='startEventTime',type='SFTime')],
            IS=IS(
              connect=[
              connect(nodeField='setStart',protoField='STARTLAUNCH'),
              connect(nodeField='InputTime',protoField='THETIME')])),
          TimeSensor(DEF='FINCLOCK',cycleInterval=6),
          TimeSensor(DEF='TCLOCK',cycleInterval=28),
          OrientationInterpolator(DEF='FINANGLE',key=[.7,1],keyValue=[(0,0,1,-1.57),(0,0,1,0)]),
          PositionInterpolator(DEF='FINPOSIT',key=[.7,1],keyValue=[(-.25905,-3.5,0),(.25905,-3.5,0)]),
          PositionInterpolator(DEF='FINPOSITPORT',key=[.7,1],keyValue=[(.25905,-3.5,0),(-.25905,-3.5,0)]),
          OrientationInterpolator(DEF='FINANGLEPORT',key=[.7,1],keyValue=[(0,0,1,1.57),(0,0,1,0)])]),
        ROUTE(fromField='startEventTime',fromNode='TimeFilter2',toField='set_startTime',toNode='TCLOCK'),
        ROUTE(fromField='startTime',fromNode='TCLOCK',toField='startTime',toNode='TLAMSOUND'),
        ROUTE(fromField='stopTime',fromNode='TCLOCK',toField='stopTime',toNode='TLAMSOUND'),
        ROUTE(fromField='startEventTime',fromNode='TimeFilter2',toField='set_startTime',toNode='EXHAUSTCLOCK'),
        ROUTE(fromField='fraction_changed',fromNode='EXHAUSTCLOCK',toField='set_fraction',toNode='EXHINT'),
        ROUTE(fromField='value_changed',fromNode='EXHINT',toField='set_scale',toNode='EXHAUST'),
        ROUTE(fromField='startEventTime',fromNode='TimeFilter2',toField='set_startTime',toNode='FINCLOCK'),
        ROUTE(fromField='fraction_changed',fromNode='FINCLOCK',toField='set_fraction',toNode='FINANGLE'),
        ROUTE(fromField='fraction_changed',fromNode='FINCLOCK',toField='set_fraction',toNode='FINPOSIT'),
        ROUTE(fromField='fraction_changed',fromNode='FINCLOCK',toField='set_fraction',toNode='FINANGLEPORT'),
        ROUTE(fromField='fraction_changed',fromNode='FINCLOCK',toField='set_fraction',toNode='FINPOSITPORT'),
        ROUTE(fromField='value_changed',fromNode='FINANGLE',toField='set_rotation',toNode='STBDFIN'),
        ROUTE(fromField='value_changed',fromNode='FINPOSIT',toField='set_translation',toNode='STBDFIN'),
        ROUTE(fromField='value_changed',fromNode='FINANGLEPORT',toField='set_rotation',toNode='PORTFIN'),
        ROUTE(fromField='value_changed',fromNode='FINPOSITPORT',toField='set_translation',toNode='PORTFIN')])),
    #  ==================== 
    Background(skyColor=[(0.604,0.753,0.804)]),
    Anchor(description='Tomahawk Example',parameter=["target=_blank"],url=["TomahawkExample.wrl","../../Weapons/Missiles/TomahawkExample.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/TomahawkExample.wrl","TomahawkExample.x3d","../../Weapons/Missiles/TomahawkExample.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/TomahawkExample.x3d"],
      children=[
      Shape(
        geometry=Text(string=["TomahawkPrototype","is a prototype declaration file","","To see an example scene","click on this text and view","TomahawkExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TomahawkPrototype.py")
