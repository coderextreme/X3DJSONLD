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
    meta(content='Figure31_9SpinGroupPrototype.x3d',name='title'),
    meta(content='Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='24 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure31_9SpinGroupPrototype.x3d'),
    ProtoDeclare(name='SpinGroup',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='children',type='MFNode',
          #  NULL node initialization 
          ),
        field(accessType='inputOutput',name='cycleInterval',type='SFTime',value=1),
        field(accessType='inputOutput',name='loop',type='SFBool',value=False),
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='SpinGroupTransform',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children')])),
        #  following nodes will not be rendered, only the first node of a ProtoBody is drawn 
        TimeSensor(DEF='SpinGroupClock',
          IS=IS(
            connect=[
            connect(nodeField='cycleInterval',protoField='cycleInterval'),
            connect(nodeField='loop',protoField='loop'),
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime')])),
        OrientationInterpolator(DEF='Spinner',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,3.14),(0,1,0,6.28)]),
        ROUTE(fromField='fraction_changed',fromNode='SpinGroupClock',toField='set_fraction',toNode='Spinner'),
        ROUTE(fromField='value_changed',fromNode='Spinner',toField='set_rotation',toNode='SpinGroupTransform')])),
    #  Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare). 
    Viewpoint(description='Click on blue crossbar to activate second SpinGroup',orientation=(1,0,0,-0.52),position=(0,18,30)),
    #  Create an instance, meaning actual nodes that render 
    ProtoInstance(name='SpinGroup',
      fieldValue=[
      fieldValue(name='cycleInterval',value=8),
      fieldValue(name='loop',value=True),
      fieldValue(name='children',
        children=[
        Shape(
          geometry=Box(size=(25,2,2)),
          appearance=Appearance(DEF='Green',
            material=Material(diffuseColor=(0,1,0.3)))),
        Shape(
          geometry=Box(size=(2,25,2)),
          appearance=Appearance(USE='Green')),
        ProtoInstance(DEF='SecondSpinGroup',name='SpinGroup',
          fieldValue=[
          fieldValue(name='cycleInterval',value=4),
          fieldValue(name='loop',value=True),
          #  stopTime > startTime ensures that initial state is stopped 
          fieldValue(name='stopTime',value=1),
          fieldValue(name='children',
            children=[
            TouchSensor(DEF='ActivateSecondSpinGroup',description='Activate second SpinGroup by clicking blue bar'),
            Shape(
              geometry=Box(size=(2,2.05,25)),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0.3,1))))])])])]),
    ROUTE(fromField='touchTime',fromNode='ActivateSecondSpinGroup',toField='startTime',toNode='SecondSpinGroup')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for Figure31_9SpinGroupPrototype.py")
