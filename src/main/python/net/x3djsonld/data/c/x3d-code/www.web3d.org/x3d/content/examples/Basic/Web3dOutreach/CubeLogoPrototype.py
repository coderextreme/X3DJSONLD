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
    meta(content='CubeLogoPrototype.x3d',name='title'),
    meta(content='This file defines a prototype cube of size 2 x 2 x 2. The fields allow any shape to be drawn on the faces.',name='description'),
    meta(content='Roy Walmsley',name='creator'),
    meta(content='18 March 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='manual',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CubeLogoPrototype.x3d'),
    ProtoDeclare(appinfo='Defines a cube and permits any externally defined shapes to be drawn on the six faces',name='Cubic_Logo',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='internalColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',name='frontFace',type='MFNode'),
        field(accessType='inputOutput',name='backFace',type='MFNode'),
        field(accessType='inputOutput',name='leftFace',type='MFNode'),
        field(accessType='inputOutput',name='rightFace',type='MFNode'),
        field(accessType='inputOutput',name='topFace',type='MFNode'),
        field(accessType='inputOutput',name='bottomFace',type='MFNode')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(DEF='Internal_Cube',
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='internalColor')]))),
            geometry=Box(size=(0.9,0.9,0.9))),
          Transform(DEF='Front_Object',translation=(0,0,0.45),
            children=[
            Transform(DEF='Front_Reorienter',
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='frontFace')]))]),
          Transform(DEF='Bottom_Object',rotation=(1,0,0,1.5708),translation=(0,-0.45,0),
            children=[
            Transform(DEF='Bottom_Reorienter',rotation=(0,0,1,3.1416),
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='bottomFace')]))]),
          Transform(DEF='Right_Object',rotation=(0,1,0,1.5708),translation=(0.45,0,0),
            children=[
            Transform(DEF='Right_Reorienter',
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='rightFace')]))]),
          Transform(DEF='Left_Object',rotation=(0,1,0,-1.5708),translation=(-0.45,0,0),
            children=[
            Transform(DEF='Left_Reorienter',rotation=(0,0,1,1.5708),
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='leftFace')]))]),
          Transform(DEF='Back_Object',rotation=(0,1,0,3.1416),translation=(0,0,-0.45),
            children=[
            Transform(DEF='Back_Reorienter',
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='backFace')]))]),
          Transform(DEF='Top_Object',rotation=(1,0,0,-1.5708),translation=(0,0.45,0),
            children=[
            Transform(DEF='Top_Reorienter',rotation=(0,0,1,3.1416),
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='topFace')]))])])])),
    Anchor(description='Select text to view example model',url=["VirtualRealityHackathonLogoLetterPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d","VirtualRealityHackathonLogoLetterPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.wrl"],
      #  Selectable Text design pattern has transparent Box and Anchor description as a tooltip 
      children=[
      Group(
        children=[
        Shape(
          geometry=Text(string=["CubeLogoPrototype.x3d#Cubic_Logo","","prototype declaration is used by","","VirtualRealityHackathonLogoLetterPrototypes.x3d"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.4,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9)))),
        Shape(
          geometry=Box(size=(12,2.5,.001)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.6,0.6,0.9),transparency=0.8)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CubeLogoPrototype.py")
