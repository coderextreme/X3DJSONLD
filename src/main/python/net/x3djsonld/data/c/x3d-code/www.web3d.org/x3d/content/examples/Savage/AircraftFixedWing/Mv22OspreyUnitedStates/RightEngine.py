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
    meta(content='RightEngine.x3d',name='title'),
    meta(content='Osprey MV-22 cowling for right engine.',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='23 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RightEngine.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/v-22.htm',name='reference'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(.2,.2,.7)]),
    Viewpoint(description='Front, level',position=(0,0,30)),
    #  Cowling/engine 
    Transform(DEF='RCowling_Node',rotation=(0,0,1,1.57),
      children=[
      Transform(DEF='RCowling_Transform',
        #  Transfrom node to rotate cowling into proper position 
        children=[
        Transform(DEF='RIGHT_COWLING',rotation=(0,0,1,-1.57),
          #  Transform node_for propellers and blade rotations 
          children=[
          Transform(DEF='R_Cowling',
            children=[
            Shape(DEF='Upper_Engine',
              geometry=Extrusion(creaseAngle=2.25,crossSection=[(1,0),(.75,.75),(0,1),(-.75,.75),(-1,0),(-.75,-.75),(0,-1),(.75,-.75),(1,0)],scale=[(1,1),(1,1),(.9,.85),(.5,.65)],solid=False,spine=[(0,0,2),(0,0,0),(0,0,-1),(0,0,-2)]),
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5),shininess=.5))),
            Transform(DEF='R_Upper_Air_Vent',rotation=(0,0,-1,1.57),scale=(.35,.3,.5),translation=(.7,0,-1),
              children=[
              Transform(rotation=(1,0,0,-0.5),
                children=[
                Shape(DEF='Air_Vent',
                  geometry=Extrusion(creaseAngle=.75,crossSection=[(0,0),(1,0),(1,.75),(.99,.78),(.98,.81),(.97,.84),(.96,.87),(.95,.9),(.94,.91),(.93,.92),(.92,.93),(.91,.94),(.9,.95),(.87,.96),(.84,.97),(.81,.98),(.78,.99),(.75,1),(-.75,1),(-.78,.99),(-.81,.98),(-.84,.97),(-.87,.96),(-.9,.95),(-.91,.94),(-.92,.93),(-.93,.92),(-.94,.91),(-.95,.9),(-.96,.87),(-.97,.84),(-.98,.81),(-.99,.78),(-1,.75),(-1,0),(0,0)],scale=[(1,1),(.1,.35)],solid=False,spine=[(0,0,0),(0,0,-2)]),
                  appearance=Appearance(
                    material=Material(DEF='Cross_Spn_Color',diffuseColor=(.5,.5,.5),shininess=.5)))])]),
            Transform(scale=(1.35,1.80,1.5),translation=(0,-0.75,1),
              children=[
              Shape(DEF='Lower_Engine',
                geometry=Extrusion(creaseAngle=1.00,crossSection=[(.5,0),(.45,.5),(.40,.6),(.35,.7),(.3,.72),(0,.75),(-.3,.72),(-.35,.7),(-.40,.6),(-.45,.5),(-.5,0),(-.45,-.5),(-.40,-.6),(-.35,-.7),(-.3,-.72),(0,-.75),(.3,-.72),(.35,-.7),(.40,-.6),(.45,-.5),(.5,0)],scale=[(.9,.9),(1,1),(.8,1),(.4,.85)],solid=False,spine=[(0,0,0),(0,0,-1),(0,0,-2),(0,0,-3)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.5,.5,.5),shininess=.5))),
              Transform(DEF='R_Lower_Air_Vent',rotation=(0,0,-1,1.57),scale=(.35,.3,.5),translation=(.3,-.14,-2),
                children=[
                Transform(rotation=(1,0,0,-0.24),
                  children=[
                  Shape(
                    geometry=Extrusion(creaseAngle=1.6,crossSection=[(0,0),(1,0),(1,1),(-1,1),(-1,0),(0,0)],scale=[(1,1),(1,.05)],solid=False,spine=[(0,0,0),(0,0,-2)]),
                    appearance=Appearance(
                      material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))])])])]),
          #  Right propellers 
          Transform(DEF='RightRotor',translation=(0,0,2.2),
            children=[
            Shape(
              geometry=Sphere(radius=0.6),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0),shininess=.3))),
            Transform(rotation=(1,0,0,1.57),scale=(3.0,5.0,1.0),translation=(3.5,0,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.01),
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.8)))]),
            Transform(rotation=(1,0,0,1.57),scale=(3.0,5.0,1.0),translation=(-3.5,0,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.01),
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.8)))]),
            Transform(rotation=(1,0,0,1.57),scale=(1.0,3.0,3.0),translation=(0,3.5,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.01),
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.8)))]),
            Transform(rotation=(1,0,0,1.57),scale=(1.0,3.0,3.0),translation=(0,-3.5,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.01),
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.8)))])]),
          #  Right propeller sensor and interpolator 
          TimeSensor(DEF='RClock',cycleInterval=0.3,loop=True),
          OrientationInterpolator(DEF='RightRotorPath',key=[0.0,0.50,1.0],keyValue=[(0.0,0.0,1.0,6.28),(0.0,0.0,1.0,3.14),(0.0,0.0,1.0,0.0)])])])]
      #  Sensor_to_rotate_cowling_on_proper_axis 
      ),
    #  Routes_for_propellor 
    ROUTE(fromField='fraction_changed',fromNode='RClock',toField='set_fraction',toNode='RightRotorPath'),
    ROUTE(fromField='value_changed',fromNode='RightRotorPath',toField='set_rotation',toNode='RightRotor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RightEngine.py")
