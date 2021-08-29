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
    meta(content='OmniExamples.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='4 June 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='Intentional explicit renaming of external prototypes shows ProtoInstance naming flexibility.',name='warning'),
    meta(content='Omni Directional Antenna Domes. Several are shown in the process of transmitting and receiving.',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/OmniDirectional/OmniExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Note explicit renaming of external prototypes. 
    children=[
    ExternProtoDeclare(appinfo='Omnidirectional hemispherical receiver.',name='UHFReceiver',url=["OmniReceiverPrototype.x3d#OmniReceiver","https://savage.nps.edu/Savage/CommunicationsAndSensors/OmniDirectional/OmniReceiverPrototype.x3d#OmniReceiver","OmniReceiverPrototype.wrl#OmniReceiver","https://savage.nps.edu/Savage/CommunicationsAndSensors/OmniDirectional/OmniReceiverPrototype.wrl#OmniReceiver"],
      field=[
      field(accessType='initializeOnly',appinfo='units Hertz',name='frequency',type='SFInt32'),
      field(accessType='inputOutput',name='diffuseColor',type='SFColor'),
      field(accessType='inputOutput',name='emissiveColor',type='SFColor'),
      field(accessType='inputOutput',name='shininess',type='SFFloat'),
      field(accessType='inputOutput',name='ambientIntensity',type='SFFloat'),
      field(accessType='inputOutput',name='transparency',type='SFFloat')]),
    ExternProtoDeclare(appinfo='Omnidirectional hemispherical transmitter.',name='UHFTransmitter',url=["OmniTransmitterPrototype.x3d#OmniTransmitter","https://savage.nps.edu/Savage/CommunicationsAndSensors/OmniDirectional/OmniTransmitterPrototype.x3d#OmniTransmitter","OmniTransmitterPrototype.wrl#OmniTransmitter","https://savage.nps.edu/Savage/CommunicationsAndSensors/OmniDirectional/OmniTransmitterPrototype.wrl#OmniTransmitter"],
      field=[
      field(accessType='initializeOnly',appinfo='units Hertz',name='frequency',type='SFInt32'),
      field(accessType='inputOutput',name='diffuseColor',type='SFColor'),
      field(accessType='inputOutput',name='emissiveColor',type='SFColor'),
      field(accessType='inputOutput',name='shininess',type='SFFloat'),
      field(accessType='inputOutput',name='ambientIntensity',type='SFFloat'),
      field(accessType='inputOutput',name='transparency',type='SFFloat')]),
    #  Viewable geometry for this scene 
    WorldInfo(info=["Produce wireframe or transparent beam cylinders"],title='BeamCylinderPrototype'),
    Viewpoint(description='Signals',position=(15,5,100)),
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)]),
    Group(
      children=[
      Transform(scale=(5,5,5),translation=(-20,0,-25),
        children=[
        ProtoInstance(name='UHFReceiver',
          fieldValue=[
          fieldValue(name='frequency',value=3500000)])]),
      Transform(scale=(5,5,5),translation=(-15,0,-25),
        children=[
        ProtoInstance(name='UHFTransmitter',
          fieldValue=[
          fieldValue(name='frequency',value=40000)])]),
      Transform(scale=(25,25,25),translation=(-150,0,-60),
        children=[
        ProtoInstance(name='UHFReceiver',
          fieldValue=[
          fieldValue(name='frequency',value=35000000)])]),
      Transform(scale=(25,25,25),translation=(70,0,70),
        children=[
        ProtoInstance(name='UHFTransmitter',
          fieldValue=[
          fieldValue(name='frequency',value=35000000)])]),
      Transform(scale=(5,5,5),translation=(250,0,40),
        children=[
        ProtoInstance(name='UHFReceiver',
          fieldValue=[
          fieldValue(name='frequency',value=40000)])]),
      Transform(scale=(5,5,5),translation=(260,0,-60),
        children=[
        ProtoInstance(name='UHFReceiver',
          fieldValue=[
          fieldValue(name='frequency',value=3500000)])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OmniExamples.py")
