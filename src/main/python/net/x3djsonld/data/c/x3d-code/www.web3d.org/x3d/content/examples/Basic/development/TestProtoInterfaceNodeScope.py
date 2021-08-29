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
    meta(content='TestProtoInterfaceNodeScope.x3d',name='title'),
    meta(content='Test override of color values in prototypes and scripts. Color code: red = left-most default prototype interface, yellow = middle ProtoInstance fieldValue, green = Script initialization of middle ProtoInstance, blue = right-side default prototype instance.',name='description'),
    meta(content='Alan Hudson, Don Brutzman',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='4 January 2006',name='created'),
    meta(content='5 January 2006',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Copyright (c) Web3D Consortium Inc. 2006',name='rights'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestProtoInterfaceNodeScope.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestProtoInterfaceNodeScope.x3d'),
    ProtoDeclare(name='MyProto',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='material',type='SFNode',
          children=[
          Material(diffuseColor=(1,0,0))])]),
      ProtoBody=ProtoBody(
        children=[
        Shape(
          appearance=Appearance(
            IS=IS(
              connect=[
              connect(nodeField='material',protoField='material')])),
          geometry=Box(DEF='ProtoBox'))])),
    Transform(DEF='LeftTransform',translation=(-2.5,0.0,0.0),
      children=[
      ProtoInstance(DEF='P1',name='MyProto')]),
    Transform(DEF='MiddleTransform',
      children=[
      ProtoInstance(DEF='P2',name='MyProto',
        fieldValue=[
        fieldValue(name='material',
          children=[
          Material(diffuseColor=(0.7,0.7,0))])]),
      Script(DEF='SC',directOutput=True,
        field=[
        field(accessType='initializeOnly',name='proto1',type='SFNode',
          children=[
          ProtoInstance(USE='P2')])])]),
    Transform(DEF='RightTransform',translation=(2.5,0.0,0.0),
      children=[
      ProtoInstance(DEF='P3',name='MyProto',
        fieldValue=[
        fieldValue(name='material',
          children=[
          Material(diffuseColor=(0,0,1))])])]),
    Switch(whichChoice=-1,
      children=[
      Shape(
        #  To test protected scope of nodes DEF'ed inside a prototype body, add: <Box USE="ProtoBox"/> 
        )])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestProtoInterfaceNodeScope.py")
