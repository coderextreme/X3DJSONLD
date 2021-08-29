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
    meta(content='fogtype_linear.x3d',name='title'),
    meta(content='fogtype_linear-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content="This is a test of the browser's ability to display a default LINEAR fog type. A flat IndexedFaceSet in the XY plane moves away from the viewer in a continuous loop. A numeric fraction of the complete cycle is visible to the viewer. Because the Fog density is linearly proportional to the distance of an object away from the viewer, as the plane moves away from the viewer, the Fog node should increase the red Fog color density in a linear manner. At the starting fraction, no red color should be visible. At the halfway point, the red color should be half of its maximum density. At the end, the red color should be at its maximum intensity.",name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Fog/fogtype_linear.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='fogtype_linear.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(description='Front View',position=(0,0,1)),
    Fog(color=(1,0,0),visibilityRange=100),
    TimeSensor(DEF='TIME',cycleInterval=10,loop=True),
    PositionInterpolator(DEF='POSITION',key=[0.01,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,0,-10),(0,0,-20),(0,0,-30),(0,0,-40),(0,0,-50),(0,0,-60),(0,0,-70),(0,0,-80),(0,0,-90),(0,0,-100)]),
    Transform(translation=(-0.4,0.2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Text(string=["LINEAR FOGTYPE"],
          fontStyle=FontStyle(size=0.1,style_='BOLD')))]),
    Transform(translation=(-0.05,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Text(DEF='CHANGE_TEXT',string=["message from Script is inserted here"],
          fontStyle=FontStyle(size=0.1,style_='BOLD')))]),
    Transform(DEF='TRANS',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='COLOR')),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(-10,10,0),(-10,-10,0),(10,-10,0),(10,10,0)])))]),
    Script(DEF='TIMESCRIPT',directOutput=True,url=["fogtype_linear.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Fog/fogtype_linear.js"],
      field=[
      field(accessType='initializeOnly',name='text',type='SFNode',
        children=[
        Text(USE='CHANGE_TEXT')]),
      field(accessType='inputOnly',name='set_fraction',type='SFFloat')]),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='TIMESCRIPT'),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='POSITION'),
    ROUTE(fromField='value_changed',fromNode='POSITION',toField='set_translation',toNode='TRANS')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for fogtype_linear.py")
