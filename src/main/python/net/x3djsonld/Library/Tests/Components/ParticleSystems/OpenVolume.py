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
    meta(name='created',content='Thu, 18 Aug 2016 19:10:15 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V1.4.9, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/cobweb.js/tests/Components/ParticleSystems/OpenVolume.x3d'),
    meta(name='modified',content='Thu, 18 Aug 2016 19:23:24 GMT')]),
  Scene=Scene(
    children=[
    WorldInfo(
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de',
            value=[
            Transform(DEF='Box',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(transparency=0.703209)),
                geometry=IndexedFaceSet(texCoordIndex=[0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1],coordIndex=[0,1,2,3,-1,3,2,6,7,-1,4,5,1,0,-1,4,0,3,7,-1,1,5,6,2,-1],
                  texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]),
                  coord=Coordinate(DEF='_1',point=[(-1,-1,1),(1,-1,1),(1,1,1),(-1,1,1),(-1,-1,-1),(1,-1,-1),(1,1,-1),(-1,1,-1)])))])]),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de')]),
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[3.27443170547485,-2.87154245376587,-2.91164755821228]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0.3740505936904,-0.817335415554851,0.438233923652242,3.52979903438381]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[-1.33226762955019e-15,2.48689957516035e-14,-3.01980662698043e-14])])])),
    NavigationInfo(avatarSize=[0.05,1.6,0.75]),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(3.27443,-2.87154,-2.91165),orientation=(0.3740505936904,-0.817335415554851,0.438233923652242,3.52979903438381),centerOfRotation=(-1.33227e-15,2.4869e-14,-3.01981e-14)),
    Viewpoint(description='Debug',position=(0,0.05,0.13)),
    Transform(
      children=[
      ParticleSystem(geometryType='POINT',maxParticles=80000,particleLifetime=40,lifetimeVariation=1,particleSize=(0.1,0.1),colorKey=[0,0.1,0.4,1],
        emitter=VolumeEmitter(direction=(0,0,0),mass=0.01,surfaceArea=0.01,
          coord=Coordinate(USE='_1')),
        color=ColorRGBA(color=[(1,0.38,0,0.5),(1,0.58,0.06,0.5),(1,0.37,0,0.5),(1,0.05,0,0.5)]),
        appearance=Appearance(
          lineProperties=LineProperties(linewidthScaleFactor=1)))]),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    Transform(DEF='IndexedLineSet1',translation=(0.001,0,0),
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[1],coordIndex=[2,3,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    Transform(DEF='IndexedLineSet2',translation=(0.004,0,0),
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[1],coordIndex=[2,3,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    Transform(DEF='IndexedLineSet3',translation=(0.013,0,0),
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[1],coordIndex=[2,3,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    Transform(USE='Box')])
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
