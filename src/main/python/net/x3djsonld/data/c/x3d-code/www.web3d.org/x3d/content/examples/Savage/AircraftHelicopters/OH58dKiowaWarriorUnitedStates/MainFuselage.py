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
    meta(content='MainFuselage.x3d',name='title'),
    meta(content='this file defines the main fuselage of an OH58D',name='description'),
    meta(content='Del Beilstein',name='creator'),
    meta(content='21 September 2001',name='created'),
    meta(content='26 November 2004',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MainFuselage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0,.5,0)],skyColor=[(0,0,0.9)]),
    Transform(rotation=(1,0,0,1.57),
      children=[
      Transform(
        children=[
        Shape(DEF='TAIL_FUSELAGE_SHAPE',
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.2,0.05))),
          geometry=Extrusion(convex=False,creaseAngle=1.3,crossSection=[(-0.625,1.3),(0.625,1.3),(0.700,1.2),(0.775,1.0),(0.825,0.6),(0.775,0.2),(0.675,0.05),(0.575,0.0),(-0.575,0.0),(-0.675,0.05),(-0.775,0.2),(-0.825,0.6),(-0.775,1.0),(-0.700,1.2),(-0.625,1.3)],endCap=False,scale=[(1.0,1.0),(0.20,0.20)],solid=False,spine=[(0.0,2.43,0.0),(0.0,4.2,0.0)])),
        Transform(translation=(0,1,0),
          children=[
          Shape(DEF='MAIN_FUSELAGE_SHAPE',
            appearance=Appearance(
              material=Material(diffuseColor=(0.0,0.2,0.05))),
            geometry=Extrusion(convex=False,creaseAngle=1.3,crossSection=[(-0.625,1.3),(0.625,1.3),(0.700,1.2),(0.775,1.0),(0.825,0.6),(0.775,0.2),(0.675,0.05),(0.575,0.0),(-0.575,0.0),(-0.675,0.05),(-0.775,0.2),(-0.825,0.6),(-0.775,1.0),(-0.700,1.2),(-0.625,1.3)],endCap=False,solid=False,spine=[(0.0,0.0,0.0),(0.0,1.43,0.0)])),
          Transform(rotation=(1,0,0,1.57),translation=(0,3,2.65),
            children=[
            Transform(translation=(0.0,-1.36,2.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='BALL_COLOR',diffuseColor=(0.4,0.4,0.4))),
                geometry=Sphere(radius=0.04))]),
            Transform(translation=(0.0,-1.36,2.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.1,0.1))),
                geometry=Cylinder(height=0.05,radius=0.06))]),
            TimeSensor(DEF='CLOCK',loop=True),
            ColorInterpolator(DEF='COLOR_PATH',key=[0.0,0.5,0.5,1.0],keyValue=[(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,1.0),(1.0,1.0,1.0)])])])]),
      Transform(rotation=(1,0,0,3.1415),translation=(0,0,1.2),
        children=[
        Transform(scale=(.9,.8,.7),translation=(0,0,.31),
          children=[
          Inline(url=["FuselageNose.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/FuselageNose.wrl","FuselageNose.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/FuselageNose.x3d"]),
          Transform(rotation=(0,1,0,1.57),translation=(0,-0.2,-0.585),
            children=[
            Transform(rotation=(0,1,0,3.1415),
              children=[
              Transform(rotation=(0,0,1,1.57),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.0,0.2,0.05))),
                  #  right side, left side, back, front 
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1,5,9,8,7,6,-1,0,4,9,5,-1,4,3,8,9,-1,1,6,7,2,-1,7,8,3,2,-1],
                    #  right side, left side 
                    coord=Coordinate(point=[(0.0,0.0,0.0),(0.15,0.0,0.0),(0.1,0.1,0.0),(0.5,0.4,0.0),(0.0,0.1,0.0),(0.0,0.0,-0.03),(0.15,0.0,-0.03),(0.1,0.1,-0.03),(0.5,0.4,-0.03),(0.0,0.1,-0.03)])))])])])])]),
      Transform(rotation=(1,0,0,1.57),
        children=[
        Inline(url=["CockpitFloor.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitFloor.wrl","CockpitFloor.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitFloor.x3d"])])]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='COLOR_PATH'),
    ROUTE(fromField='value_changed',fromNode='COLOR_PATH',toField='set_emissiveColor',toNode='BALL_COLOR')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MainFuselage.py")
