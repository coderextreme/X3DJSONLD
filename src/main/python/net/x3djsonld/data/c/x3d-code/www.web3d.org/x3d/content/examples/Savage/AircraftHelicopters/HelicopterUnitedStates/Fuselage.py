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
    meta(content='Fuselage.x3d',name='title'),
    meta(content='This file defines a fuselage inlined to create a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original fuselage.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='1 August 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Fuselage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Group(DEF='FUSELAGE',
        children=[
        Transform(DEF='MAIN_SECTION',rotation=(1.0,0.0,0.0,1.57),
          children=[
          Shape(DEF='MAIN_FUSELAGE_SHAPE',
            appearance=Appearance(DEF='GREEN',
              material=Material(diffuseColor=(0.0,0.4,0.0))),
            geometry=Extrusion(convex=False,creaseAngle=0.8,crossSection=[(-0.625,1.3),(0.575,1.3),(0.675,1.2),(0.725,1.0),(0.775,0.6),(0.725,0.2),(0.625,0.05),(0.525,0.0),(-0.575,0.0),(-0.675,0.05),(-0.775,0.2),(-0.825,0.6),(-0.775,1.0),(-0.700,1.2),(-0.625,1.3)],endCap=False,solid=False,spine=[(0.0,0.0,0.0),(0.0,2.43,0.0)])),
          Shape(DEF='TAIL_FUSELAGE_SHAPE',
            appearance=Appearance(USE='GREEN'),
            geometry=Extrusion(convex=False,creaseAngle=0.8,crossSection=[(-0.625,1.3),(0.575,1.3),(0.675,1.2),(0.725,1.0),(0.775,0.6),(0.725,0.2),(0.625,0.05),(0.525,0.0),(-0.575,0.0),(-0.675,0.05),(-0.775,0.2),(-0.825,0.6),(-0.775,1.0),(-0.700,1.2),(-0.625,1.3)],endCap=False,scale=[(1.0,1.0),(0.20,0.20)],solid=False,spine=[(0.0,2.43,0.0),(0.0,3.33,0.0)]))]),
        Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(0.0,0.0,2.1),
          children=[
          Inline(url=["Cockpit.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Cockpit.x3d","Cockpit.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Cockpit.wrl"])]),
        Transform(translation=(0.0,-1.3,0.5),
          children=[
          Shape(
            appearance=Appearance(DEF='BLACK',
              material=Material(diffuseColor=(0.0,0.0,0.0))),
            geometry=Box(size=(0.5,0.1,0.5)))])]),
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
      ColorInterpolator(DEF='COLOR_PATH',key=[0.0,0.5,0.5,1.0],keyValue=[(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,1.0),(1.0,1.0,1.0)])]),
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

print ("python x3d.py load successful for Fuselage.py")
