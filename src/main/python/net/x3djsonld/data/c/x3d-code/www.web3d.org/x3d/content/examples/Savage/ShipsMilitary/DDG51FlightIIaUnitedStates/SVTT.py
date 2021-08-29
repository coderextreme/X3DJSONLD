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
    meta(content='SVTT.x3d',name='title'),
    meta(content='DDG-51 Flight IIA MK-32 SVTT',name='description'),
    meta(content='LT Joe Sears, USN',name='creator'),
    meta(content='26 August 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://combatindex.com/store/3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='drawing'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SVTT.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='SVTT',
      children=[
      Transform(DEF='Base',
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(-.3,0),(-.2,.2),(.2,.2),(.3,0),(-.3,0)],orientation=[(1,0,0,-.2),(1,0,0,.2)],scale=[(1,1),(1,1)],spine=[(0,0,0),(0,0,-.6)]),
          appearance=Appearance(DEF='HazeGray',
            material=Material(specularColor=(.4,.4,.4))))]),
      Transform(DEF='BaseCylinder',translation=(0,.29,-.3),
        children=[
        Shape(
          appearance=Appearance(USE='HazeGray'),
          geometry=Cylinder(height=.2,radius=.2))]),
      Transform(DEF='Tube1',rotation=(1,0,0,1.57),translation=(.19,.56,-.3),
        children=[
        Shape(DEF='Tube',
          appearance=Appearance(USE='HazeGray'),
          geometry=Cylinder(height=3,radius=.175))]),
      Transform(DEF='Tube2',rotation=(1,0,0,1.57),translation=(-.19,.56,-.3),
        children=[
        Shape(USE='Tube')]),
      Transform(DEF='Tube3',rotation=(1,0,0,1.57),translation=(0,.9,-.3),
        children=[
        Shape(USE='Tube')]),
      Transform(DEF='TubeFlask1',translation=(.19,.56,1.2),
        children=[
        Shape(DEF='Flask',
          appearance=Appearance(USE='HazeGray'),
          geometry=Sphere(radius=.175))]),
      Transform(DEF='TubeFlask2',translation=(-.19,.56,1.2),
        children=[
        Shape(USE='Flask')]),
      Transform(DEF='TubeFlask3',translation=(0,.9,1.2),
        children=[
        Shape(USE='Flask')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SVTT.py")
