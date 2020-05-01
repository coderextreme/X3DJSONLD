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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='creator',content='John W Carlson'),
    meta(name='created',content='December 13 2015'),
    meta(name='title',content='extrusion.x3d'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/force.x3d'),
    meta(name='description',content='beginnings of a force directed graph in 3D'),
    meta(name='generator',content='Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        geometry=Extrusion(DEF='extrusion',spine=[(-50,-50,0),(50,50,0)],creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0)))),
      TimeSensor(DEF='TourTime',loop=True),
      Script(DEF='MoveCylinder',
        field=[
        field(name='set_cycle',accessType='inputOnly',type='SFTime'),
        field(name='spine',accessType='inputOutput',type='MFVec3f',value=[(-50,-50,0),(50,50,0)])]),
      ROUTE(fromNode='TourTime',fromField='cycleTime',toNode='MoveCylinder',toField='set_cycle'),
      ROUTE(fromNode='MoveCylinder',fromField='spine_changed',toNode='extrusion',toField='spine')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for extrusion.py")
