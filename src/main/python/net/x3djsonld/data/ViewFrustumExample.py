####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ViewFrustumExample.x3d',name='title'),
    meta(content='Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 August 2008',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ViewFrustumPrototype.x3d',name='reference'),
    meta(content='ViewFrustumComputation.png',name='drawing'),
    meta(content='ViewFrustumOverheadView.png',name='Image'),
    meta(content='ViewFrustumObliqueView.png',name='Image'),
    meta(content='ViewpointCalculator.png',name='Image'),
    meta(content='ViewpointCalculatorComposed.png',name='Image'),
    meta(content='view culling frustum',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ViewFrustumExample.x3d'),
    Viewpoint(description='ViewFrustum from above, looking down',orientation=(1,0,0,-1.57),position=(0,40,0)),
    Viewpoint(description='ViewFrustum from point of view'),
    Viewpoint(description='ViewFrustum behind point of view',position=(0,0,15)),
    Viewpoint(description='ViewFrustum oblique side view',orientation=(0.8005,0.5926,0.0898,-0.3743),position=(-5,5,20)),
    NavigationInfo(type='"EXAMINE" "FLY" "ANY"'),
    ExternProtoDeclare(appinfo='Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes',name='ViewFrustum',url=["ViewFrustumPrototype.x3d#ViewFrustum"],
      field=[
      field(accessType='initializeOnly',appinfo='required: insert Viewpoint DEF or USE node for view of interest',name='ViewpointNode',type='SFNode'),
      field(accessType='initializeOnly',appinfo='required: insert NavigationInfo DEF or USE node of interest',name='NavigationInfoNode',type='SFNode'),
      field(accessType='inputOutput',appinfo='whether or not frustum geometry is rendered',name='visible',type='SFBool'),
      field(accessType='inputOutput',appinfo='RGB color of ViewFrustum outline, default value 0.9 0.9 0.9',name='lineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8',name='frustumColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of ViewFrustum hull geometry, default value 0.5',name='transparency',type='SFFloat'),
      field(accessType='inputOutput',appinfo='assumed ratio height/width, default value 0.75',name='aspectRatio',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='debug support, default false',name='trace',type='SFBool')]),
    #  Example use 
    ProtoInstance(name='ViewFrustum',
      fieldValue=[
      fieldValue(name='ViewpointNode',
        #  prefer empty description to prevent entry in player's ViewpointList 
        children=[
        Viewpoint(description='ViewFrustum ViewpointNode')]),
      fieldValue(name='NavigationInfoNode',
        children=[
        NavigationInfo(visibilityLimit=15)]),
      fieldValue(name='visible',value=True),
      fieldValue(name='lineColor',value=(0.9,0.9,0.9)),
      fieldValue(name='frustumColor',value=(0.8,0.8,0.8)),
      fieldValue(name='transparency',value=0.75),
      fieldValue(name='trace',value=True)]),
    #  Visualization assists 
    Inline(DEF='GridXZ',url=["GridXZ_20x20Fixed.x3d"]),
    Transform(scale=(5,5,5),
      children=[
      Inline(DEF='CoordinateAxes',url=["CoordinateAxes.x3d"])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
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

print("python x3d.py load and self-test complete for ViewFrustumExample.py")
