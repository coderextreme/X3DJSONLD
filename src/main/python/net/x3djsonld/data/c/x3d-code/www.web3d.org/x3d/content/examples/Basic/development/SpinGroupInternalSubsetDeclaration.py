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

print('*** SpinGroupInternalSubsetDeclaration.x3d is an experimental X3D model and not intended to run. Exiting.')
import sys
sys.exit()
###############################################

#  ENTITY, ELEMENT and ATTLIST definitions are listed in detail within the DOCTYPE declaration internal subset. 
#  You must view full source of the DTD declarations (SpinGroupInternalSubsetDeclaration.x3d.txt) to fully understand this file. 
newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SpinGroupInternalSubsetDeclaration.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='18 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='SpinGroup PROTO example content to test DTD modularization and extensibility - view XML source to see DTD internal-subset declarations.',name='description'),
    meta(content='Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render.',name='error'),
    meta(content='You must view full source of the DTD declarations (SpinGroupInternalSubsetDeclaration.x3d.txt) to fully understand validation techniques in this file.',name='warning'),
    meta(content='SpinGroupInternalSubsetDeclaration.x3d.txt',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/development/SpinGroupInternalSubsetDeclaration.x3d',name='identifier'),
    meta(content='X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Declaring the SpinGroupTag PROTO, so that translations of internally defined SpinGroupTag to VRML can work: 
    children=[
    ProtoDeclare(name='SpinGroupTag',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='cycleInterval',type='SFTime',value=1),
        field(accessType='inputOutput',name='children',type='MFNode',
          children=[
          WorldInfo(info=["overridden at run time"])])]),
      ProtoBody=ProtoBody(
        #  SpinGroupTransform is first node, which determines node type, and encloses children for instances. 
        children=[
        Transform(DEF='SpinGroupTransform-TagVersion',rotation=(1,0,0,0),
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='children',protoField='children')]),
          children=[
          OrientationInterpolator(DEF='SpinGroupOrientationInterpolator-TagVersion',key=[0.0,0.50,1.0],keyValue=[(0,1,0,0.0),(0,1,0,-3.14159),(0,1,0,-6.28318)]),
          TimeSensor(DEF='SpinGroupTimeSensor-TagVersion',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='cycleInterval',protoField='cycleInterval')])),
          ROUTE(fromField='fraction_changed',fromNode='SpinGroupTimeSensor-TagVersion',toField='set_fraction',toNode='SpinGroupOrientationInterpolator-TagVersion'),
          ROUTE(fromField='value_changed',fromNode='SpinGroupOrientationInterpolator-TagVersion',toField='set_rotation',toNode='SpinGroupTransform-TagVersion')])])),
    ProtoDeclare(name='SpinGroup',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='cycleInterval',type='SFTime',value=1),
        field(accessType='inputOutput',name='children',type='MFNode',
          children=[
          WorldInfo(info=["overridden at run time"])])]),
      ProtoBody=ProtoBody(
        #  SpinGroupTransform is first node, which determines node type, and encloses children for instances. 
        children=[
        Transform(DEF='SpinGroupTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='children',protoField='children')]),
          children=[
          OrientationInterpolator(DEF='SpinGroupOrientationInterpolator',key=[0.0,0.50,1.0],keyValue=[(0,1,0,0.0),(0,1,0,-3.14159),(0,1,0,-6.28318)]),
          TimeSensor(DEF='SpinGroupTimeSensor',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='cycleInterval',protoField='cycleInterval')])),
          ROUTE(fromField='fraction_changed',fromNode='SpinGroupTimeSensor',toField='set_fraction',toNode='SpinGroupOrientationInterpolator'),
          ROUTE(fromField='value_changed',fromNode='SpinGroupOrientationInterpolator',toField='set_rotation',toNode='SpinGroupTransform')])])),
    Viewpoint(description='SpinGroup Examples',position=(0,0,15)),
    NavigationInfo(type=["EXAMINE"]),
    #  Instantiating the SpinGroupTag using a customized tag: 
    SpinGroupTag(DEF='instanceOne',center=(0,0,0),cycleInterval=8,nodeType=Group,rotation=(0,0,1,0),translation=(0,4,0),
      fieldValue=[
      fieldValue(name='children',
        children=[
        Shape(
          appearance=Appearance(DEF='AQUAMARINE',
            material=Material(diffuseColor=(0.1,0.8,0.8))),
          geometry=Text(string=["SpinGroupTag example 1 single child"],
            fontStyle=FontStyle(DEF='CENTER_FONT',justify=["MIDDLE","MIDDLE"],style_='BOLD')))])]),
    #  Instantiating the SpinGroup PROTO using a ProtoInstance tag: 
    ProtoInstance(DEF='instanceTwo',name='SpinGroup',
      fieldValue=[
      fieldValue(name='translation',value=(0,1,0)),
      fieldValue(name='cycleInterval',value=12),
      fieldValue(name='children',
        children=[
        Shape(
          geometry=Text(string=["SpinGroup ProtoInstance example 2 single child"],
            fontStyle=FontStyle(USE='CENTER_FONT')))])]),
    #  Instantiating the SpinGroup PROTO with multiple Node children: 
    ProtoInstance(DEF='instanceThree',name='SpinGroup',
      fieldValue=[
      fieldValue(name='translation',value=(0,-2,0)),
      fieldValue(name='cycleInterval',value=20),
      fieldValue(name='children',
        children=[
        Shape(
          appearance=Appearance(USE='AQUAMARINE'),
          geometry=Text(string=["SpinGroup ProtoInstance","example 3 first child"],
            fontStyle=FontStyle(USE='CENTER_FONT'))),
        Transform(translation=(0,-2,0),
          children=[
          Shape(
            geometry=Text(string=["example 3 second child"],
              fontStyle=FontStyle(USE='CENTER_FONT')))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SpinGroupInternalSubsetDeclaration.py")
