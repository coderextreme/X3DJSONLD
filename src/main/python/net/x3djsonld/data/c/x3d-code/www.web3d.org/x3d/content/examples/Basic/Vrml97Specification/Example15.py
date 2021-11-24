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
    meta(content='Example15.x3d',name='title'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: Robot. Seek or zoom in towards the robot to start a simple animation sequence.',name='description'),
    meta(content='originals/exampleD_15.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.15 Robot',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.15',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example15.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Example15.x3d'),
    ExternProtoDeclare(name='Shuttle',url=["Example14.wrl#Shuttle","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.wrl#Shuttle","Example14.x3d#Shuttle","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.x3d#Shuttle"],
      field=[
      field(accessType='initializeOnly',name='rate',type='SFTime'),
      field(accessType='initializeOnly',name='distance',type='SFFloat'),
      field(accessType='initializeOnly',name='children',type='MFNode'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOutput',name='stopTime',type='SFTime'),
      field(accessType='initializeOnly',name='loop',type='SFBool')]),
    ExternProtoDeclare(name='Pendulum',url=["Example14.wrl#Pendulum","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.wrl#Pendulum","Example14.x3d#Pendulum","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.x3d#Pendulum"],
      field=[
      field(accessType='initializeOnly',name='rate',type='SFTime'),
      field(accessType='initializeOnly',name='maxAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='children',type='MFNode'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOutput',name='stopTime',type='SFTime'),
      field(accessType='initializeOnly',name='loop',type='SFBool')]),
    NavigationInfo(speed=20,type=["WALK","ANY"]),
    Viewpoint(description='zoom in',position=(0,0,150)),
    ProximitySensor(DEF='Near',size=(200,200,200)),
    ProtoInstance(DEF='WALK',name='Shuttle',
      fieldValue=[
      fieldValue(name='stopTime',value=1),
      fieldValue(name='rate',value=10),
      fieldValue(name='distance',value=20),
      fieldValue(name='children',
        children=[
        Transform(rotation=(0,1,0,1.57),
          children=[
          Shape(
            appearance=Appearance(DEF='A',
              material=Material(diffuseColor=(0,0.5,0.7))),
            #  head 
            geometry=Box(),),
          Transform(scale=(1,5,1),translation=(0,-5,0),
            children=[
            Shape(
              appearance=Appearance(USE='A'),
              #  body 
              geometry=Sphere(),)]),
          Transform(rotation=(0,1,0,1.57),translation=(1.5,0,0),
            children=[
            ProtoInstance(DEF='Arm',name='Pendulum',
              fieldValue=[
              fieldValue(name='stopTime',value=1),
              fieldValue(name='rate',value=1),
              fieldValue(name='maxAngle',value=0.52),
              fieldValue(name='children',
                children=[
                Transform(translation=(0,-3,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='A'),
                    geometry=Cylinder(height=4,radius=0.5))])])])]),
          Transform(rotation=(0,-1,0,1.57),translation=(-1.5,0,0),
            children=[
            ProtoInstance(USE='Arm')])])])]),
    ROUTE(fromField='enterTime',fromNode='Near',toField='startTime',toNode='WALK'),
    ROUTE(fromField='enterTime',fromNode='Near',toField='startTime',toNode='Arm'),
    ROUTE(fromField='exitTime',fromNode='Near',toField='stopTime',toNode='WALK'),
    ROUTE(fromField='exitTime',fromNode='Near',toField='stopTime',toNode='Arm')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Example15.py")
