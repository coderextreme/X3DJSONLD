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
    meta(content='Rotor.x3d',name='title'),
    meta(content='X3D specification example showing a spinning helicopter rotor that is used by the Chopper model.',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.16 Chopper',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#Chopper',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/Rotor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Rotor.x3d'),
    ProtoDeclare(name='Rotor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='rate',type='SFTime',value=1),
        field(accessType='initializeOnly',name='children',type='MFNode',
          #  initial value is empty node array 
          ),
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='F',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children')])),
        #  after first node in ProtoDeclare, remainder of nodes do not render 
        TimeSensor(DEF='T',loop=True,
          IS=IS(
            connect=[
            connect(nodeField='cycleInterval',protoField='rate'),
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime')])),
        OrientationInterpolator(DEF='I',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,0)]),
        ROUTE(fromField='fraction_changed',fromNode='T',toField='set_fraction',toNode='I'),
        ROUTE(fromField='value_changed',fromNode='I',toField='set_rotation',toNode='F')])),
    ProtoInstance(name='Rotor',
      fieldValue=[
      fieldValue(name='children',
        children=[
        Shape(
          geometry=Box(size=(4,0.2,0.1)),
          appearance=Appearance(
            material=Material(),))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Rotor.py")
