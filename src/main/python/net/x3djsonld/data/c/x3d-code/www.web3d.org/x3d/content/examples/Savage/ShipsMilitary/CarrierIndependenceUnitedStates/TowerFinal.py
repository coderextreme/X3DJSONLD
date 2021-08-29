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
    meta(content='TowerFinal.x3d',name='title'),
    meta(content='25 September 2000',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='Cruiser Tower',name='description'),
    meta(content='LT Joseph Roth',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierIndependenceUnitedStates/TowerFinal.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Starboard View',orientation=(0,1,0,1.571),position=(200,5,0)),
    Viewpoint(description='PortSide View',orientation=(0,1,0,-1.571),position=(-150,5,0)),
    Viewpoint(description='BackSide View',position=(0,5,70)),
    Viewpoint(description='Front Side View',orientation=(0,1,0,3.142),position=(0,5,-70)),
    Viewpoint(description='Up View',orientation=(1,0,0,-1.571),position=(0,200,0)),
    Viewpoint(description='Inside Bridge',fieldOfView=1.571,position=(0,6.2,-18)),
    Transform(translation=(0,2.5,0),
      #  False Deck 
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,0],solid=False,
          coord=Coordinate(point=[(12,-2.5,60),(0,-2.5,60),(-2,-2.5,98),(-40,-2.5,100),(-40,-2.5,70),(-60,-2.5,60),(-60,-2.5,-60),(-52,-2.5,-65),(-40,-2.5,-200),(-20,-2.5,-200),(-3,-2.5,-100),(12,-2.5,-60),(12,-2.5,60)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)))),
      Transform(),]),
    Background(groundColor=[(0.7,0.2,0.0)],skyColor=[(0.0,0.2,0.7)]),
    #  MainStructure 
    Transform(translation=(0,6,0),
      children=[
      Shape(DEF='MainStruc',
        geometry=Box(size=(12,12,40)),
        appearance=Appearance(
          material=Material(),)),
      Transform(rotation=(0,1,0,-1.571),translation=(-6.1,-4,-4),
        children=[
        Shape(
          geometry=Text(string=["62"],
            fontStyle=FontStyle(size=12,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))))])]),
    #  Main Mast 
    Transform(translation=(-6,0,-12),
      children=[
      Transform(DEF='MastPrinc',
        children=[
        Transform(translation=(0,23,0),
          children=[
          Shape(
            geometry=Cylinder(height=47,radius=.6),
            appearance=Appearance(
              material=Material(),))]),
        Transform(rotation=(0,0,1,1.571),translation=(0,20,0),
          children=[
          Shape(
            geometry=Cylinder(height=24,radius=.3),
            appearance=Appearance(
              material=Material(),)),
          Transform(DEF='Details',rotation=(0,0,1,1.571),translation=(1.5,0,0),
            children=[
            Group(DEF='LeftDetails',
              children=[
              Transform(translation=(6,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))]),
              Transform(translation=(9,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))]),
              Transform(translation=(12,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))]),
              Transform(translation=(3,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))])]),
            Group(DEF='RightDetails',
              children=[
              Transform(translation=(-3,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))]),
              Transform(translation=(-6,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))]),
              Transform(translation=(-9,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))]),
              Transform(translation=(-12,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(height=3,radius=.1))])])])]),
        Transform(rotation=(0,0,1,1.571),translation=(0,25,0),
          children=[
          Shape(
            geometry=Cylinder(height=12,radius=.2),
            appearance=Appearance(
              material=Material(),)),
          Transform(DEF='Details-2',rotation=(0,0,1,1.571),translation=(.5,0,0),
            children=[
            Group(DEF='LeftDetails-2',
              children=[
              Transform(translation=(6,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(radius=.1))]),
              Transform(translation=(3,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(radius=.1))])]),
            Group(DEF='RightDetails-2',
              children=[
              Transform(translation=(-3,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(radius=.1))]),
              Transform(translation=(-6,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,0))),
                  geometry=Cylinder(radius=.1))])])])]),
        Transform(rotation=(0,0,1,1.571),translation=(0,35,0),
          children=[
          Shape(
            geometry=Cylinder(height=12,radius=.2),
            appearance=Appearance(
              material=Material(),)),
          Transform(USE='Details-2')]),
        Transform(rotation=(0,0,1,1.571),translation=(0,42,0),
          children=[
          Shape(DEF='mastro',
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.8))),
            geometry=Cylinder(height=12,radius=.2)),
          Transform(USE='Details-2')]),
        Transform(rotation=(0,0,1,1.571),translation=(0,45,0),
          children=[
          Shape(
            geometry=Cylinder(height=4,radius=.1),
            appearance=Appearance(
              material=Material(),))])])]),
    #  Bridges 
    Transform(DEF='Bridge',
      children=[
      Transform(translation=(0,6.5,-18),
        children=[
        Shape(DEF='Plataf',
          geometry=Box(size=(16,.3,10)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(0,4.5,-17),
        children=[
        Shape(USE='Plataf')]),
      Transform(rotation=(0,1,0,1.571),translation=(0,6,-22),
        children=[
        Transform(DEF='RotWindows',rotation=(0,0,1,-0.4),
          children=[
          Shape(DEF='GlassWin',
            geometry=Box(size=(.2,1,15)),
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0),transparency=.7)))])]),
      Transform(translation=(-7.5,6,-17),
        children=[
        Transform(rotation=(0,0,1,0.4),
          children=[
          Shape(
            geometry=Box(size=(.2,1,10)),
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0),transparency=.7)))])]),
      Transform(
        children=[
        Transform(translation=(7.5,6,-17),
          children=[
          Transform(rotation=(0,0,1,-0.4),
            children=[
            Shape(
              geometry=Box(size=(.2,1,10)),
              appearance=Appearance(
                material=Material(diffuseColor=(0,1,0),transparency=.7)))])])]),
      Transform(rotation=(0,1,0,1.571),translation=(-7.5,5,-17),
        children=[
        Shape(
          geometry=Box(size=(10,1,.3)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(0,5,-21.8),
        children=[
        Shape(DEF='WallsForWindows',
          geometry=Box(size=(15,1,.3)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(rotation=(0,1,0,1.571),translation=(7.5,5,-17),
        children=[
        Shape(
          geometry=Box(size=(9.8,1,.3)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(-7,5.6,-12.5),
        children=[
        Shape(
          geometry=Box(size=(2,2,1)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(7,5.6,-12.5),
        children=[
        Shape(
          geometry=Box(size=(2,2,1)),
          appearance=Appearance(
            material=Material(),))])]),
    Transform(DEF='Bridge2',translation=(0,2,1),
      children=[
      Transform(USE='Bridge')]),
    Transform(DEF='SternBridge',rotation=(0,1,0,3.142),translation=(0,.5,0),
      children=[
      Transform(USE='Bridge')]),
    #  Antenna 
    Transform(DEF='AntenaSuport',translation=(7,8,3),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(size=(13,4,8))),
      Transform(rotation=(0,0,1,0.5),translation=(0,-3,0),
        children=[
        Shape(
          geometry=Box(size=(12,4,8)),
          appearance=Appearance(
            material=Material(),))])]),
    Transform(translation=(9.5,12,3),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=4,radius=2)),
      Shape(
        geometry=Cylinder(height=8,radius=.5),
        appearance=Appearance(
          material=Material(),)),
      Transform(scale=(2,2,2),translation=(1,4,0),
        children=[
        Transform(
          children=[
          Group(
            children=[
            Transform(DEF='AntRot',scale=(2.5,.3,1),
              children=[
              Shape(
                geometry=Extrusion(creaseAngle=0.95,crossSection=[(1,0),(.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0)],solid=False,spine=[(0,0,0),(0,6,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0),transparency=0.7),
                  texture=ImageTexture(url=["antenaback.gif","https://savage.nps.edu/Savage/ShipsMilitary/CarrierIndependenceUnitedStates/antenaback.gif"])))]),
            TimeSensor(DEF='CLOCK',cycleInterval=4.0,loop=True),
            OrientationInterpolator(DEF='AntPathInt',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,3.14)])])])])]),
    #  Radar Bulbs 
    Transform(DEF='FrontRadar',rotation=(0,1,0,3.142),scale=(.8,.8,.8),translation=(0,12,-13),
      children=[
      Transform(DEF='RadarBulbs',
        children=[
        Transform(DEF='CentralBulb',translation=(0,0,5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Box(size=(6,1,10))),
          Transform(translation=(0,0,5),
            children=[
            Shape(
              geometry=Cylinder(height=1,radius=3),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1))))]),
          Transform(
            children=[
            Transform(translation=(0,2,5.5),
              children=[
              Shape(
                geometry=Cylinder(height=3,radius=2),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,1)))),
              Transform(translation=(0,1.7,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,1,1))),
                  geometry=Sphere(radius=2))])])])]),
        Transform(DEF='LeftBulb',rotation=(0,1,0,.9),scale=(.8,.8,.8),translation=(2,0,8),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Box(size=(6,1,10))),
          Transform(translation=(0,0,5),
            children=[
            Shape(
              geometry=Cylinder(height=1,radius=3),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1))))]),
          Transform(
            children=[
            Transform(translation=(0,2,5.5),
              children=[
              Shape(
                geometry=Cylinder(height=3,radius=2),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,1)))),
              Transform(translation=(0,1.7,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,1,1))),
                  geometry=Sphere(radius=2))])])])]),
        Transform(DEF='RightBulb',rotation=(0,1,0,-1.0),scale=(.7,.7,.7),translation=(-1,0,6),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Box(size=(6,1,10))),
          Transform(translation=(0,0,5),
            children=[
            Shape(
              geometry=Cylinder(height=1,radius=3),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1))))]),
          Transform(
            children=[
            Transform(translation=(0,2,5.5),
              children=[
              Shape(
                geometry=Cylinder(height=3,radius=2),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,1)))),
              Transform(translation=(0,1.7,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,1,1))),
                  geometry=Sphere(radius=2))])])])]),
        Transform(DEF='Antenna',translation=(0,0,5),
          children=[
          Transform(translation=(0,4,-0.5),
            children=[
            Shape(
              geometry=Cylinder(height=7,radius=2),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1)))),
            Transform(translation=(0,6.5,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Sphere(radius=.5))])]),
          Transform(
            children=[
            Transform(translation=(0,8,-0.5),
              children=[
              Shape(
                geometry=Cylinder(height=5,radius=.5),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,1))))])]),
          Transform(rotation=(1,0,0,0.9),translation=(0,11,-.5),
            children=[
            Shape(
              geometry=Box(size=(10,.5,8)),
              appearance=Appearance(
                material=Material(),))])])])]),
    #  Details over th main structure 
    Transform(DEF='MoreStruc',rotation=(0,1,0,1.571),translation=(0,13,-5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(size=(13,4,8)))]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='AntPathInt'),
    ROUTE(fromField='value_changed',fromNode='AntPathInt',toField='set_rotation',toNode='AntRot')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TowerFinal.py")
