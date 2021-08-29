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
    meta(content='RapierMissileSystemPrototype.x3d',name='title'),
    meta(content='Oliver Tan',name='creator'),
    meta(content='28 January 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='check whether size is to scale',name='warning'),
    meta(content='Rapier missile system prototype.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissileSystemPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.army-technology.com/projects/jernas/jernas1.html',name='reference'),
    meta(content='Rapier, Rapier missile, missile',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This is only a representational model. It is not created to scale. 
    children=[
    ExternProtoDeclare(name='RapierMissile',url=["RapierMissilePrototype.x3d#RapierMissile","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissilePrototype.x3d#RapierMissile","RapierMissilePrototype.wrl#RapierMissile","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissilePrototype.wrl#RapierMissile"],
      field=[
      field(accessType='initializeOnly',name='rocketAppearance',type='SFNode')]),
    ProtoDeclare(name='RapierMissileSystem',
      #  This is only a representational model. It is not created to scale. 
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='material',type='SFNode',
          children=[
          Material(diffuseColor=(.3,.6,.9))]),
        field(accessType='initializeOnly',name='imageTexture',type='SFNode',
          children=[
          ImageTexture(url=["cammie1.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/AV8bHarrierUnitedStates/cammie1.jpg"])])]),
      ProtoBody=ProtoBody(
        children=[
        Viewpoint(description='Rapier Missile System',position=(0,0,3)),
        Viewpoint(description='Rapier Missile System Oblique',orientation=(0,1,0,-1.571),position=(-3,0.5,0)),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Transform(rotation=(0,0,1,-1.571),
            children=[
            Shape(
              appearance=Appearance(DEF='LauncherSkin',
                IS=IS(
                  connect=[
                  connect(nodeField='material',protoField='material'),
                  connect(nodeField='texture',protoField='imageTexture')]))),
            Transform(DEF='MissileSystem',
              children=[
              Transform(rotation=(0,0,1,1.571),
                children=[
                Transform(translation=(0,-0.075,0.25),
                  children=[
                  Transform(scale=(0.5,0.5,0.5),
                    children=[
                    Transform(rotation=(0,0,1,-1.571),translation=(-0.05,0.1,0),
                      children=[
                      Transform(
                        children=[
                        Shape(
                          appearance=Appearance(USE='LauncherSkin'),
                          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-0.2,-1.4),(-0.2,-0.3),(0.05,0.2),(0.1,0.2),(0.1,-1.4),(-0.2,-1.4)],solid=False,spine=[(0,0,0),(0,0.1,0)])),
                        Transform(translation=(-0.05,0.05,-0.75),
                          children=[
                          Shape(
                            appearance=Appearance(USE='LauncherSkin'),
                            geometry=Cylinder(height=0.2,radius=0.15))]),
                        Transform(translation=(-0.05,0.05,-1.4),
                          children=[
                          Shape(
                            appearance=Appearance(USE='LauncherSkin'),
                            geometry=Cylinder(height=0.2,radius=0.15))]),
                        Transform(translation=(-0.05,0.05,-0.5),
                          children=[
                          Shape(
                            appearance=Appearance(USE='LauncherSkin'),
                            geometry=Cylinder(height=0.2,radius=0.05))])])]),
                    Transform(translation=(0,0.1,-0.55),
                      children=[
                      Transform(DEF='MissileGripPair',
                        children=[
                        Transform(scale=(0.49,1,0.8),
                          children=[
                          Transform(translation=(0,0.15,-0.3),
                            children=[
                            Transform(DEF='MissileGrip',translation=(0.2,0,0),
                              children=[
                              Transform(rotation=(0,1,0,1.571),
                                children=[
                                Transform(scale=(0.04,0.04,0.04),
                                  children=[
                                  Transform(
                                    children=[
                                    Transform(rotation=(1,0,0,1.571),
                                      children=[
                                      Transform(DEF='U1',
                                        children=[
                                        Shape(
                                          appearance=Appearance(USE='LauncherSkin'),
                                          geometry=Cylinder(height=8)),
                                        Transform(translation=(0,4,0),
                                          children=[
                                          Shape(
                                            geometry=Sphere(),
                                            appearance=Appearance(USE='LauncherSkin'))]),
                                        Transform(translation=(0,-4,0),
                                          children=[
                                          Shape(
                                            geometry=Sphere(),
                                            appearance=Appearance(USE='LauncherSkin'))])])]),
                                    Transform(translation=(0,0,4),
                                      children=[
                                      Transform(rotation=(0,0,1,-0.7),
                                        children=[
                                        Transform(translation=(0,5,0),
                                          children=[
                                          Transform(
                                            children=[
                                            Shape(
                                              appearance=Appearance(USE='LauncherSkin'),
                                              geometry=Cylinder(height=10)),
                                            Transform(translation=(0,5,0),
                                              children=[
                                              Shape(
                                                geometry=Sphere(),
                                                appearance=Appearance(USE='LauncherSkin'))]),
                                            Transform(translation=(0,-5,0),
                                              children=[
                                              Shape(
                                                geometry=Sphere(),
                                                appearance=Appearance(USE='LauncherSkin'))])])]),
                                        Transform(translation=(0,10,0),
                                          children=[
                                          Transform(translation=(0,0,-4),
                                            children=[
                                            Transform(rotation=(1,0,0,1.571),
                                              children=[
                                              Transform(scale=(1,0.8,1),translation=(0,0.2,0),
                                                children=[
                                                Transform(USE='U1')])])])])])])])])])])]),
                          Transform(rotation=(1,0,0,-1.4),translation=(0,0.15,-0.3),
                            children=[
                            Transform(rotation=(0,1,0,3.142),
                              children=[
                              Transform(USE='MissileGrip')])])])])]),
                    Transform(translation=(0,0.1,-1.2),
                      children=[
                      Transform(USE='MissileGripPair')]),
                    Transform(rotation=(1,0,0,-3.142),translation=(0,0.2,-0.95),
                      children=[
                      Transform(USE='MissileGripPair')]),
                    Transform(rotation=(1,0,0,-3.142),translation=(0,0.2,-1.6),
                      children=[
                      Transform(USE='MissileGripPair')])]),
                  Transform(
                    children=[
                    Transform(DEF='TopMissile',
                      children=[
                      Transform(rotation=(0,1,0,-1.57),scale=(0.1,0.1,0.1),translation=(0,0.2,-0.2),
                        children=[
                        Transform(
                          children=[
                          ProtoInstance(name='RapierMissile',
                            fieldValue=[
                            fieldValue(name='rocketAppearance',
                              children=[
                              Appearance(USE='LauncherSkin')])])])]),
                      TouchSensor(DEF='shootTopMissile',description='touch missile to launch it'),
                      PositionInterpolator(DEF='topMissilePathInterpolator',key=[0,.1,.2,.3,.4,.5,.6,.7,.8,.9,1],keyValue=[(0,0,1),(0,0.05,2),(0,0.1,3),(0,0.15,4),(0,0.2,5),(0,0.25,6),(0,0.3,7),(0,0.35,8),(0,0.4,9),(0,0.45,10),(0,0.5,11)]),
                      TimeSensor(DEF='topMissileClock',cycleInterval=10),
                      ROUTE(fromField='fraction_changed',fromNode='topMissileClock',toField='set_fraction',toNode='topMissilePathInterpolator'),
                      ROUTE(fromField='value_changed',fromNode='topMissilePathInterpolator',toField='set_translation',toNode='TopMissile'),
                      ROUTE(fromField='touchTime',fromNode='shootTopMissile',toField='set_startTime',toNode='topMissileClock')])]),
                  Transform(DEF='BottomMissile',
                    children=[
                    Transform(rotation=(0,1,0,-1.57),scale=(0.1,0.1,0.1),translation=(0,-0.05,-0.15),
                      children=[
                      Transform(
                        children=[
                        ProtoInstance(name='RapierMissile',
                          fieldValue=[
                          fieldValue(name='rocketAppearance',
                            children=[
                            Appearance(USE='LauncherSkin')])])])]),
                    TouchSensor(DEF='shootBottomMissile',description='touch missile to launch it'),
                    PositionInterpolator(DEF='bottomMissilePathInterpolator',key=[0,.1,.2,.3,.4,.5,.6,.7,.8,.9,1],keyValue=[(0,0,1),(0,0.05,2),(0,0.1,3),(0,0.15,4),(0,0.2,5),(0,0.25,6),(0,0.3,7),(0,0.35,8),(0,0.4,9),(0,0.45,10),(0,0.5,11)]),
                    TimeSensor(DEF='bottomMissileClock',cycleInterval=10),
                    ROUTE(fromField='fraction_changed',fromNode='bottomMissileClock',toField='set_fraction',toNode='bottomMissilePathInterpolator'),
                    ROUTE(fromField='value_changed',fromNode='bottomMissilePathInterpolator',toField='set_translation',toNode='BottomMissile'),
                    ROUTE(fromField='touchTime',fromNode='shootBottomMissile',toField='set_startTime',toNode='bottomMissileClock')])])]),
              CylinderSensor(DEF='MissileSystemRotation',description='Rotate the missile system.',maxAngle=0,minAngle=-1.3),
              ROUTE(fromField='rotation_changed',fromNode='MissileSystemRotation',toField='rotation',toNode='MissileSystem')])])])])),
    Anchor(description='RapierMissileSystemExample',url=["RapierMissileSystemExample.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissileSystemExample.x3d","RapierMissileSystemExample.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissileSystemExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["Rapier Missile System Prototype","contains prototype definitions","","Click on text to see these Appearances in","RapierMissileSystemExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.6))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RapierMissileSystemPrototype.py")
