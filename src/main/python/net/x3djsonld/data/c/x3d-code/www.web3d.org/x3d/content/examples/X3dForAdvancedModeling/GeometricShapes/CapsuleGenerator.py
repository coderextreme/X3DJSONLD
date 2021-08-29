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
    meta(content='CapsuleGenerator.x3d',name='title'),
    meta(content='Capsule has top and bottom hemispheres with connected sides, with adjustable parameters in the contained Script fields. A Script node computes all coordIndex and Coordinate point values. X3D source for the produced capsule also appears on the player console.',name='description'),
    meta(content='13 October 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='CapsuleGenerator.log.txt',name='reference'),
    meta(content='CapsuleComparison.x3d',name='reference'),
    meta(content='InstantReality and BSContact work',name='info'),
    meta(content='H3DViewer: missing Script appinfo and new SFInt32 when running CapsuleGenerator.js; got bugtracker?',name='TODO'),
    meta(content='https://en.wikipedia.org/wiki/Capsule_(geometry)',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/capsule',name='reference'),
    meta(content='This tessellation is not geodesic because the polygons are computed using rectangular quadrilaterals and vertical levels rather than triangulated shortest paths.',name='info'),
    meta(content='http://en.wiktionary.org/wiki/geodesic',name='reference'),
    meta(content='http://en.wiktionary.org/wiki/geodesic_dome',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Geodesic',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Geodesic_grid',name='reference'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/tools/X3dEdit3.3/X3D/src/org/web3d/x3d/NsidedPolygon.java',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/HalfDome/HemisphereExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/HalfDome/HemispherePrototype.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CapsuleGenerator.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CapsuleGenerator.x3d'),
    Background(skyColor=[(0.5,1,0.9)]),
    Viewpoint(description='Capsule Generator',position=(0,0,4)),
    Shape(DEF='Capsule',
      #  Polygonal Capsule consisting of 2 Hemispheres with connected sides 
      geometry=IndexedFaceSet(DEF='COMPUTED_IFS',creaseAngle=0.785398,
        coord=Coordinate(DEF='COMPUTED_COORDINATE')),
      appearance=Appearance(
        material=Material(emissiveColor=(0.2,0.5,0)))),
    Script(DEF='CapsuleGeneratorScript',url=["CapsuleGenerator.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CapsuleGenerator.js"],
      field=[
      field(accessType='initializeOnly',appinfo='total height, includes top and bottom hemispheres',name='height',type='SFFloat',value=2.0),
      field(accessType='initializeOnly',appinfo='for cylinder and hemispherical end caps',name='radius',type='SFFloat',value=0.5),
      field(accessType='initializeOnly',appinfo='horizontal resolution for cylinder and hemispherical end caps',name='numberOfPoints',type='SFInt32',value=36),
      field(accessType='initializeOnly',appinfo='vertical resolution for cylinder and hemispherical end caps',name='numberOfLevels',type='SFInt32',value=10),
      field(accessType='initializeOnly',appinfo='radial scale factor',name='horizontalScale',type='SFFloat',value=1.0),
      field(accessType='initializeOnly',appinfo='vertical scale factor',name='verticalScale',type='SFFloat',value=1.0),
      field(accessType='initializeOnly',appinfo='whether to draw top hemisphere',name='top',type='SFBool',value=True),
      field(accessType='initializeOnly',appinfo='whether to draw side cylinder',name='side',type='SFBool',value=True),
      field(accessType='initializeOnly',appinfo='whether to draw bottom hemisphere',name='bottom',type='SFBool',value=True),
      field(accessType='outputOnly',appinfo='points for Coordinate node',name='pointsComputed',type='MFVec3f'),
      field(accessType='outputOnly',appinfo='index values for IFS',name='indicesComputed',type='MFInt32'),
      field(accessType='initializeOnly',appinfo='whether to trace output values on X3D browser console',name='traceEnabled',type='SFBool',value=False),
      field(accessType='initializeOnly',appinfo='determines console output node type: polygons=IndexedFaceSet, lines=IndexedLineSet, points=PointSet',name='geometryType',type='SFString',value='polygons')]),
    ROUTE(fromField='indicesComputed',fromNode='CapsuleGeneratorScript',toField='set_coordIndex',toNode='COMPUTED_IFS'),
    ROUTE(fromField='pointsComputed',fromNode='CapsuleGeneratorScript',toField='set_point',toNode='COMPUTED_COORDINATE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CapsuleGenerator.py")
