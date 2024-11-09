####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python ViewFrustumPrototype.py
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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ViewFrustumPrototype.x3d',name='title'),
    meta(content='Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 August 2008',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ViewFrustumExample.x3d',name='reference'),
    meta(content='ViewFrustumComputation.png',name='drawing'),
    meta(content='ViewFrustumOverheadView.png',name='Image'),
    meta(content='ViewFrustumObliqueView.png',name='Image'),
    meta(content='view culling frustum',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ViewFrustumPrototype.x3d'),
    ProtoDeclare(appinfo='Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes',name='ViewFrustum',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='required: insert Viewpoint DEF or USE node for view of interest',name='ViewpointNode',type='SFNode',
          #  NULL node, ProtoInstance must provide 
          ),
        field(accessType='initializeOnly',appinfo='required: insert NavigationInfo DEF or USE node of interest',name='NavigationInfoNode',type='SFNode',
          #  NULL node, ProtoInstance must provide 
          ),
        field(accessType='inputOutput',appinfo='whether or not frustum geometry is rendered',name='visible',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='RGB color of ViewFrustum outline, default value 0.9 0.9 0.9',name='lineColor',type='SFColor',value=(0.9,0.9,0.9)),
        field(accessType='inputOutput',appinfo='RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8',name='frustumColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='transparency of ViewFrustum hull geometry, default value 0.5',name='transparency',type='SFFloat',value=0.5),
        field(accessType='inputOutput',appinfo='assumed ratio height/width, default value 0.75',name='aspectRatio',type='SFFloat',value=0.75),
        field(accessType='initializeOnly',appinfo='debug support, default false',name='trace',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Switch(DEF='VisibilitySwitch',whichChoice=-1,
          children=[
          Transform(DEF='PositionTransform',rotation=(0,1,0,3.14159),
            children=[
            Transform(DEF='OrientationTransform',
              children=[
              Shape(
                geometry=IndexedLineSet(DEF='FrustumLines',coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1],
                  coord=Coordinate(DEF='FrustumCoordinate',point=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)])),
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='emissiveColor',protoField='lineColor')])))),
              Shape(
                geometry=Extrusion(DEF='FrustumExtrusion'),
                appearance=Appearance(DEF='FrustumAppearance',
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='frustumColor'),
                      connect(nodeField='transparency',protoField='transparency')])))),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(USE='FrustumAppearance'))])])]),
        Script(DEF='GeometryComputationScript',directOutput=True,url=["ViewFrustumPrototypeScript.js"],
          field=[
          field(accessType='inputOutput',appinfo='Whether or not frustum geometry is rendered',name='visible',type='SFBool'),
          field(accessType='outputOnly',appinfo='Adjust Switch selection to make geometry visible or not',name='visibilitySwitchSelection',type='SFInt32'),
          field(accessType='initializeOnly',name='ViewpointNode',type='SFNode',
            #  initialization node (if any) goes here 
            ),
          field(accessType='initializeOnly',name='NavigationInfoNode',type='SFNode',
            #  initialization node (if any) goes here 
            ),
          field(accessType='initializeOnly',name='FrustumCoordinate',type='SFNode',
            children=[
            Coordinate(USE='FrustumCoordinate')]),
          field(accessType='initializeOnly',name='FrustumExtrusion',type='SFNode',
            children=[
            Extrusion(USE='FrustumExtrusion')]),
          field(accessType='inputOnly',name='recompute',type='SFBool'),
          field(accessType='inputOutput',appinfo='assumed ratio height/width',name='aspectRatio',type='SFFloat'),
          field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='orientation_changed',type='SFRotation'),
          field(accessType='outputOnly',name='spine_changed',type='MFVec3f'),
          field(accessType='outputOnly',name='scale_changed',type='MFVec2f'),
          field(accessType='outputOnly',name='point_changed',type='MFVec3f'),
          field(accessType='initializeOnly',name='trace',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='visible',protoField='visible'),
            connect(nodeField='ViewpointNode',protoField='ViewpointNode'),
            connect(nodeField='NavigationInfoNode',protoField='NavigationInfoNode'),
            connect(nodeField='aspectRatio',protoField='aspectRatio'),
            connect(nodeField='trace',protoField='trace')]),

        sourceCode="""
ecmascript:

"""),
        ROUTE(fromField='visibilitySwitchSelection',fromNode='GeometryComputationScript',toField='whichChoice',toNode='VisibilitySwitch'),
        ROUTE(fromField='position_changed',fromNode='GeometryComputationScript',toField='translation',toNode='PositionTransform'),
        ROUTE(fromField='orientation_changed',fromNode='GeometryComputationScript',toField='rotation',toNode='OrientationTransform'),
        ROUTE(fromField='spine_changed',fromNode='GeometryComputationScript',toField='set_spine',toNode='FrustumExtrusion'),
        ROUTE(fromField='scale_changed',fromNode='GeometryComputationScript',toField='set_scale',toNode='FrustumExtrusion'),
        ROUTE(fromField='point_changed',fromNode='GeometryComputationScript',toField='point',toNode='FrustumCoordinate')])),
    #  Example use is in separate scene 
    Anchor(description='ViewFrustum Example',url=["ViewFrustumExample.x3d"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for ViewFrustumPrototype.py:')
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

print("python ViewFrustumPrototype.py load and self-test diagnostics complete.")
