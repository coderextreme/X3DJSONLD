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
    component(level=1,name='NURBS'),
    meta(content='NurbsPositionInterpolatorExample.x3d',name='title'),
    meta(content='Example of animating a ball along a NurbsCurve.',name='description'),
    meta(content='Charles Adams',name='creator'),
    meta(content='26 February 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://edocs.nps.edu/npspubs/scholarly/theses/2003/Jun/03Jun_Adams.pdf',name='reference'),
    meta(content='under development, needs to be upgraded to final version of X3D NURBS nodes',name='warning'),
    meta(content='NURBS Position Interpolator',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPositionInterpolatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsPositionInterpolatorExample.x3d'),
    Viewpoint(description='NurbsPositionInterpolator path',position=(11,4.6,18)),
    TimeSensor(DEF='ts',cycleInterval=4,loop=True),
    NurbsPositionInterpolator(DEF='npi',knot=[0,.25,.5,.75,1],order=4,
      controlPoint=Coordinate(point=[(4,6,0),(7,12,0),(11,6,0),(15,2,0),(20,6,0)])),
    Transform(DEF='ball',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))),
        geometry=Sphere(),)]),
    Shape(
      geometry=NurbsCurve(DEF='nc',order=4,tessellation=30,
        controlPoint=Coordinate(point=[(4,6,0),(7,12,0),(11,6,0),(15,2,0),(20,6,0)])),
      appearance=Appearance(
        material=Material(emissiveColor=(1,1,1)))),
    ROUTE(fromField='fraction_changed',fromNode='ts',toField='set_fraction',toNode='npi'),
    ROUTE(fromField='value_changed',fromNode='npi',toField='set_translation',toNode='ball')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NurbsPositionInterpolatorExample.py")
