####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimPosePrototype.py
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
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='HAnimPosePrototype.x3d',name='title'),
    meta(content='Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.',name='description'),
    meta(content='4 April 2025',name='created'),
    meta(content='5 April 2025',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Joe Williams',name='creator'),
    meta(content='under development',name='warning'),
    meta(content='HAnimPoseDesignNotes19MAR2025.pdf',name='reference'),
    meta(content='HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures',name='reference'),
    meta(content='HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator')]),
  Scene=Scene(
    #  Example scene to illustrate X3D nodes and fields (XML elements and attributes) 
    children=[
    WorldInfo(DEF='ModelInfo',info=["Design to illustrate a potential HAnimPose node"],title='HAnimPose Prototype'),
    NavigationInfo(),
    ProtoDeclare(appinfo='Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values',name='HAnimPose',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo="this event tells the HAnimPose node to do it's thing!",name='setPose',type='SFBool'),
        field(accessType='inputOutput',appinfo='name of this pose',name='name',type='SFString',value='PoseName'),
        field(accessType='inputOutput',appinfo='names of joints in pose',name='namesPoseJoints',type='MFString',value=["nameJoint1","nameJoint2","nameJoint3","nameJoint4"]),
        field(accessType='inputOutput',appinfo='positions of joints in pose',name='positionsPoseJoints',type='MFVec3f'),
        field(accessType='inputOutput',appinfo='rotations of joints in pose',name='rotationsPoseJoints',type='MFRotation'),
        field(accessType='inputOutput',appinfo='selects one of the HAnimHumanoid nodes',name='whichChoice',type='SFInt32'),
        field(accessType='inputOutput',appinfo='references one or more HAnimHumanoid nodes, typically via USE references',name='children',type='MFNode'),
        field(accessType='inputOnly',appinfo='references one or more HAnimHumanoid nodes, typically via USE references',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',appinfo='references one or more HAnimHumanoid nodes, typically via USE references',name='removeChildren',type='MFNode'),
        field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        children=[
        Switch(DEF='PrototypeRootNode',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichChoice'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren')])),
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        MetadataString(name='interface',reference='https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy',value=["X3DGroupingNode"]),
        #  This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
        Script(DEF='HAnimPoseScriptOperations',directOutput=True,
          field=[
          field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool'),
          field(accessType='inputOnly',appinfo="this event tells the HAnimPose node to do it's thing!",name='setPose',type='SFBool'),
          field(accessType='inputOutput',appinfo='name of this pose',name='name',type='SFString'),
          field(accessType='inputOutput',appinfo='names of joints in pose',name='namesPoseJoints',type='MFString'),
          field(accessType='inputOutput',appinfo='positions of joints in pose',name='positionsPoseJoints',type='MFVec3f'),
          field(accessType='inputOutput',appinfo='rotations of joints in pose',name='rotationsPoseJoints',type='MFRotation'),
          field(accessType='inputOutput',appinfo='selects one of the HAnimHumanoid nodes',name='whichChoice',type='SFInt32'),
          field(accessType='inputOutput',appinfo='references one or more HAnimHumanoid nodes, typically via USE references',name='children',type='MFNode'),
          field(accessType='inputOnly',appinfo='references one or more HAnimHumanoid nodes, typically via USE references',name='addChildren',type='MFNode'),
          field(accessType='inputOnly',appinfo='references one or more HAnimHumanoid nodes, typically via USE references',name='removeChildren',type='MFNode'),
          field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='setPose',protoField='setPose'),
            connect(nodeField='name',protoField='name'),
            connect(nodeField='namesPoseJoints',protoField='namesPoseJoints'),
            connect(nodeField='positionsPoseJoints',protoField='positionsPoseJoints'),
            connect(nodeField='rotationsPoseJoints',protoField='rotationsPoseJoints'),
            connect(nodeField='whichChoice',protoField='whichChoice'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]),

        sourceCode="""
ecmascript:

// Needed functionality:
// a. get access to a humanoid
// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
// c. walk the tree for all joints, then set transation, scale, rotation to default values
// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
//    HAnimJoint nodes to that corresponding set of values

var scriptName='HAnimPoseScript';

function initialize ()
{
    // TODO author initialization code (if any) goes here
    
    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
    
    // check humanoid connectivity

    tracePrint ('initialization() successful');
}
function set_enabled (eventValue)
{
    // input eventValue received for inputOutput field enabled
    enabled = eventValue;
    tracePrint ('enabled = ' + enabled);

    // TODO author code (if any) goes here
}
function setPose (eventValue)
{
    // input eventValue received for inputOnly field setPose
    setPose = eventValue;

    tracePrint ('setPose = ' + setPose);

    // TODO author code (if any) goes here
}
function set_name (eventValue)
{
    // input eventValue received for inputOutput field name
    name = eventValue;
    tracePrint ('name = ' + name);

    // TODO author code (if any) goes here
}
function set_namesPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field namesPoseJoints
    namesPoseJoints = eventValue;
    tracePrint ('namesPoseJoints = ' + namesPoseJoints);

    // TODO author code (if any) goes here
}
function set_positionsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field positionsPoseJoints
    positionsPoseJoints = eventValue;
    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);

    // TODO author code (if any) goes here
}
function set_rotationsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field rotationsPoseJoints
    rotationsPoseJoints = eventValue;
    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);

    // TODO author code (if any) goes here
}
function set_humanoid (eventValue)
{
    // input eventValue received for inputOutput field humanoid
    humanoid = eventValue;
    tracePrint ('humanoid = ' + humanoid);

    // TODO author code (if any) goes here
}
// ================== Trace output functions ==================

function tracePrint (outputString)
{
   // if traceEnabled is true, print outputString on X3D browser console
   if (traceEnabled)
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function alwaysPrint (outputString)
{
      // always print outputString on X3D browser console
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function set_traceEnabled (eventValue)
{
      // input eventValue received for inputOutput field
      traceEnabled = eventValue;
}
// ===========================================================
""")]
        #  Add any ROUTEs here that connect Script to/from prior nodes within ProtoBody 
        #  This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
        #  Add any ROUTEs here that connect Script to/from prior nodes within ProtoBody 
        )),
    ProtoInstance(name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='A'),
      fieldValue(name='namesPoseJoints',value=["l_hip","r_hip"]),
      fieldValue(name='positionsPoseJoints',value=[(0,0,0),(0,0,0)]),
      fieldValue(name='rotationsPoseJoints',value=[(0,0,1,0.2),(0,0,1,-0.2)])]),
    ProtoInstance(name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='T'),
      fieldValue(name='namesPoseJoints',value=["l_shoulder","r_shoulder"]),
      fieldValue(name='positionsPoseJoints',value=[(0,0,0),(0,0,0)]),
      fieldValue(name='rotationsPoseJoints',value=[(0,0,1,1.57),(0,0,1,-1.57)])])]
    #  Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) 
    )
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimPosePrototype.py:')
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

print("python HAnimPosePrototype.py load and self-test diagnostics complete.")
