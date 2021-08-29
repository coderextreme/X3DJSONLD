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
    meta(content='ConsoleBoard.x3d',name='title'),
    meta(content='This file defines a console board that is inlined to create a cockpit console of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original console.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='9 January 2001',name='created'),
    meta(content='15 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/ConsoleBoard.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='GRAY',
          material=Material(diffuseColor=(0.4,0.4,0.4))),
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,-1,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,-1],
          coord=Coordinate(point=[(0.15,0.09,0.0),(0.21,0.15,0.0),(0.65,0.15,0.0),(0.68,0.06,0.0),(0.74,0.06,0.0),(0.77,0.00,0.0),(0.80,0.00,0.0),(0.80,0.06,0.0),(0.755,0.21,0.0),(0.74,0.255,0.0),(0.72,0.30,0.0),(0.68,0.36,0.0),(0.62,0.42,0.0),(0.59,0.45,0.0),(0.53,0.48,0.0),(0.41,0.51,0.0),(-0.12,0.51,0.0),(-0.15,0.48,0.0),(-0.39,0.48,0.0),(-0.78,0.06,0.0),(-0.78,0.03,0.0),(-0.75,0.03,0.0),(-0.75,0.00,0.0),(-0.66,0.00,0.0),(-0.54,0.15,0.0),(-0.42,0.15,0.0),(-0.33,0.09,0.0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ConsoleBoard.py")
