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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='CH53eSimple.x3d',name='title'),
    meta(content='Jeff Lark',name='creator'),
    meta(content='20 September 2000',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='Simple helicopter model.',name='description'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/CH53UnitedStates/CH53eSimple.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(1,0,0,-1.57),translation=(0,5,0),
        children=[
        Group(
          children=[
          Transform(DEF='Rotor_System',
            children=[
            Transform(DEF='RotorBlade',scale=(9,0.65,0.2),translation=(15,0.2,0),
              children=[
              Shape(DEF='Blade1',
                geometry=Box(),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.3,0.8)))),
              Transform(DEF='Blade_Root',rotation=(0,0,1,1.5702),scale=(0.7,0.4,0.4),translation=(-1.,0.2,0),
                children=[
                Shape(DEF='BladeRoot',
                  geometry=Cylinder(height=0.7),
                  appearance=Appearance(
                    material=Material(emissiveColor=(0.5,0.5,0.5))))])]),
            Transform(DEF='Blade2',rotation=(0,0,1,0.8),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(DEF='Blade3',rotation=(0,0,1,1.79),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(DEF='Blade4',rotation=(0,0,1,2.69),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(DEF='Blade5',rotation=(0,0,1,3.59),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(DEF='Blade6',rotation=(0,0,1,4.48),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(DEF='Blade7',rotation=(0,0,1,5.48),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(
              children=[
              Transform(DEF='RotorHub',rotation=(1,0,0,1.5702),
                children=[
                Shape(
                  geometry=Cylinder(height=1.5,radius=4.6),
                  appearance=Appearance(
                    material=Material(),)),
                Transform(translation=(0,1.5,0),
                  children=[
                  Shape(
                    geometry=Cone(bottomRadius=4,height=1),
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.4,0.6,0.5))))])]),
              Transform(DEF='RotorMast',rotation=(1,0,0,1.5702),translation=(0,0,-1),
                children=[
                Shape(
                  geometry=Cylinder(height=4,radius=0.8),
                  appearance=Appearance(
                    material=Material(emissiveColor=(0.5,0.7,0.3))))])])]),
          Transform(DEF='TailRotor',rotation=(1,0,0,1.57),translation=(4.5,34,2.5),
            #  Tail rotor and blades 1/4 size MR and rotated -20 deg in Z axis 
            children=[
            Transform(DEF='Tail_Blade',rotation=(0,0,1,1.5702),scale=(0.25,0.25,0.25),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(rotation=(0,0,1,3.14),scale=(0.25,0.25,0.25),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(rotation=(0,0,1,4.71),scale=(0.25,0.25,0.25),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(scale=(0.25,0.25,0.25),
              children=[
              Transform(USE='RotorBlade')]),
            Transform(DEF='Tail_Hub',
              children=[
              Transform(scale=(0.25,0.25,0.25),
                children=[
                Transform(USE='RotorBlade')])])]),
          Transform(DEF='Fuselage_Pylons',
            children=[
            Transform(translation=(0,-13.,-5.6),
              children=[
              Shape(
                geometry=Sphere(radius=2),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.8,0.5),emissiveColor=(0,0,1),shininess=0.25,transparency=0.05)))]),
            Transform(rotation=(1,0,0,1.5702),scale=(1.8,1.2,7),translation=(0,4.8,-7.2),
              children=[
              Shape(
                geometry=Sphere(radius=3),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.4,0.8))))]),
            Transform(DEF='Main_Tail_Pylon',translation=(0,.5,0),
              children=[
              Transform(scale=(0.7,1,0.3),translation=(0,9,-4.5),
                children=[
                Shape(DEF='Pylon',
                  geometry=Cylinder(height=45,radius=4),
                  appearance=Appearance(
                    material=Material(),))]),
              Transform(rotation=(0,1,0,0.39),translation=(1.7,0,0),
                children=[
                Transform(rotation=(1,0,0,.95),scale=(0.3,0.2,.4),translation=(0,33,-1),
                  children=[
                  Shape(USE='Pylon')])])])]),
          Transform(
            children=[
            Transform(DEF='Engines',
              children=[
              Transform(translation=(5,0,-3),
                children=[
                Shape(DEF='Engine',
                  geometry=Cylinder(height=10,radius=0.8),
                  appearance=Appearance(
                    material=Material(),))]),
              Transform(DEF='Engine2',translation=(3.5,3,-2),
                children=[
                Shape(USE='Engine')]),
              Transform(DEF='Engine3',translation=(-5,0,-3),
                children=[
                Shape(USE='Engine')])])])])])]
      #  Able to get the right orientation by making my original group a child to a senior group. Need to change the orientation of viewpoint because they are now part of the parent group Tried playing with "inlines" but was geting parsing errors Rotation for tail-when rotation applied, the tail was somehow oriented in the same plane as the main rotor. 
      ),
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.1,0.1,0.0),(0.4,.25,.2),(.6,.60,.6)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Viewpoint(DEF='Front',description='Front',orientation=(1,0,0,.1),position=(0,0,60)),
    Viewpoint(DEF='Bottom',description='Bottom',fieldOfView=0.985398,orientation=(1,0,0,1.57),position=(0,-70,7)),
    Viewpoint(DEF='Left_Side',description='Left_Side',orientation=(0,1,0,1.57),position=(60,0,0)),
    TimeSensor(DEF='Clock',loop=True),
    OrientationInterpolator(DEF='SpinRotor',key=[0.0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,3.14),(0,0,1,6.28)]),
    OrientationInterpolator(DEF='SpinTail',key=[0.0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,3.14),(0,0,1,6.28)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='SpinRotor'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='SpinTail'),
    ROUTE(fromField='value_changed',fromNode='SpinRotor',toField='set_rotation',toNode='Rotor_System'),
    ROUTE(fromField='value_changed',fromNode='SpinTail',toField='set_rotation',toNode='TailRotor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CH53eSimple.py")
