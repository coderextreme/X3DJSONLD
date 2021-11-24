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
    meta(content='Rotor.x3d',name='title'),
    meta(content='X3D working group',name='creator'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='24 May 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='VRML 97 specification example: spinning rotor (with replacable children) Prototype for Example D 16 Chopper.',name='description'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.16 Chopper',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.16',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Rotor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Rotor.x3d'),
    ProtoDeclare(appinfo='Rotor prototype to spin children geometry',name='Rotor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='rotation rate',name='rate',type='SFTime',value=1),
        field(accessType='initializeOnly',appinfo='children geometry to spin',name='children',type='MFNode'),
        field(accessType='inputOutput',appinfo='exposed TimeSensor field for animation',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='exposed TimeSensor field for animation',name='stopTime',type='SFTime',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='F',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children')])),
        TimeSensor(DEF='T',loop=True,
          IS=IS(
            connect=[
            connect(nodeField='cycleInterval',protoField='rate'),
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime')])),
        OrientationInterpolator(DEF='I',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,0)]),
        ROUTE(fromField='fraction_changed',fromNode='T',toField='set_fraction',toNode='I'),
        ROUTE(fromField='value_changed',fromNode='I',toField='set_rotation',toNode='F')])),
    #  ==================== 
    ProtoInstance(name='Rotor',
      fieldValue=[
      fieldValue(name='children',
        children=[
        Shape(
          geometry=Box(size=(4,0.2,0.1)),
          appearance=Appearance(
            material=Material(),))])]),
    Anchor(DEF='TouchTextForExample',description='Touch Text For Example',parameter=["target=_blank"],url=["Example16.x3d","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example16.x3d","Example16.wrl","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example16.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.4,0.8))),
        geometry=Text(string=["Rotor is a","Prototype (PROTO) declaration.","","To see an example scene using this new node,","click text and view Example 16"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.65)))])])
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
