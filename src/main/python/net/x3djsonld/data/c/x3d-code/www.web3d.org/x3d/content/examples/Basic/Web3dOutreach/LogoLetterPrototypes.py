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
    meta(content='LogoLetterPrototypes.x3d',name='title'),
    meta(content='This model contains prototype definitions for individual letters designed to be drawn on an exterior face of another shape. A typical example of usage is on the faces of a cube as a logo.',name='description'),
    meta(content='Roy Walmsley',name='creator'),
    meta(content='18 March 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='add more letters!',name='TODO'),
    meta(content='CubeLogoPrototype.x3d',name='reference'),
    meta(content='VirtualRealityHackathonLogo.x3d',name='reference'),
    meta(content='VirtualRealityHackathonLogoLetterPrototypes.x3d',name='reference'),
    meta(content='manual',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Dimensions are 0.9 x 0.9 
    children=[
    WorldInfo(title='LogoLetterPrototypes.x3d'),
    ProtoDeclare(appinfo="The letter 'H' for display on a 3D logo",name='Logo_letter_H',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='front_colour',type='SFColor',value=(1,0,0)),
        field(accessType='inputOutput',name='sides_colour',type='SFColor',value=(1,0.5,0.5))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='front_colour')]))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,11,-1,3,4,9,10,-1,8,5,6,7,-1],
              coord=Coordinate(DEF='Letter_H_Coords',point=[(-0.45,0.45,0.05),(-0.45,-0.45,0.05),(-0.25,-0.45,0.05),(-0.25,-0.1,0.05),(0.25,-0.1,0.05),(0.25,-0.45,0.05),(0.45,-0.45,0.05),(0.45,0.45,0.05),(0.25,0.45,0.05),(0.25,0.1,0.05),(-0.25,0.1,0.05),(-0.25,0.45,0.05),(-0.45,0.45,0),(-0.45,-0.45,0),(-0.25,-0.45,0),(-0.25,-0.1,0),(0.25,-0.1,0),(0.25,-0.45,0),(0.45,-0.45,0),(0.45,0.45,0),(0.25,0.45,0),(0.25,0.1,0),(-0.25,0.1,0),(-0.25,0.45,0)]))),
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='sides_colour')]))),
            geometry=IndexedFaceSet(coordIndex=[0,12,13,1,-1,1,13,14,2,-1,2,14,15,3,-1,3,15,16,4,-1,4,16,17,5,-1,5,17,18,6,-1,6,18,19,7,-1,7,19,20,8,-1,8,20,21,9,-1,9,21,22,10,-1,10,22,23,11,-1,11,23,12,0,-1],
              coord=Coordinate(USE='Letter_H_Coords')))])])),
    ProtoDeclare(appinfo="The letter 'R' for display on a 3D logo",name='Logo_letter_R',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='front_colour',type='SFColor',value=(1,0,0)),
        field(accessType='inputOutput',name='sides_colour',type='SFColor',value=(1,0.5,0.5))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='front_colour')]))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,12,-1,13,17,11,12,-1,17,16,10,11,-1,10,16,9,-1,9,16,15,8,-1,14,7,8,15,-1,3,4,5,6,-1],
              coord=Coordinate(DEF='Letter_R_Coords',point=[(-0.45,0.45,0.05),(-0.45,-0.45,0.05),(-0.25,-0.45,0.05),(-0.05,-0.10,0.05),(0.15,-0.45,0.05),(0.40,-0.45,0.05),(0.2,-0.10,0.05),(-0.25,-0.10,0.05),(0.35,-0.10,0.05),(0.45,0,0.05),(0.45,0.35,0.05),(0.35,0.45,0.05),(-0.25,0.45,0.05),(-0.25,0.25,0.05),(-0.25,0.10,0.05),(0.2,0.10,0.05),(0.25,0.175,0.05),(0.2,0.25,0.05),(-0.45,0.45,0),(-0.45,-0.45,0),(-0.25,-0.45,0),(-0.05,-0.10,0),(0.15,-0.45,0),(0.40,-0.45,0),(0.2,-0.10,0),(-0.25,-0.10,0),(0.35,-0.10,0),(0.45,0,0),(0.45,0.35,0),(0.35,0.45,0),(-0.25,0.45,0),(-0.25,0.25,0),(-0.25,0.10,0),(0.2,0.10,0),(0.25,0.175,0),(0.2,0.25,0)]))),
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='sides_colour')]))),
            geometry=IndexedFaceSet(coordIndex=[0,18,19,1,-1,1,19,20,2,-1,2,20,25,7,-1,7,25,21,3,-1,3,21,22,4,-1,4,22,23,5,-1,5,23,24,6,-1,6,24,26,8,-1,8,26,27,9,-1,9,27,28,10,-1,10,28,29,11,-1,11,29,18,0,-1,14,32,31,13,-1,15,33,32,14,-1,16,34,33,15,-1,17,35,34,16,-1,13,31,35,17,-1],
              coord=Coordinate(USE='Letter_R_Coords')))])])),
    ProtoDeclare(appinfo="The letter 'V' for display on a 3D logo",name='Logo_letter_V',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='front_colour',type='SFColor',value=(1,0,0)),
        field(accessType='inputOutput',name='sides_colour',type='SFColor',value=(1,0.5,0.5))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='front_colour')]))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,1,2,5,-1],
              coord=Coordinate(DEF='Letter_V_Coords',point=[(-0.45,0.45,0.05),(-0.1,-0.45,0.05),(0.1,-0.45,0.05),(-0.25,0.45,0.05),(0.25,0.45,0.05),(0.45,0.45,0.05),(-0.45,0.45,0),(-0.1,-0.45,0),(0.1,-0.45,0),(-0.25,0.45,0),(0.25,0.45,0),(0.45,0.45,0),(0,-0.1929,0.05),(0,-0.1929,0)]))),
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='sides_colour')]))),
            geometry=IndexedFaceSet(coordIndex=[7,1,0,6,-1,6,0,3,9,-1,1,7,8,2,-1,2,8,11,5,-1,10,4,5,11,-1,13,12,4,10,-1,9,3,12,13,-1],
              coord=Coordinate(USE='Letter_V_Coords')))])])),
    Anchor(description='Select text to view example model',url=["VirtualRealityHackathonLogoLetterPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d","VirtualRealityHackathonLogoLetterPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.wrl"],
      #  Selectable Text design pattern has transparent Box and Anchor description as a tooltip 
      children=[
      Group(
        children=[
        Shape(
          geometry=Text(string=["LogoLetterPrototypes.x3d","","prototype declarations are used by","","VirtualRealityHackathonLogoLetterPrototypes.x3d"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.4,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9)))),
        Shape(
          geometry=Box(size=(11,2.5,.001)),
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

print ("python x3d.py load successful for LogoLetterPrototypes.py")
