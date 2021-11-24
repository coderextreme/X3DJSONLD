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
    meta(content='default_viewpoint.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test default Viewpoint properties. This world contains a single default (empty) Viewpoint node. As a result the default position of the Viewpoint should be at 0 0 10 (in front of the origin of the local coordinate system). Its orientation should be at 0 0 1 0 (no variation from the default orientation of looking directly down the Z axis in the negative direction). And any transition to another Viewpoint should result in a "jumpcut" (movement) to the next Viewpoint node, because the "jump" field is by default equal to true. As a result, the viewer should see a cubic geometry, with the word FRONT displayed, Text at the bottom of the world should show the position to be 0 0 10, and indicating the cube geometry with the pointing device should result in a "jumpcut" to the REAR view.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/default_viewpoint.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_viewpoint.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(DEF='VIEW1',description='entry view'),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    ProximitySensor(DEF='PROX_SENSOR',size=(100,100,100)),
    Inline(url=["viewinline.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/viewinline.x3d","viewinline.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/viewinline.wrl"]),
    Transform(DEF='TRANS0',
      children=[
      Transform(translation=(-10,-4,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='TYPESTRING0',string=["current position is:"],
            fontStyle=FontStyle(style_='BOLD')))])]),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-10,-5,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='TYPESTRING1',string=["(avatar position)"],
            fontStyle=FontStyle(style_='BOLD')))])]),
    Script(DEF='AVATARSCRIPT',directOutput=True,url=["default_viewpoint.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/default_viewpoint.js"],
      field=[
      field(accessType='initializeOnly',name='typestring1',type='SFNode',
        children=[
        Text(USE='TYPESTRING1')]),
      field(accessType='inputOnly',name='printPosition',type='SFVec3f')]),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='printPosition',toNode='AVATARSCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS0'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS0'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS1'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for default_viewpoint.py")
