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

newModel=X3D(profile='Full',version='3.3',
  head=head(
    children=[
    meta(name='comment',content='World of Titania'),
    meta(name='created',content='Sat, 23 Apr 2016 03:14:27 GMT'),
    meta(name='creator',content='Holger Seelig'),
    meta(name='generator',content='Titania V1.4.1, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Titania/Library/Tests/ParticleSystems/PolylineEmitter.wrl'),
    meta(name='modified',content='Sat, 23 Apr 2016 03:14:27 GMT')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PolylineEmitter',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[4,2,8]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0,0,1,0]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[0,0,0])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de'),
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de')])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(4,2,8)),
    Transform(
      children=[
      ParticleSystem(geometryType='LINE',maxParticles=10000,particleLifetime=10,lifetimeVariation=0.01,particleSize=(0.1,0.1),colorKey=[0,0.1,0.4,1],
        emitter=PolylineEmitter(speed=0.01,mass=0.01,surfaceArea=0.01,
          coord=Coordinate(point=[(0,0,0),(1,1,0),(2,0,0),(4,2,0),(8,0,0)])),
        physics=WindPhysicsModel(direction=(0,1,0),speed=0.12,gustiness=8,turbulence=0.9),
        WindPhysicsModel(speed=0.3,gustiness=1)
        color=ColorRGBA(color=[(1,0.38,0,0),(1,0.58,0.06,0.1),(1,0.37,0,0.1),(1,0.05,0,0)]),
        appearance=Appearance(
          lineProperties=LineProperties(linewidthScaleFactor=8)))]),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))])])
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

print("python x3d.py load and self-test complete")
