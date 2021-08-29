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
    meta(content='IkeaRockingHorse.x3d',name='title'),
    meta(content='X3D example Model of an Ikea Rocking Horse',name='description'),
    meta(content='3 March 2004',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Vaughn Pangelinan',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaRockingHorse.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IkeaRockingHorse.x3d'),
    Viewpoint(DEF='HorseViewRight',description='See Horse Straight On',fieldOfView=1.4,position=(0,12,22)),
    Transform(rotation=(1,0,0,-1.57),
      children=[
      Transform(
        children=[
        Transform(DEF='RockingHorseTransform',
          children=[
          Transform(DEF='AutoRotateTransform',center=(0,50,0),
            children=[
            Viewpoint(DEF='HorseViewOverhead',description='Rock With Horse From Overhead',fieldOfView=1.1,position=(0,0,40)),
            PlaneSensor(DEF='HorsePlaneSensor',description='Moves Horse around Floor',maxPosition=(15,15),minPosition=(-15,-15)),
            ROUTE(fromField='translation_changed',fromNode='HorsePlaneSensor',toField='set_translation',toNode='RockingHorseTransform'),
            Transform(rotation=(1,0,0,1.57),translation=(0,2,2),
              children=[
              Group(
                children=[
                Transform(scale=(1.5,1,1),translation=(0,0,6),
                  children=[
                  Shape(DEF='Rocker',
                    geometry=Extrusion(convex=False,creaseAngle=.785,crossSection=[(-2,-1),(2,-1),(2,1),(-2,1),(-2,-1)],scale=[(.2,1),(.6,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(.6,1),(.2,1)],solid=False,spine=[(-15,2.6,0),(-14,2.25,0),(-13,1.89,0),(-12,1.6,0),(-11,1.3,0),(-10,1.08,0),(-9,0.86,0),(-8,0.66,0),(-7,0.51,0),(-6,0.39,0),(-5,0.3,0),(-4,0.19,0),(-3,0.13,0),(-2,0.07,0),(-1,0.04,0),(0,0,0),(1,0.04,0),(2,0.07,0),(3,0.13,0),(4,0.19,0),(5,0.3,0),(6,0.39,0),(7,0.51,0),(8,0.66,0),(9,0.86,0),(10,1.08,0),(11,1.3,0),(12,1.6,0),(13,1.89,0),(14,2.25,0),(15,2.6,0)]),
                    appearance=Appearance(
                      material=Material(DEF='Wood',diffuseColor=(.6,.5,.2))))]),
                Transform(scale=(1.5,1,1),translation=(0,0,-6),
                  children=[
                  Shape(USE='Rocker')]),
                Transform(translation=(-8,1.75,0),
                  children=[
                  Shape(DEF='RockerCrossBar',
                    appearance=Appearance(
                      material=Material(USE='Wood')),
                    geometry=Box(size=(4,.75,12)))]),
                Transform(translation=(8,1.75,0),
                  children=[
                  Shape(USE='RockerCrossBar')]),
                Transform(translation=(8,1.75,4),
                  children=[
                  Shape(DEF='RockerHindLeg',
                    appearance=Appearance(
                      material=Material(DEF='NewGreen',diffuseColor=(.1,.6,.1))),
                    geometry=Extrusion(convex=False,creaseAngle=.785,crossSection=[(-2,-.5),(2,-.5),(2,.5),(-2,.5),(-2,-.5)],scale=[(1,1),(.9,1),(.8,1),(.75,1),(.8,1),(.9,1),(1,1),(1,1)],solid=False,spine=[(0,0,0),(0,1,0),(0,2,0),(0,3,0),(0,4,0),(0,5,0),(0,6,0),(0,12,0)]))]),
                Transform(translation=(8,1.75,-4),
                  children=[
                  Shape(USE='RockerHindLeg')]),
                Transform(scale=(1,1,.5),translation=(3,14.25,0),
                  children=[
                  Shape(DEF='RockerSeat',
                    appearance=Appearance(
                      material=Material(DEF='NewBlue',diffuseColor=(.1,.1,.6))),
                    geometry=Cylinder(height=1,radius=12))]),
                Transform(translation=(-9.99,1.75,0),
                  children=[
                  Shape(DEF='HorseFront',
                    appearance=Appearance(
                      material=Material(DEF='NewRed',diffuseColor=(.7,.1,.1))),
                    geometry=Extrusion(convex=False,creaseAngle=.785,crossSection=[(0,0),(3.75,0.28125),(5.90625,2.625),(7.21875,6.65625),(7.78125,15.65625),(5.15625,22.6875),(4.40625,23.625),(4.125,23.8125),(3.46875,24),(2.71875,23.8125),(1.78125,22.875),(0.75,20.90625),(-3.5625,16.78125),(-4.40625,15),(-4.3125,13.125),(-3.46875,11.90625),(-1.96875,11.625),(-0.46875,12.28125),(0.9375,13.03125),(1.875,13.03125),(2.4375,12.46875),(2.25,5.71875),(1.40625,3.09375),(0.46875,1.40625),(0,0.5625),(0,0)],solid=False,spine=[(0,0,.5),(0,0,-.5)]))]),
                Transform(rotation=(0,0,1,3.14),scale=(1,1,1.35),translation=(10,19.8,3.6),
                  children=[
                  Transform(rotation=(0,1,0,1.57),
                    children=[
                    Transform(rotation=(1,0,0,.3),
                      children=[
                      Shape(DEF='SeatBack',
                        appearance=Appearance(
                          material=Material(DEF='NewYellow',diffuseColor=(.8,.8,.1))),
                        geometry=Extrusion(convex=False,creaseAngle=.785,crossSection=[(0,6),(0,1.976470588),(0.635294118,0.988235294),(1.270588235,0.423529412),(2.117647059,0.070588235),(2.752941176,0),(3.6,0.211764706),(4.376470588,0.705882353),(4.870588235,1.482352941),(5.082352941,2.258823529),(5.082352941,6),(0,6)],solid=False,spine=[(0,0,.5),(0,0,-.5)]))])])]),
                Transform(rotation=(1,0,0,1.57),translation=(-6.5,24,0),
                  children=[
                  Shape(DEF='RockerHandle',
                    appearance=Appearance(
                      material=Material(USE='Wood')),
                    geometry=Cylinder(height=10,radius=.75))]),
                Transform(rotation=(1,0,0,1.57),translation=(-8.5,21,0),
                  children=[
                  Shape(DEF='RockerEye',
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.1,0.1,0.1))),
                    geometry=Cylinder(height=1.01,radius=.75))])])])]),
          TimeSensor(DEF='CLOCK',cycleInterval=2,loop=True),
          OrientationInterpolator(DEF='HorsePathInterpolator',key=[0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,.04),(0.0,1.0,0.0,.08),(0.0,1.0,0.0,.04),(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,-.04),(0.0,1.0,0.0,-.08),(0.0,1.0,0.0,-.04),(0.0,1.0,0.0,0.0)]),
          ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='HorsePathInterpolator'),
          ROUTE(fromField='value_changed',fromNode='HorsePathInterpolator',toField='set_rotation',toNode='AutoRotateTransform')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IkeaRockingHorse.py")
