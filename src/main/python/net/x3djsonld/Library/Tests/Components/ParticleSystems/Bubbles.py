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
    meta(name='created',content='Sun, 15 May 2016 00:16:04 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V2.0.0, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Bubbles.x3d'),
    meta(name='modified',content='Mon, 26 Sep 2016 02:51:17 GMT')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Bubbles',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[1.62303498729208,40.0774585689728,42.6164648005402]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0.948208773060804,-0.218726178841849,-0.230345352416253,5.85764824335848]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[0,0,0])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de'),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de',
            value=[
            DirectionalLight(DEF='_1',direction=(-0.372556,-3.8217e-05,-0.92801),shadows=True,shadowIntensity=0.518717)])])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    NavigationInfo(headlight=False),
    Viewpoint(description='Viewpoint',position=(0,20,55)),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    ParticleSystem(geometryType='GEOMETRY',maxParticles=500,particleLifetime=8,lifetimeVariation=0.8,particleSize=(1,1),
      emitter=PointEmitter(direction=(0,0,0),speed=0.5,variation=0.5,mass=0.1,surfaceArea=0.1),
      physics=WindPhysicsModel(direction=(0,1,0),speed=0.6,gustiness=1.7,turbulence=0.3),
      WindPhysicsModel(speed=1,gustiness=1.5)
      appearance=Appearance(
        material=Material(ambientIntensity=0.25,diffuseColor=(1,0.520125,0.73699),specularColor=(0.951515,0.951515,0.951515),shininess=0.557576)),
      geometry=Sphere(),),
    Transform(DEF='Rectangle2D',translation=(0,19.2591,-14.5791),scale=(43.4935,20.2591,1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Rectangle2D(),)]),
    DirectionalLight(USE='_1'),
    Script(DEF='PhongShadingScript')])
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
