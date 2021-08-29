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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='VirtualRealityHackathonLogo.x3d',name='title'),
    meta(content='This model defines a spinnable X3D VRH logo for Virtual Reality Hackathon.',name='description'),
    meta(content='Roy Walmsley',name='creator'),
    meta(content='3 March 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CubeLogoPrototype.x3d',name='reference'),
    meta(content='LogoLetterPrototypes.x3d',name='reference'),
    meta(content='VirtualRealityHackathonLogoLetterPrototypes.x3d',name='reference'),
    meta(content='manual',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogo.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='VirtualRealityHackathonLogo.x3d'),
    NavigationInfo(avatarSize=[0.25,1.75,0.75],headlight=False),
    Background(DEF='WO_World',groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    Transform(DEF='Lamp_Transform',translation=(0,0,10),
      children=[
      PointLight(DEF='Lamp',ambientIntensity=1,radius=20)]),
    Transform(DEF='Camera_Transform',
      children=[
      Viewpoint(DEF='Camera',description='Virtual Reality Hackathon Logo',fieldOfView=0.858,position=(0,0,4))]),
    Transform(DEF='Logo_Transform',rotation=(0,0,1,0.7854),scale=(2,2,2),
      children=[
      Shape(DEF='Internal_Cube_Shape',
        appearance=Appearance(
          material=Material(DEF='Grey_Material',diffuseColor=(0.6,0.6,0.6))),
        geometry=Box(DEF='Internal_cube',size=(0.9,0.9,0.9))),
      Transform(DEF='Front_Object',translation=(0,0,0.45),
        children=[
        Transform(DEF='Front_Reorienter',
          children=[
          Group(DEF='Letter_V_Group',
            children=[
            Shape(DEF='Letter_V_Front',
              appearance=Appearance(DEF='Yellow_Front_Appearance',
                material=Material(DEF='Yellow_Front_Material',diffuseColor=(0.80,0.67,0.31))),
              geometry=IndexedFaceSet(DEF='Letter_V_Front_IFS',coordIndex=[0,1,2,3,-1,4,1,2,5,-1],
                coord=Coordinate(DEF='Letter_V_Coords',point=[(-0.45,0.45,0.05),(-0.1,-0.45,0.05),(0.1,-0.45,0.05),(-0.25,0.45,0.05),(0.25,0.45,0.05),(0.45,0.45,0.05),(-0.45,0.45,0),(-0.1,-0.45,0),(0.1,-0.45,0),(-0.25,0.45,0),(0.25,0.45,0),(0.45,0.45,0),(0,-0.1929,0.05),(0,-0.1929,0)]))),
            Shape(DEF='Letter_V_Sides',
              appearance=Appearance(DEF='Yellow_Sides_Appearance',
                material=Material(DEF='Yellow_Sides_Material',diffuseColor=(0.91,0.90,0.78))),
              geometry=IndexedFaceSet(DEF='Letter_V_Side_IFS',coordIndex=[7,1,0,6,-1,6,0,3,9,-1,1,7,8,2,-1,2,8,11,5,-1,10,4,5,11,-1,13,12,4,10,-1,9,3,12,13,-1],
                coord=Coordinate(USE='Letter_V_Coords')))])])]),
      Transform(DEF='Bottom_Object',rotation=(1,0,0,1.5708),translation=(0,-0.45,0),
        children=[
        Transform(DEF='Bottom_Reorienter',rotation=(0,0,1,3.1416),
          children=[
          Group(USE='Letter_V_Group')])]),
      Transform(DEF='Right_Object',rotation=(0,1,0,1.5708),translation=(0.45,0,0),
        children=[
        Transform(DEF='Right_Reorienter',
          children=[
          Group(DEF='Letter_R_Group',
            children=[
            Shape(DEF='Letter_R_Front',
              appearance=Appearance(USE='Yellow_Front_Appearance'),
              geometry=IndexedFaceSet(DEF='Letter_R_Front_IFS',coordIndex=[0,1,2,12,-1,13,17,11,12,-1,17,16,10,11,-1,10,16,9,-1,9,16,15,8,-1,14,7,8,15,-1,3,4,5,6,-1],
                coord=Coordinate(DEF='Letter_R_Coords',point=[(-0.45,0.45,0.05),(-0.45,-0.45,0.05),(-0.25,-0.45,0.05),(-0.05,-0.10,0.05),(0.15,-0.45,0.05),(0.40,-0.45,0.05),(0.2,-0.10,0.05),(-0.25,-0.10,0.05),(0.35,-0.10,0.05),(0.45,0,0.05),(0.45,0.35,0.05),(0.35,0.45,0.05),(-0.25,0.45,0.05),(-0.25,0.25,0.05),(-0.25,0.10,0.05),(0.2,0.10,0.05),(0.25,0.175,0.05),(0.2,0.25,0.05),(-0.45,0.45,0),(-0.45,-0.45,0),(-0.25,-0.45,0),(-0.05,-0.10,0),(0.15,-0.45,0),(0.40,-0.45,0),(0.2,-0.10,0),(-0.25,-0.10,0),(0.35,-0.10,0),(0.45,0,0),(0.45,0.35,0),(0.35,0.45,0),(-0.25,0.45,0),(-0.25,0.25,0),(-0.25,0.10,0),(0.2,0.10,0),(0.25,0.175,0),(0.2,0.25,0)]))),
            Shape(DEF='Letter_R_Sides',
              appearance=Appearance(USE='Yellow_Sides_Appearance'),
              geometry=IndexedFaceSet(DEF='Letter_R_Side_IFS',coordIndex=[0,18,19,1,-1,1,19,20,2,-1,2,20,25,7,-1,7,25,21,3,-1,3,21,22,4,-1,4,22,23,5,-1,5,23,24,6,-1,6,24,26,8,-1,8,26,27,9,-1,9,27,28,10,-1,10,28,29,11,-1,11,29,18,0,-1,14,32,31,13,-1,15,33,32,14,-1,16,34,33,15,-1,17,35,34,16,-1,13,31,35,17,-1],
                coord=Coordinate(USE='Letter_R_Coords')))])])]),
      Transform(DEF='Left_Object',rotation=(0,1,0,-1.5708),translation=(-0.45,0,0),
        children=[
        Transform(DEF='Left_Reorienter',rotation=(0,0,1,1.5708),
          children=[
          Group(USE='Letter_R_Group')])]),
      Transform(DEF='Back_Object',rotation=(0,1,0,3.1416),translation=(0,0,-0.45),
        children=[
        Transform(DEF='Back_Reorienter',
          children=[
          Group(DEF='Letter_H_Group',
            children=[
            Shape(DEF='Letter_H_Front',
              appearance=Appearance(USE='Yellow_Front_Appearance'),
              geometry=IndexedFaceSet(DEF='Letter_H_Front_IFS',coordIndex=[0,1,2,11,-1,3,4,9,10,-1,8,5,6,7,-1],
                coord=Coordinate(DEF='Letter_H_Coords',point=[(-0.45,0.45,0.05),(-0.45,-0.45,0.05),(-0.25,-0.45,0.05),(-0.25,-0.1,0.05),(0.25,-0.1,0.05),(0.25,-0.45,0.05),(0.45,-0.45,0.05),(0.45,0.45,0.05),(0.25,0.45,0.05),(0.25,0.1,0.05),(-0.25,0.1,0.05),(-0.25,0.45,0.05),(-0.45,0.45,0),(-0.45,-0.45,0),(-0.25,-0.45,0),(-0.25,-0.1,0),(0.25,-0.1,0),(0.25,-0.45,0),(0.45,-0.45,0),(0.45,0.45,0),(0.25,0.45,0),(0.25,0.1,0),(-0.25,0.1,0),(-0.25,0.45,0)]))),
            Shape(DEF='Letter_H_Sides',
              appearance=Appearance(USE='Yellow_Sides_Appearance'),
              geometry=IndexedFaceSet(DEF='Letter_H_Side_IFS',coordIndex=[0,12,13,1,-1,1,13,14,2,-1,2,14,15,3,-1,3,15,16,4,-1,4,16,17,5,-1,5,17,18,6,-1,6,18,19,7,-1,7,19,20,8,-1,8,20,21,9,-1,9,21,22,10,-1,10,22,23,11,-1,11,23,12,0,-1],
                coord=Coordinate(USE='Letter_H_Coords')))])])]),
      Transform(DEF='Top_Object',rotation=(1,0,0,-1.5708),translation=(0,0.45,0),
        children=[
        Transform(DEF='Top_Reorienter',rotation=(0,0,1,3.1416),
          children=[
          Group(USE='Letter_H_Group')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VirtualRealityHackathonLogo.py")
