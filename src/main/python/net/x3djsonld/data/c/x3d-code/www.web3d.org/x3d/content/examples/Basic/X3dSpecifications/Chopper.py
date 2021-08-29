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
    meta(content='Chopper.x3d',name='title'),
    meta(content='Rotor node provides animation and serves as an ExternProtoDeclare example',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.16 Chopper',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#Chopper',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/Chopper.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Chopper.x3d'),
    ExternProtoDeclare(name='Rotor',url=["Rotor.x3d#Rotor","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/Rotor.x3d#Rotor","Rotor.wrl#Rotor","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/Rotor.wrl#Rotor"],
      field=[
      field(accessType='initializeOnly',name='rate',type='SFTime'),
      field(accessType='initializeOnly',name='children',type='MFNode'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOutput',name='stopTime',type='SFTime')]),
    ProtoDeclare(name='Chopper',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='rotorSpeed',type='SFTime',value=1)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          TouchSensor(DEF='Touch',description='touch to toggle rotor rotation'),
          Inline(url=["ChopperBody.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ChopperBody.x3d","ChopperBody.wrl","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ChopperBody.wrl"]),
          ProtoInstance(DEF='Top',name='Rotor',
            fieldValue=[
            fieldValue(name='stopTime',value=1),
            fieldValue(name='children',
              children=[
              Inline(url=["ChopperRotor.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ChopperRotor.x3d","ChopperRotor.wrl","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ChopperRotor.wrl"])])],
            IS=IS(
              connect=[
              connect(nodeField='rate',protoField='rotorSpeed')]))]),
        #  after first node in ProtoDeclare, remainder of nodes do not render 
        Script(DEF='RotorScript',
          field=[
          field(accessType='inputOnly',name='startOrStopEngine',type='SFTime'),
          field(accessType='outputOnly',name='startEngine',type='SFTime'),
          field(accessType='outputOnly',name='stopEngine',type='SFTime'),
          field(accessType='initializeOnly',name='engineStarted',type='SFBool',value=False)]),
        ROUTE(fromField='touchTime',fromNode='Touch',toField='startOrStopEngine',toNode='RotorScript'),
        ROUTE(fromField='startEngine',fromNode='RotorScript',toField='startTime',toNode='Top'),
        ROUTE(fromField='stopEngine',fromNode='RotorScript',toField='stopTime',toNode='Top')])),
    Viewpoint(description='Example16',position=(0,0,5)),
    Group(
      children=[
      ProtoInstance(DEF='MikesChopper',name='Chopper')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Chopper.py")
