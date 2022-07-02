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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='3.3',
  head=head(
    children=[
    meta(name='comment',content='World of Titania'),
    meta(name='created',content='Sun, 01 May 2016 05:50:28 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V1.4.2, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/VolumeEmitter-U.x3d'),
    meta(name='modified',content='Sun, 01 May 2016 05:50:41 GMT')]),
  Scene=Scene(
    children=[
    WorldInfo(title='U-Volume',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[2.42579538175142,4.90503216646444,5.83576697716995]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[-0.783095003703687,0.530489108480527,0.324566666430577,0.798730604169587]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[0,0,0])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de')])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(0,0,8)),
    ParticleSystem(geometryType='POINT',maxParticles=20000,particleLifetime=60,lifetimeVariation=0.01,particleSize=(0.1,0.1),colorKey=[0,0.1,0.4,1],
      emitter=VolumeEmitter(direction=(0,0,0),mass=0.01,surfaceArea=0.01,
        coord=Coordinate(point=[(-2,1,1),(-2,-1,1),(2,-1,1),(2,1,1),(1,1,1),(1,0,1),(-1,0,1),(-1,1,1),(-2,1,-1),(-2,-1,-1),(2,-1,-1),(2,1,-1),(1,1,-1),(1,0,-1),(-1,0,-1),(-1,1,-1)])),
      color=ColorRGBA(color=[(1,0.38,0,1),(1,0.58,0.06,1),(1,0.37,0,1),(1,0.05,0,1)]),
      appearance=Appearance(
        lineProperties=LineProperties(linewidthScaleFactor=1))),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics:')
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

print("python load and self-test diagnostics complete.")
