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
    meta(content='boundingBox.x3d',name='title'),
    meta(content='boundingBox-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A Collision node with a Shape node as a child is defined in the local coordinate system. A bboxSize of 2 2 2 and a bboxCenter of 0 0 0 is given to the Collision node. The browser should parse the Collision node without error and provide collision detection, as evident by the Box colliding with the viewer and turning a red color through both navigation and geometry collision with a stationary viewer avatar.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Collision/boundingBox.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='boundingBox.x3d'),
    Viewpoint(DEF='VIEW1',description='Front View',position=(0,0,15)),
    Viewpoint(DEF='VIEW2',description='At Origin',position=(0,0,0)),
    TimeSensor(DEF='TIME0',cycleInterval=2),
    ColorInterpolator(DEF='COLOR_INTERP',key=[0,0.5,1],keyValue=[(0.8,0.8,0.8),(1,0,0),(0.8,0.8,0.8)]),
    TimeSensor(DEF='TIME1',loop=True),
    TimeSensor(DEF='TIME2',cycleInterval=4),
    PositionInterpolator(DEF='POSITION_INTERP',key=[0,0.5,0.75,1],keyValue=[(0,0,0),(0,0,0),(0,0,15),(0,0,0)]),
    Collision(DEF='COLLIDE1',bboxSize=(2,2,2),
      children=[
      Transform(DEF='TRANS1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='BOX1')),
          geometry=Box(size=(3,3,3)))])]),
    ROUTE(fromField='collideTime',fromNode='COLLIDE1',toField='startTime',toNode='TIME0'),
    ROUTE(fromField='fraction_changed',fromNode='TIME0',toField='set_fraction',toNode='COLOR_INTERP'),
    ROUTE(fromField='value_changed',fromNode='COLOR_INTERP',toField='set_diffuseColor',toNode='BOX1'),
    ROUTE(fromField='cycleTime',fromNode='TIME1',toField='startTime',toNode='TIME2'),
    ROUTE(fromField='isActive',fromNode='TIME2',toField='enabled',toNode='TIME1'),
    ROUTE(fromField='isActive',fromNode='TIME2',toField='enabled',toNode='TIME2'),
    ROUTE(fromField='fraction_changed',fromNode='TIME2',toField='set_fraction',toNode='POSITION_INTERP'),
    ROUTE(fromField='value_changed',fromNode='POSITION_INTERP',toField='set_translation',toNode='TRANS1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for boundingBox.py")
