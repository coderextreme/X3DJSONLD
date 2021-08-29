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
    meta(content='SLQ32.x3d',name='title'),
    meta(content='DDG-51 Flight IIA SLQ-32 V3 electronic warfare antenna',name='description'),
    meta(content='LT Joe Sears, USN',name='creator'),
    meta(content='26 August 2003',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='http://combatindex.com/store/3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='drawing'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SLQ32.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='SLQ-32',
      children=[
      Transform(DEF='Base',
        children=[
        Transform(rotation=(0,1,0,1.57),translation=(.3,0,0),
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(-.2,0),(-.1,.25),(.1,.25),(.2,0),(-.2,0)],orientation=[(1,0,0,-.2),(1,0,0,.2)],scale=[(1,1),(1,1)],spine=[(0,0,0),(0,0,-.6)]),
            appearance=Appearance(DEF='HazeGray',
              material=Material(specularColor=(.4,.4,.4))))])]),
      Transform(DEF='SLQFrame',rotation=(1,0,0,-1.57),translation=(0,1.25,0),
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(-1,0),(-.5,.6),(.5,.6),(1,0),(.2,-.6),(0,-.6),(-.2,-.6),(-1,0)],scale=[(1,1),(1,1)],spine=[(0,0,0),(0,0,-1)]),
          appearance=Appearance(USE='HazeGray'))]),
      Group(DEF='LeftAntennaFace',
        children=[
        Transform(rotation=(0,1,0,.92),translation=(-.55,1.1,.38),
          children=[
          Shape(
            appearance=Appearance(DEF='AntennaFace',
              material=Material(diffuseColor=(0.74,0.74,0.74))),
            geometry=Box(size=(.1,.2,.7)))]),
        Transform(rotation=(0,1,0,.92),translation=(-.6,.75,.34),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Box(size=(.1,.25,.8)))]),
        Transform(rotation=(0,1,0,.92),translation=(-.76,.4,.2),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Box(size=(.1,.2,.4)))])]),
      Group(DEF='CenterAntennaFace',
        children=[
        Transform(translation=(0,1.1,.6),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Cylinder(height=.2,radius=.16))]),
        Transform(translation=(0,.8,.6),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Cylinder(height=.18,radius=.18))])]),
      Group(DEF='RightAntennaFace',
        children=[
        Transform(rotation=(0,1,0,-.92),translation=(.55,1.1,.38),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Box(size=(.1,.2,.7)))]),
        Transform(rotation=(0,1,0,-.92),translation=(.6,.75,.34),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Box(size=(.1,.25,.8)))]),
        Transform(rotation=(0,1,0,-.92),translation=(.76,.4,.2),
          children=[
          Shape(
            appearance=Appearance(USE='AntennaFace'),
            geometry=Box(size=(.1,.2,.4)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SLQ32.py")
