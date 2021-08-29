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
    meta(content='PositionInterpolatorExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 November 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Simple PositionInterpolator example that bounces a Box up and down.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/PositionInterpolatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PositionInterpolatorExample.x3d'),
    Transform(DEF='BouncingBoxTransform',
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.8))))]),
    PositionInterpolator(DEF='PI',key=[0,.5,1.0],keyValue=[(0,1,0),(0,-1,0),(0,1,0)]),
    TimeSensor(DEF='CLOCK',cycleInterval=4,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='PI'),
    ROUTE(fromField='value_changed',fromNode='PI',toField='set_translation',toNode='BouncingBoxTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PositionInterpolatorExample.py")
