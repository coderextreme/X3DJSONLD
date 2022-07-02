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
    meta(name='created',content='Sat, 30 Apr 2016 01:16:37 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V1.4.2, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/SurfaceEmitter.x3d'),
    meta(name='modified',content='Sat, 30 Apr 2016 04:37:18 GMT')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SurfaceEmitter',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[4.76851185683365,3.20037486840233,-1.41588301559672]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[-0.199294275901945,0.976263035154586,0.0848072979375946,1.82535953386045]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[1.07153058052063,2.01354050636292,-0.443973183631897])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de'),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de',
            appearance=[
            Appearance(DEF='_1')])]),
        MetadataSet(DEF='AngleGrid',name='AngleGrid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled',name='enabled',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='Grid',name='Grid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled_1',name='enabled',reference='http://titania.create3000.de',value=[True])])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(0,0,8)),
    Transform(
      children=[
      ParticleSystem(geometryType='SPRITE',maxParticles=10000,particleLifetime=10,lifetimeVariation=0.01,particleSize=(0.1,0.1),colorKey=[0,0.1,0.4,1],
        emitter=SurfaceEmitter(speed=0.05,mass=0.01,surfaceArea=0.01,
          geometry=IndexedFaceSet(DEF='_2',ccw=False,coordIndex=[0,1,2,-1,3,4,5,6,-1,7,8,9,10,11,-1],
            coord=Coordinate(point=[(0,0,0),(0,-1,0),(1,0,0),(0,-1,0),(0,-2,0),(1,-2,0),(1,-1,0),(0,0,0),(2,1,0),(2,2,0),(1,3,0),(0,2,0)]))),
        color=ColorRGBA(color=[(1,0.38,0,1),(1,0.58,0.06,1),(1,0.37,0,1),(1,0.05,0,1)]),
        appearance=Appearance(USE='_1'))]),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    Transform(DEF='Background',
      children=[
      Background(skyAngle=[0.8,1.3,1.4,1.5708],skyColor=[(0.21,0.31,0.59),(0.33,0.45,0.7),(0.57,0.66,0.85),(0.6,0.73,0.89),(0.7,0.83,0.98)],groundAngle=[0.6,1.2,1.3,1.5708],groundColor=[(0.21,0.31,0.59),(0.33,0.45,0.7),(0.57,0.66,0.85),(0.6,0.73,0.89),(0.7,0.83,0.98)])]),
    Transform(DEF='Box',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedFaceSet(USE='_2'))])])
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
