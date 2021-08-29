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
    meta(content='TestProtoDeclareDisconnectedField.x3d',name='title'),
    meta(content='Michalis Kamburelis, Dick Puk, Don Brutzman',name='creator'),
    meta(content='25 October 2020',name='created'),
    meta(content='25 October 2020',name='modified'),
    meta(content='Simple ProtoDeclare example to check if diagnostics find disconnected field.',name='description'),
    meta(content='http://web3d.org/pipermail/x3d-public_web3d.org/2020-October/013891.html',name='reference'),
    meta(content='http://web3d.org/pipermail/x3d-public_web3d.org/2020-October/013905.html',name='reference'),
    meta(content='TestProtoDeclareDisconnectedField.diagnostics.txt',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestProtoDeclareDisconnectedField.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestProtoDeclareDisconnectedField.x3d'),
    ProtoDeclare(name='MyShape',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='geometry',type='SFNode',
          children=[
          Sphere(),]),
        field(accessType='inputOutput',name='color',type='SFColor',value=(1,1,0))]),
      ProtoBody=ProtoBody(
        children=[
        Shape(DEF='ContainedShape',
          IS=IS(
            connect=[
            connect(nodeField='geometry',protoField='geometry'),
            connect(nodeField='bboxCenter',protoField='undefinedProtoField')]),
          appearance=Appearance(DEF='NoConnection',
            material=Material(),))])),
    ProtoInstance(name='MyShape',
      #  use default field values 
      )])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestProtoDeclareDisconnectedField.py")
