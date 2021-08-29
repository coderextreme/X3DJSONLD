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
    meta(content='GrenadeLauncher.x3d',name='title'),
    meta(content='Smoke grenade launchers for the AAV7PA1.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='31 May 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/GrenadeLauncher.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Grenade launchers',orientation=(1,0,0,-1.57),position=(0.75,2,0)),
    Group(DEF='LeftGrenageLauncher',
      children=[
      Transform(DEF='BottomPlate',translation=(0,0.175,0.125),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.3,0.3),shininess=0.125)),
          geometry=Box(size=(0.25,0.5,0.0325)))]),
      Transform(DEF='HousingAndTubes',rotation=(0,0,1,0.76),
        children=[
        Transform(rotation=(-1,0,0,0.22),
          children=[
          Transform(DEF='Housing',translation=(0.0125,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.3,0.2),shininess=0.125)),
              geometry=Box(size=(0.25,0.065,0.25)))]),
          Transform(DEF='TubeOne',rotation=(0.09,0.70,0.70,0.37),translation=(0.0625,0.1,0.0625),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Cylinder(height=0.2,radius=0.05))]),
          Transform(DEF='TubeTwo',rotation=(0.09,0.70,0.70,0.37),translation=(-0.0625,0.1,0.0625),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Cylinder(height=0.2,radius=0.05))]),
          Transform(DEF='TubeThree',rotation=(-0.09,-0.70,0.70,0.37),translation=(-0.0625,0.1,-0.0625),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Cylinder(height=0.2,radius=0.05))]),
          Transform(DEF='TubeFour',rotation=(-0.09,-0.70,0.70,0.37),translation=(0.0625,0.1,-0.0625),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Cylinder(height=0.2,radius=0.05))]),
          Transform(DEF='ElectronicFuse',translation=(0.0125,-0.075,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Box(size=(0.066,0.15,0.066)))])])])]),
    Background(skyColor=[(0.1,0.25,0.8)]),
    Group(DEF='RightGrenageLauncher',
      children=[
      Transform(translation=(1.5,0,0),
        children=[
        Transform(DEF='RightBottomPlate',translation=(0,0.175,0.125),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3),shininess=0.125)),
            geometry=Box(size=(0.25,0.5,0.0325)))]),
        Transform(DEF='HousiRightngAndTubes',rotation=(0,0,-1,0.76),
          children=[
          Transform(rotation=(-1,0,0,0.22),
            children=[
            Transform(DEF='RightHousing',translation=(0.0125,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.3,0.2),shininess=0.125)),
                geometry=Box(size=(0.25,0.065,0.25)))]),
            Transform(DEF='RightTubeOne',rotation=(0.09,0.70,0.70,0.37),translation=(0.0625,0.1,0.0625),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.2,radius=0.05))]),
            Transform(DEF='RightTubeTwo',rotation=(0.09,0.70,0.70,0.37),translation=(-0.0625,0.1,0.0625),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.2,radius=0.05))]),
            Transform(DEF='RightTubeThree',rotation=(-0.09,-0.70,0.70,0.37),translation=(-0.0625,0.1,-0.0625),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.2,radius=0.05))]),
            Transform(DEF='RightTubeFour',rotation=(-0.09,-0.70,0.70,0.37),translation=(0.0625,0.1,-0.0625),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.2,radius=0.05))]),
            Transform(DEF='RightElectronicFuse',translation=(0.0125,-0.075,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))),
                geometry=Box(size=(0.066,0.15,0.066)))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GrenadeLauncher.py")
