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
    meta(content='X3DRetreatProtoExercise.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 May 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Contains multiple intentional warnings and errors, for validation testing purposes.',name='error'),
    meta(content='Solutions to the Proto Exercise posed by Chris Marrin of SONY at the May 2000 X3D Retreat. This exercise includes intentionally illegal VRML and does not render.',name='description'),
    meta(content='https://www.web3d.org/x3d/sony/X3DRetreatProtoEx.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/development/X3DRetreatProtoExercise.x3d',name='identifier'),
    meta(content='X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ============= Example 1 ============= 
    #  GeometryNode and ChildNode are not valid node types, so used type Node/Nodes instead. 
    #  Note exercise example is incomplete and has no node(s) defined for body content. 
    #  X3D DTD can correctly detect these content errors if they occur, scene will be well-formed but not valid. 
    children=[
    ProtoDeclare(name='MyProto',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='geometry',type='SFNode',value=None),
        field(accessType='initializeOnly',name='children',type='MFNode',value=[NULL])]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["Added this node as PROTO body, so that the example can be valid VRML"])])),
    #  ============= Example 2 ============= 
    #  Adding new fields to an existing node. 
    #  Corrected example by moving Material from PROTO interface to PROTO body. 
    ProtoDeclare(name='PhysicalMaterial',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='mass',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='hardness',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='friction',type='SFFloat',value=1)]),
      ProtoBody=ProtoBody(
        children=[
        Material(DEF='M')]
        #  EXPORT M (this is Blendo nomenclature, not VRML 97) 
        )),
    #  ============= Example 3a ============= 
    #  Consider new possibility of declaring a field PROTO. 
    #  Again no body provided in this example (since goal is a new FieldPROTO construct). 
    ProtoDeclare(name='Plane',
      ProtoInterface=ProtoInterface(
        #  FIELDPROTO 
        field=[
        field(accessType='initializeOnly',name='normal',type='SFVec3f',value=(0,0,1)),
        field(accessType='initializeOnly',name='distance',type='SFFloat',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["Added this node as PROTO body, so that the example can be valid VRML"])])),
    #  ============= Example 3b ============= 
    #  Example 3b employs the supposed field PROTO. 
    #  X3D DTD currently restricts field types to VRML 97 types, and so flags these untyped fields as an error. 
    #  We could allow unspecified field types, but would lose checking (and authoring suggestions) on existing types. 
    ProtoDeclare(name='BSPLeaf',
      ProtoInterface=ProtoInterface(
        #  Intentionally invalid type values used. 
        field=[
        field(accessType='initializeOnly',name='plane',type='Plane',value=0,0,1,0),
        field(accessType='initializeOnly',name='front',type='BSPLeaf',value=NULL),
        field(accessType='initializeOnly',name='back',type='BSPLeaf',value=NULL),
        field(accessType='initializeOnly',name='children',type='MFNode',value=[NULL])]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["Added this node as PROTO body, so that the example can be valid VRML"])])),
    #  ============= Example 4 ============= 
    #  PROTO with routes. Example nodes moved from interface definition to body. 
    ProtoDeclare(name='SpinGroup',
      ProtoInterface=ProtoInterface(
        #  Example 4 calls three of the field references ROUTEs, but they actually match VRML 97 'IS' statements. IS="TS.cycleInterval" IS="TS.startTime" IS="TS.stopTime" 
        field=[
        field(accessType='initializeOnly',name='speed',type='SFTime',value=1),
        field(accessType='initializeOnly',name='startTime',type='SFTime',value=0),
        field(accessType='initializeOnly',name='stopTime',type='SFTime',value=0)]),
      ProtoBody=ProtoBody(
        #  Corrected example by moving nodes T, G, TS and OI from PROTO interface to PROTO body. 
        children=[
        Transform(DEF='T',
          #  EXPORT G (this is Blendo nomenclature, not VRML 97) 
          children=[
          Group(DEF='G')]),
        TimeSensor(DEF='TS',loop=True),
        OrientationInterpolator(DEF='OI',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,0)]),
        ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='OI'),
        ROUTE(fromField='value_changed',fromNode='OI',toField='set_rotation',toNode='T')])),
    #  ============= Example 5 ============= 
    #  Show "overriding of a method of the inherited interface." 
    #  X3D DTD currently restricts field types to VRML 97 types, other values can be entered but are flagged as invalid. IS="RENDERscript.plane" IS="RENDERscript.front" IS="RENDERscript.back" 
    ProtoDeclare(name='BSPLeaf',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='plane',type='Plane',value=0,0,1,0),
        field(accessType='initializeOnly',name='front',type='BSPLeaf',value=NULL),
        field(accessType='initializeOnly',name='back',type='BSPLeaf',value=NULL)]),
      ProtoBody=ProtoBody(
        #  Here is a curious example problem: an unattached function overriding an unspecified (but commonly occuring) implementation-specific browser function. 
        #  This solution wraps a Script node around the render () function to maintain VRML 97 semantics. 
        #  Preprocessing can automate this process of wrapping a Script node around inline functions. 
        #  Corrected example by moving Group G (renamed GG) from PROTO interface to PROTO body. 
        children=[
        Group(DEF='GG'),
        Script(DEF='RENDERscript')])),
    #  ============= Example 6 ============= 
    #  Show "inclusion of field scripts which execute whenever the field receives an event." 
    ProtoDeclare(name='AnimatedMaterial',
      ProtoInterface=ProtoInterface(
        #  FROM is Blendo nomenclature, expressed using IS references. IS="timeBase.startTime" IS="timeBase.stopTime" 
        field=[
        field(accessType='initializeOnly',name='startTime',type='SFTime',value=0),
        field(accessType='initializeOnly',name='stopTime',type='SFTime',value=0),
        field(accessType='initializeOnly',name='startColor',type='SFColor',value=(0,0,0)),
        field(accessType='initializeOnly',name='endColor',type='SFColor',value=(0,0,0)),
        #  During the December 3 1999 x3d-contributors meeting, Chris showed how 
        #  the VRML 97 specification allows an SF/MFNode field node to be initialized with node content. 
        #  This construct is now permitted by DTD, here is an example: 
        field(accessType='initializeOnly',name='initializedChildren',type='MFNode',
          children=[
          Group(bboxCenter=(1,2,3)),
          Transform(translation=(1,2,3))])]),
      ProtoBody=ProtoBody(
        #  Moved the following content nodes from PROTO interface to PROTO body in order to match valid VRML 97 content. 
        children=[
        Material(DEF='MM'),
        ProtoInstance(name='IntervalSensor',
          fieldValue=[
          fieldValue(name='timeBase',
            children=[
            ProtoInstance(DEF='timeBase',name='TimeBase')])]),
        ColorInterpolator(DEF='CI',key=[0,0.5,1]),
        Script(DEF='AnimatedMaterialInitialize'),
        ROUTE(fromField='value_changed',fromNode='CI',toField='set_diffuseColor',toNode='MM')]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for X3DRetreatProtoExercise.py")
