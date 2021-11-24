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
    meta(content='ProtoMFNodeSensorExample.x3d',name='title'),
    meta(content='Rick Goldberg, Don Brutzman',name='creator'),
    meta(content='25 February 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Nonrendering test scene for sensor relationships inside a prototype declaration to verify multiple MFNode relationships.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ProtoMFNodeSensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProtoMFNodeSensorExample.x3d'),
    ProtoDeclare(name='MyProto',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='a_Field',type='MFNode',
          children=[
          Group(
            children=[
            Shape(
              geometry=Text(string=["Encoding examples of","multifield node relationships","inside a ProtoDeclare"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
        field(accessType='inputOutput',name='b_Field',type='MFNode',
          children=[
          SphereSensor(description='example')])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='TransformC',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='a_Field')]),
          children=[
          Group(DEF='GroupD')]),
        Group(DEF='GroupE',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='b_Field')]),
          children=[
          SphereSensor(DEF='SphereSensorD',description='example')])])),
    ProtoInstance(name='MyProto')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProtoMFNodeSensorExample.py")
