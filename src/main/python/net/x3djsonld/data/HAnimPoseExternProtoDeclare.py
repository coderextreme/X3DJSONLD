####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimPoseExternProtoDeclare.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(content='HAnimPoseExternProtoDeclare.x3d',name='title'),
    meta(content='Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.',name='description'),
    meta(content='1 November 2025',name='created'),
    meta(content='14 December 2025',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Joe Williams',name='creator'),
    meta(content='Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE',name='contributor'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose',name='specificationUrl'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures',name='specificationUrl'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses',name='specificationUrl'),
    meta(content='Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript',name='reference'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(DEF='ModelInfo',info=["Design to illustrate a potential HAnimPose node"],title='HAnimPoseExternProtoDeclare'),
    Background(skyColor=[(0.6,0.6,0.8)]),
    NavigationInfo(),
    ExternProtoDeclare(appinfo='Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.',name='HAnimPose',url=["Filename.x3d#HAnimPose","https://some.address.org/Filename.x3d#HAnimPose"],
      field=[
      field(accessType='inputOutput',appinfo='HAnimHumanoid for this Pose to act upon',name='parentHAnimHumanoid',type='SFNode'),
      field(accessType='inputOutput',appinfo='name of this pose',name='name',type='SFString'),
      field(accessType='inputOutput',appinfo='joint values to apply to HAnimHumanoid',name='children',type='MFNode',
        children=[
        Comment(' initializating Joint nodes (if any) go here '),],),
      field(accessType='inputOutput',appinfo='explanation of purpose',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default is no loa',name='loa',type='SFInt32'),
      field(accessType='inputOutput',appinfo='how many seconds to achieve the pose',name='transitionDuration',type='SFTime'),
      field(accessType='inputOutput',appinfo='single Metadata* node',name='metadata',type='SFNode'),
      field(accessType='outputOnly',appinfo='event indicating when pose transition is active',name='isActive',type='SFBool'),
      field(accessType='inputOnly',appinfo='this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1',name='commencePose',type='SFBool'),
      field(accessType='inputOnly',appinfo='reset the skeleton to I pose with all joints zeroed',name='resetAllJoints',type='SFBool'),
      field(accessType='inputOnly',appinfo='allows transition to proceed incrementally from fraction [0..10',name='set_fraction',type='SFFloat'),
      field(accessType='inputOnly',appinfo='starts the animation clock',name='set_startTime',type='SFTime'),
      field(accessType='inputOnly',appinfo='possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE',name='isLoaded',type='SFBool'),
      field(accessType='inputOutput',appinfo='debug trace to Browser output console this is a local prototype field',name='traceEnabled',type='SFBool')]),
    Viewpoint(description='HAnimPoseExternProtoDeclare description',position=(0,1,4)),
    Transform(DEF='DisplayHeader1',translation=(0,1.5,0),
      children=[
      Anchor(description='go to HAnimPoseExternProtoDeclareIndex page',parameter=["target=_blank"],url=["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"],
        children=[
        Shape(
          geometry=Text(string=["Utility scene","HAnimPoseExternProtoDeclare.x3d"],
            fontStyle=FontStyle(DEF='HeaderFont',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.15,style_='BOLD')),
          appearance=Appearance(DEF='PoseTextAppearance',
            material=Material(diffuseColor=(0.1,0.3,0.5)))),
        Shape(
          geometry=Box(size=(3.5,0.5,.001)),
          appearance=Appearance(DEF='TransparentAppearance',
            material=Material(transparency=1)))])]),
    Transform(DEF='DisplayHeader2',translation=(0,0.5,0),
      children=[
      Anchor(description='go to HAnimPosePrototypeIndex page',parameter=["target=_blank"],url=["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"],
        children=[
        Shape(
          geometry=Text(string=["This model supports","HAnimPosePrototype.x3d"],
            fontStyle=FontStyle(USE='HeaderFont')),
          appearance=Appearance(USE='PoseTextAppearance'))]),
      Shape(
        geometry=Box(size=(2.6,0.5,.001)),
        appearance=Appearance(USE='TransparentAppearance'))])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimPoseExternProtoDeclare.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python HAnimPoseExternProtoDeclare.py load and self-test diagnostics complete.")
