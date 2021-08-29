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
    meta(content='default_binding_proto.x3d',name='title'),
    meta(content='default_binding_proto-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test a PROTO Viewpoint. A Viewpoint node is defined inside a PROTO definition in this world. That PROTO is then instantiated in the world. The result should be: that Viewpoint should be bound to the Viewpoint stack. A RIGHT side Viewpoint node is defined inside A PROTO definition, then instantiated in the world file. As a result, the viewer should see a cubic geometry with the word RIGHT displayed on its face, and Text geometry at the bottom of the world indicating that the Viewpoint position is 10 0 0.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/default_binding_proto.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_binding_proto.x3d'),
    ProtoDeclare(name='ViewProto',
      ProtoBody=ProtoBody(
        children=[
        Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0))])),
    NavigationInfo(type=["EXAMINE"]),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    ProtoInstance(DEF='VIEW1',name='ViewProto'),
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
          geometry=Text(DEF='TYPESTRING1',string=["message from Script is inserted here"],
            fontStyle=FontStyle(style_='BOLD')))])]),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["front.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/front.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],texCoordIndex=[0,1,2,3,-1],
        coord=Coordinate(DEF='UnitCube',point=[(-1,-1,1),(1,-1,1),(1,1,1),(-1,1,1),(1,1,-1),(-1,1,-1),(-1,-1,-1),(1,-1,-1)]),
        texCoord=TextureCoordinate(DEF='SquareTexCoord',point=[(0,0),(1,0),(1,1),(0,1)]))),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["right.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/right.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[1,7,4,2,-1],texCoordIndex=[0,1,2,3,-1],
        coord=Coordinate(USE='UnitCube'),
        texCoord=TextureCoordinate(USE='SquareTexCoord'))),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["rear.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/rear.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[7,6,5,4,-1],texCoordIndex=[0,1,2,3,-1],
        coord=Coordinate(USE='UnitCube'),
        texCoord=TextureCoordinate(USE='SquareTexCoord'))),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["left.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/left.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[0,3,5,6,-1],texCoordIndex=[1,2,3,0,-1],
        coord=Coordinate(USE='UnitCube'),
        texCoord=TextureCoordinate(USE='SquareTexCoord'))),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["top.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/top.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[3,2,4,5,-1],texCoordIndex=[0,1,2,3,-1],
        coord=Coordinate(USE='UnitCube'),
        texCoord=TextureCoordinate(USE='SquareTexCoord'))),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=ImageTexture(url=["bottom.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/bottom.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[0,6,7,1,-1],texCoordIndex=[3,0,1,2,-1],
        coord=Coordinate(USE='UnitCube'),
        texCoord=TextureCoordinate(USE='SquareTexCoord'))),
    Script(DEF='AVATARSCRIPT',directOutput=True,url=["default_binding_proto.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/default_binding_proto.js"],
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

print ("python x3d.py load successful for default_binding_proto.py")
