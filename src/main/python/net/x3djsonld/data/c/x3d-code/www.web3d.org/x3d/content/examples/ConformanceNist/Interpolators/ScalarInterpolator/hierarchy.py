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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='hierarchy.x3d',name='title'),
    meta(content='hierarchy-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test of a ScalarInterpolator node to continue to generate and receive events when outside the Transform hierarchy. A Switch node is the parent of a ScalarInterpolator node that changes the illumination of a Cylinder geometry by a PointLight. The ScalarInterpolator has been "switched out" by setting the whichChoice field to -1. The result should be, the ScalarInterpolator should continue send and receive events, and animate the illumination of the Cylinder geometry.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ScalarInterpolator/hierarchy.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='hierarchy.x3d'),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    Background(groundColor=[(0,0,0)],skyColor=[(0.2,0.2,0.2)]),
    TimeSensor(DEF='TIME',cycleInterval=5,loop=True),
    Switch(whichChoice=-1,
      children=[
      ScalarInterpolator(DEF='SCALAR_INTERPOLATOR',key=[0,0.25,0.5,0.75,1],keyValue=[0,0.5,1,0.5,0])]),
    Group(
      children=[
      Transform(DEF='TRANS',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(),),
        Transform(translation=(0,0,4),
          children=[
          SpotLight(DEF='LIGHT',beamWidth=1.570796,cutOffAngle=.785398)])])]),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='SCALAR_INTERPOLATOR'),
    ROUTE(fromField='value_changed',fromNode='SCALAR_INTERPOLATOR',toField='intensity',toNode='LIGHT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for hierarchy.py")
