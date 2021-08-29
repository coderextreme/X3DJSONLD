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
    meta(content='GeoSpatialExternProtoDeclarations.x3d',name='title'),
    meta(content='GeoVrml Recommendation, Example 1: GeoElevation, using ExternProtoDeclare statements instead of GeoSpatial DTD.',name='description'),
    meta(content='http://www.ai.sri.com/geovrml/1.0/doc',name='reference'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='22 November 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Needs further verification work using GeoVrml Recommendation.',name='warning'),
    meta(content='Unresolved: are set_ and _changed methods needed?',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeoSpatialExternProtoDeclarations.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GeoSpatialExternProtoDeclarations.x3d'),
    ExternProtoDeclare(name='GeoCoordinate',url=["urn:web3d:geovrml:1.0/protos/GeoCoordinate.wrl#GeoCoordinate","/Program%20Files/GeoVRML/1.0/protos/GeoCoordinate.wrl#GeoCoordinate","http://www.ai.sri.com/geovrml/1.0/protos/GeoCoordinate.wrl#GeoCoordinate"],
      field=[
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='point',type='MFString')]),
    ExternProtoDeclare(name='GeoElevationGrid',url=["urn:web3d:geovrml:1.0/protos/GeoElevationGrid.wrl#GeoElevationGrid","/Program%20Files/GeoVRML/1.0/protos/GeoElevationGrid.wrl#GeoElevationGrid","http://www.ai.sri.com/geovrml/1.0/protos/GeoElevationGrid.wrl#GeoElevationGrid"],
      field=[
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='geoGridOrigin',type='SFString'),
      field(accessType='initializeOnly',name='xDimension',type='SFInt32'),
      field(accessType='initializeOnly',name='xSpacing',type='SFString'),
      field(accessType='initializeOnly',name='zDimension',type='SFInt32'),
      field(accessType='initializeOnly',name='zSpacing',type='SFString'),
      field(accessType='initializeOnly',name='yScale',type='SFFloat'),
      field(accessType='initializeOnly',name='height',type='MFFloat'),
      field(accessType='inputOutput',name='color',type='SFNode'),
      field(accessType='inputOutput',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',name='normal',type='SFNode'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='creaseAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='solid',type='SFBool')]),
    #  GeoInline replaced by Inline in X3D 
    ExternProtoDeclare(name='GeoInline',url=["urn:web3d:geovrml:1.0/protos/GeoInline.wrl#GeoInline","/Program%20Files/GeoVRML/1.0/protos/GeoInline.wrl#GeoInline","http://www.ai.sri.com/geovrml/1.0/protos/GeoInline.wrl#GeoInline"],
      field=[
      field(accessType='initializeOnly',name='identifier',type='MFString'),
      field(accessType='outputOnly',name='url_changed',type='MFString'),
      field(accessType='initializeOnly',name='load',type='SFBool'),
      field(accessType='outputOnly',name='load_changed',type='SFBool'),
      field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',name='bboxSize',type='SFVec3f')]),
    ExternProtoDeclare(name='GeoLocation',url=["urn:web3d:geovrml:1.0/protos/GeoLocation.wrl#GeoLocation","/Program%20Files/GeoVRML/1.0/protos/GeoLocation.wrl#GeoLocation","http://www.ai.sri.com/geovrml/1.0/protos/GeoLocation.wrl#GeoLocation"],
      field=[
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='geoCoords',type='SFString')]),
    ExternProtoDeclare(name='GeoLOD',url=["urn:web3d:geovrml:1.0/protos/GeoLOD.wrl#GeoLOD","/Program%20Files/GeoVRML/1.0/protos/GeoLOD.wrl#GeoLOD","http://www.ai.sri.com/geovrml/1.0/protos/GeoLOD.wrl#GeoLOD"],
      field=[
      field(accessType='initializeOnly',name='rootUrl',type='MFString'),
      field(accessType='initializeOnly',name='rootNode',type='MFNode'),
      field(accessType='initializeOnly',name='child1Url',type='MFString'),
      field(accessType='initializeOnly',name='child2Url',type='MFString'),
      field(accessType='initializeOnly',name='child3Url',type='MFString'),
      field(accessType='initializeOnly',name='child4Url',type='MFString'),
      field(accessType='initializeOnly',name='range',type='SFFloat'),
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='center',type='SFString'),
      field(accessType='outputOnly',name='children',type='MFNode')]),
    ExternProtoDeclare(name='GeoMetadata',url=["urn:web3d:geovrml:1.0/protos/GeoMetadata.wrl#GeoMetadata","/Program%20Files/GeoVRML/1.0/protos/GeoMetadata.wrl#GeoMetadata","http://www.ai.sri.com/geovrml/1.0/protos/GeoMetadata.wrl#GeoMetadata"],
      field=[
      field(accessType='inputOutput',name='identifier',type='MFString'),
      field(accessType='inputOutput',name='summary',type='MFString'),
      field(accessType='inputOutput',name='data',type='MFNode')]),
    ExternProtoDeclare(name='GeoOrigin',url=["urn:web3d:geovrml:1.0/protos/GeoOrigin.wrl#GeoOrigin","/Program%20Files/GeoVRML/1.0/protos/GeoOrigin.wrl#GeoOrigin","http://www.ai.sri.com/geovrml/1.0/protos/GeoOrigin.wrl#GeoOrigin"],
      field=[
      field(accessType='inputOutput',name='geoSystem',type='MFString'),
      field(accessType='inputOutput',name='geoCoords',type='SFString'),
      field(accessType='initializeOnly',name='rotateYUp',type='SFBool')]),
    ExternProtoDeclare(name='GeoPositionInterpolator',url=["urn:web3d:geovrml:1.0/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator","/Program%20Files/GeoVRML/1.0/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator","http://www.ai.sri.com/geovrml/1.0/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator"],
      field=[
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='key',type='MFFloat'),
      field(accessType='initializeOnly',name='keyValue',type='MFString'),
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
      field(accessType='outputOnly',name='geovalue_changed',type='SFString')]),
    #  need GeoTouchSensor 
    ExternProtoDeclare(name='GeoViewpoint',url=["urn:web3d:geovrml:1.0/protos/GeoViewpoint.wrl#GeoViewpoint","/Program%20Files/GeoVRML/1.0/protos/GeoViewpoint.wrl#GeoViewpoint","http://www.ai.sri.com/geovrml/1.0/protos/GeoViewpoint.wrl#GeoViewpoint"],
      field=[
      field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
      field(accessType='initializeOnly',name='geoSystem',type='MFString'),
      field(accessType='initializeOnly',name='position',type='SFString'),
      field(accessType='initializeOnly',name='orientation',type='SFRotation'),
      field(accessType='inputOutput',name='fieldOfView',type='SFFloat'),
      field(accessType='inputOutput',name='jump',type='SFBool'),
      field(accessType='initializeOnly',name='description',type='SFString'),
      field(accessType='initializeOnly',name='speed',type='SFFloat'),
      field(accessType='inputOnly',name='set_bind',type='SFBool'),
      field(accessType='outputOnly',name='bindTime',type='SFTime'),
      field(accessType='outputOnly',name='isBound',type='SFBool')]),
    Group(
      children=[
      Background(groundColor=[(0,0,0)],skyColor=[(0.1,0.1,0.8)]),
      ProtoInstance(name='GeoViewpoint',
        fieldValue=[
        fieldValue(name='geoSystem',value=["GD","WE"]),
        fieldValue(name='position',value='"35.0 70.0 10000000"'),
        fieldValue(name='orientation',value=(1,0,0,-1.57)),
        fieldValue(name='description',value='"Initial GeoViewpoint"')]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,1.0,0.3))),
        geometry=ProtoInstance(name='GeoElevationGrid',
          fieldValue=[
          fieldValue(name='geoSystem',value=["GD","WE"]),
          fieldValue(name='geoGridOrigin',value='-90 -180 0'),
          fieldValue(name='xDimension',value=21),
          fieldValue(name='zDimension',value=11),
          fieldValue(name='xSpacing',value='18'),
          fieldValue(name='zSpacing',value='18'),
          fieldValue(name='yScale',value=200),
          fieldValue(name='height',value=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1220,3086,3135,2976,2529,2135,3449,2899,3190,2375,1847,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,576,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0])]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeoSpatialExternProtoDeclarations.py")
