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
    meta(name='created',content='Sat, 30 Apr 2016 02:18:39 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V1.4.2, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/DolphinLineSurfaceEmitter.x3d'),
    meta(name='modified',content='Sat, 30 Apr 2016 05:12:47 GMT')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Dolphin',url=["Dolphin.x3d#Dolphin", "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin"],
      field=[
      field(accessType='inputOnly',type='SFFloat',name='set_fraction'),
      field(accessType='initializeOnly',type='SFBool',name='solid')]),
    WorldInfo(
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='AngleGrid',name='AngleGrid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled',name='enabled',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='Grid',name='Grid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled_1',name='enabled',reference='http://titania.create3000.de',value=[True])]),
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[179.724151611328,-295.825958251953,258.351654052734]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0.851609192029355,0.229794819966725,0.47112219727749,0.997756545817208]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[17.631872177124,-9.29712867736816,-18.6251792907715])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de'),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de',
            value=[
            Transform(DEF='Box',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='_1',transparency=0.884393)),
                geometry=ProtoInstance(name='Dolphin',DEF='_2'))])])])])),
    Background(DEF='White',skyColor=[(1,1,1)]),
    Viewpoint(description='Home',position=(179.724,-295.826,258.352),orientation=(0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209),centerOfRotation=(17.6319,-9.29713,-18.6252)),
    TimeSensor(DEF='_3',cycleInterval=10,loop=True),
    Transform(USE='Box'),
    ParticleSystem(maxParticles=2000,particleSize=(6,6),
      emitter=SurfaceEmitter(speed=2,mass=0.01,surfaceArea=0.01,
        surface=ProtoInstance(name='Dolphin',USE='_2')),
      appearance=Appearance(
        material=Material(DEF='Rococo17',ambientIntensity=0.187004,diffuseColor=(0.640987,0.460097,0.748016),specularColor=(0.251984,0.251984,0.251984),shininess=0.612121))),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    ROUTE(fromNode='_3',fromField='fraction_changed',toNode='_2',toField='set_fraction')])
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
