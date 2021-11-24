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
    meta(content='VirtualRealityHackathonLogoLetterPrototypes.x3d',name='title'),
    meta(content='This model defines a spinning X3D VRH logo for Virtual Reality Hackathon, using a cube of size 2 x 2 x 2 with the letter sequence V, R and H appearing twice around the faces. Each sequence is a different colour.',name='description'),
    meta(content='Roy Walmsley',name='creator'),
    meta(content='3 March 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CubeLogoPrototype.x3d',name='reference'),
    meta(content='LogoLetterPrototypes.x3d',name='reference'),
    meta(content='VirtualRealityHackathonLogo.x3d',name='reference'),
    meta(content='manual',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='VirtualRealityHackathonLogoLetterPrototypes.x3d'),
    ExternProtoDeclare(name='Cubic_Logo',url=["CubeLogoPrototype.x3d#Cubic_Logo","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.x3d#Cubic_Logo","CubeLogoPrototype.wrl#Cubic_Logo","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.wrl#Cubic_Logo"],
      field=[
      field(accessType='inputOutput',name='internalColor',type='SFColor'),
      field(accessType='inputOutput',name='frontFace',type='MFNode'),
      field(accessType='inputOutput',name='backFace',type='MFNode'),
      field(accessType='inputOutput',name='leftFace',type='MFNode'),
      field(accessType='inputOutput',name='rightFace',type='MFNode'),
      field(accessType='inputOutput',name='topFace',type='MFNode'),
      field(accessType='inputOutput',name='bottomFace',type='MFNode')]),
    ExternProtoDeclare(name='Logo_letter_H',url=["LogoLetterPrototypes.x3d#Logo_letter_H","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d#Logo_letter_H","LogoLetterPrototypes.wrl#Logo_letter_H","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.wrl#Logo_letter_H"],
      field=[
      field(accessType='inputOutput',name='front_colour',type='SFColor'),
      field(accessType='inputOutput',name='sides_colour',type='SFColor')]),
    ExternProtoDeclare(name='Logo_letter_R',url=["LogoLetterPrototypes.x3d#Logo_letter_R","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d#Logo_letter_R","LogoLetterPrototypes.wrl#Logo_letter_R","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.wrl#Logo_letter_R"],
      field=[
      field(accessType='inputOutput',name='front_colour',type='SFColor'),
      field(accessType='inputOutput',name='sides_colour',type='SFColor')]),
    ExternProtoDeclare(name='Logo_letter_V',url=["LogoLetterPrototypes.x3d#Logo_letter_V","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d#Logo_letter_V","LogoLetterPrototypes.wrl#Logo_letter_V","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.wrl#Logo_letter_V"],
      field=[
      field(accessType='inputOutput',name='front_colour',type='SFColor'),
      field(accessType='inputOutput',name='sides_colour',type='SFColor')]),
    NavigationInfo(avatarSize=[0.25,1.75,0.75],headlight=False),
    Background(DEF='WO_World',groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    PointLight(DEF='Lamp',ambientIntensity=1,location=(0,0,10),radius=20),
    Viewpoint(DEF='Camera',description='Virtual Reality Hackathon Logo Letter Prototypes',fieldOfView=0.858,position=(0,0,4)),
    Transform(DEF='Logo_Transform',
      children=[
      Transform(rotation=(0,0,1,0.7854),scale=(2,2,2),
        children=[
        ProtoInstance(name='Cubic_Logo',
          fieldValue=[
          fieldValue(name='internalColor',value=(0.6,0.6,0.6)),
          fieldValue(name='frontFace',
            children=[
            ProtoInstance(name='Logo_letter_V',
              fieldValue=[
              fieldValue(name='front_colour',value=(0.80,0.67,0.31)),
              fieldValue(name='sides_colour',value=(0.91,0.90,0.78))])]),
          fieldValue(name='bottomFace',
            children=[
            ProtoInstance(name='Logo_letter_V',
              fieldValue=[
              fieldValue(name='front_colour',value=(0.47,0.65,0.80)),
              fieldValue(name='sides_colour',value=(0.73,0.79,0.84))])]),
          fieldValue(name='rightFace',
            children=[
            ProtoInstance(name='Logo_letter_R',
              fieldValue=[
              fieldValue(name='front_colour',value=(0.80,0.67,0.31)),
              fieldValue(name='sides_colour',value=(0.91,0.90,0.78))])]),
          fieldValue(name='leftFace',
            children=[
            ProtoInstance(name='Logo_letter_R',
              fieldValue=[
              fieldValue(name='front_colour',value=(0.47,0.65,0.80)),
              fieldValue(name='sides_colour',value=(0.73,0.79,0.84))])]),
          fieldValue(name='backFace',
            children=[
            ProtoInstance(name='Logo_letter_H',
              fieldValue=[
              fieldValue(name='front_colour',value=(0.80,0.67,0.31)),
              fieldValue(name='sides_colour',value=(0.91,0.90,0.78))])]),
          fieldValue(name='topFace',
            children=[
            ProtoInstance(name='Logo_letter_H',
              fieldValue=[
              fieldValue(name='front_colour',value=(0.47,0.65,0.80)),
              fieldValue(name='sides_colour',value=(0.73,0.79,0.84))])])])])]),
    TimeSensor(DEF='Rotation_Timer',cycleInterval=3,loop=True),
    OrientationInterpolator(DEF='rotation_Interpolator',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,0),(0,1,0,-0.7),(0,1,0,-1.57),(0,1,0,-2.35),(0,1,0,-3.14),(0,1,0,-3.926),(0,1,0,-4.71238),(0,1,0,-5.4977),(0,1,0,-6.28)]),
    ROUTE(fromField='fraction_changed',fromNode='Rotation_Timer',toField='set_fraction',toNode='rotation_Interpolator'),
    ROUTE(fromField='value_changed',fromNode='rotation_Interpolator',toField='rotation',toNode='Logo_Transform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VirtualRealityHackathonLogoLetterPrototypes.py")
