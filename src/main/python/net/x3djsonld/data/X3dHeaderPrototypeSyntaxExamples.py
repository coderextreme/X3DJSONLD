####################################################################################################
#
# Now available: developmental python x3d.py package on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    component(level=2,name='NURBS'),
    component(level=2,name='Core'),
    component(level=1,name='Navigation'),
    component(level=1,name='Text'),
    meta(content='X3dHeaderPrototypeSyntaxExamples.x3d',name='title'),
    meta(content='X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.',name='description'),
    meta(content='14 October 2002',name='created'),
    meta(content='27 May 2017',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='ViewPositionOrientation',url=["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',name='outputViewpointString',type='MFString')]),
    ProtoDeclare(name='NewWorldInfoNode',
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(DEF='ExamplePrototypeBody')])),
    ProtoInstance(name='NewWorldInfoNode'),
    ProtoDeclare(name='EmissiveMaterial',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='onlyColor',type='SFColor',value=(1,0,0))]),
      ProtoBody=ProtoBody(
        #  Override default diffuseColor value 0.8 0.8 0.8 
        children=[
        Material(diffuseColor=(0,0,0),
          #  Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare. 
          IS=IS(
            connect=[
            connect(nodeField='emissiveColor',protoField='onlyColor')]))])),
    ProtoDeclare(name='ShiftGroupUp2m',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='children',type='MFNode',
          children=[
          Group(DEF='DefaultNodeValue',bboxSize=(2,2,2),
            #  Authors need to override this node when creating the ProtoInstance fieldValue name="children" 
            )])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(translation=(0,2,0),
          children=[
          Group(
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='children')]))])])),
    ProtoInstance(name='ShiftGroupUp2m'),
    #  ==================== 
    Viewpoint(DEF='ExampleSingleElement',description='Hello syntax'),
    Group(DEF='ExampleChildElement',
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.4,0.2))))]),
    Transform(DEF='TransformExampleUSE',rotation=(0,1,0,0.78),translation=(0,2.5,0),
      children=[
      Group(USE='ExampleChildElement')]),
    Collision(
      proxy=Shape(
        #  note that Collision proxy Shape is not rendered 
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(),)),
      children=[
      Group(USE='ExampleChildElement')]),
    Transform(translation=(0,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=ProtoInstance(name='EmissiveMaterial',
            fieldValue=[
            fieldValue(name='onlyColor',value=(0.2,0.6,0.6))])),
        geometry=Text(string=["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)))]),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=True)]),
    TimeSensor(DEF='Clock',cycleInterval=4,loop=True),
    OrientationInterpolator(DEF='Spinner',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,3.14159),(0,1,0,6.28318)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Spinner'),
    ROUTE(fromField='value_changed',fromNode='Spinner',toField='rotation',toNode='TransformExampleUSE'),
    Inline(DEF='someInline',url=["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"]),
    IMPORT(AS='someInlineRoot',importedDEF='someName',inlineDEF='someInline'),
    PositionInterpolator(DEF='StayInPlace',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='StayInPlace'),
    ROUTE(fromField='value_changed',fromNode='StayInPlace',toField='set_translation',toNode='someInlineRoot')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for X3dHeaderPrototypeSyntaxExamples.py:')
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

print("python X3dHeaderPrototypeSyntaxExamples.py load and self-test diagnostics complete.")
