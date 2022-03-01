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
    meta(name='created',content='Wed, 20 Apr 2016 11:36:01 GMT'),
    meta(name='creator',content='Holger Seelig'),
    meta(name='generator',content='Titania V2.0.0, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Fire.x3d'),
    meta(name='modified',content='Mon, 26 Sep 2016 09:18:09 GMT')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Grid',url=["GridTool.x3dv#Grid", "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"],
      field=[
      field(accessType='inputOutput',type='SFVec3f',name='translation'),
      field(accessType='inputOutput',type='SFRotation',name='rotation'),
      field(accessType='inputOutput',type='SFVec3f',name='scale'),
      field(accessType='inputOutput',type='MFInt32',name='dimension'),
      field(accessType='inputOutput',type='MFInt32',name='majorLineEvery'),
      field(accessType='inputOutput',type='MFInt32',name='majorLineOffset'),
      field(accessType='inputOutput',type='SFColor',name='color'),
      field(accessType='inputOutput',type='SFFloat',name='transparency'),
      field(accessType='inputOutput',type='SFColor',name='lineColor'),
      field(accessType='inputOutput',type='SFFloat',name='lineTransparency'),
      field(accessType='inputOutput',type='SFColor',name='majorLineColor'),
      field(accessType='inputOutput',type='SFFloat',name='majorLineTransparency'),
      field(accessType='initializeOnly',type='SFBool',name='solid')]),
    WorldInfo(
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='AngleGrid',name='AngleGrid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled',name='enabled',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='Grid',name='Grid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled_1',name='enabled',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[1.31269461177796,0.873141120607314,0.42007766929488]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0.353413775780365,-0.897474128965571,-0.26389181670934,4.9156754975484]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[-1.7763600157738e-15,-7.10542989869984e-15,3.55271007891048e-15])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de'),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de',
            value=[
            Transform(DEF='Box',translation=(0,-1.02384,0),scale=(2,1,2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Box(),)])])])])),
    ParticleSystem(DEF='Fire2',geometryType='SPRITE',particleLifetime=2,lifetimeVariation=0.5,particleSize=(1,1),colorKey=[0],texCoordKey=[0,0.015625,0.03125,0.046875,0.0625,0.078125,0.09375,0.109375,0.125,0.140625,0.15625,0.171875,0.1875,0.203125,0.21875,0.234375,0.25,0.265625,0.28125,0.296875,0.3125,0.328125,0.34375,0.359375,0.375,0.390625,0.40625,0.421875,0.4375,0.453125,0.46875,0.484375,0.5,0.515625,0.53125,0.546875,0.5625,0.578125,0.59375,0.609375,0.625,0.640625,0.65625,0.671875,0.6875,0.703125,0.71875,0.734375,0.75,0.765625,0.78125,0.796875,0.8125,0.828125,0.84375,0.859375,0.875,0.890625,0.90625,0.921875,0.9375,0.953125,0.96875,0.984375,1],
      emitter=PointEmitter(direction=(0,0,0),speed=0.2,variation=0,mass=0.1,surfaceArea=0.1),
      physics=WindPhysicsModel(direction=(0,1,0),speed=0.5,gustiness=1.9),
      WindPhysicsModel(direction=(1,-1,0),speed=0.15,gustiness=7)
      color=ColorRGBA(color=[(1,1,1,0.1)]),
      texCoord=TextureCoordinate(point=[(0,0),(0.125,0),(0.125,0.125),(0,0.125),(0.125,0),(0.25,0),(0.25,0.125),(0.125,0.125),(0.25,0),(0.375,0),(0.375,0.125),(0.25,0.125),(0.375,0),(0.5,0),(0.5,0.125),(0.375,0.125),(0.5,0),(0.625,0),(0.625,0.125),(0.5,0.125),(0.625,0),(0.75,0),(0.75,0.125),(0.625,0.125),(0.75,0),(0.875,0),(0.875,0.125),(0.75,0.125),(0.875,0),(1,0),(1,0.125),(0.875,0.125),(0,0.125),(0.125,0.125),(0.125,0.25),(0,0.25),(0.125,0.125),(0.25,0.125),(0.25,0.25),(0.125,0.25),(0.25,0.125),(0.375,0.125),(0.375,0.25),(0.25,0.25),(0.375,0.125),(0.5,0.125),(0.5,0.25),(0.375,0.25),(0.5,0.125),(0.625,0.125),(0.625,0.25),(0.5,0.25),(0.625,0.125),(0.75,0.125),(0.75,0.25),(0.625,0.25),(0.75,0.125),(0.875,0.125),(0.875,0.25),(0.75,0.25),(0.875,0.125),(1,0.125),(1,0.25),(0.875,0.25),(0,0.25),(0.125,0.25),(0.125,0.375),(0,0.375),(0.125,0.25),(0.25,0.25),(0.25,0.375),(0.125,0.375),(0.25,0.25),(0.375,0.25),(0.375,0.375),(0.25,0.375),(0.375,0.25),(0.5,0.25),(0.5,0.375),(0.375,0.375),(0.5,0.25),(0.625,0.25),(0.625,0.375),(0.5,0.375),(0.625,0.25),(0.75,0.25),(0.75,0.375),(0.625,0.375),(0.75,0.25),(0.875,0.25),(0.875,0.375),(0.75,0.375),(0.875,0.25),(1,0.25),(1,0.375),(0.875,0.375),(0,0.375),(0.125,0.375),(0.125,0.5),(0,0.5),(0.125,0.375),(0.25,0.375),(0.25,0.5),(0.125,0.5),(0.25,0.375),(0.375,0.375),(0.375,0.5),(0.25,0.5),(0.375,0.375),(0.5,0.375),(0.5,0.5),(0.375,0.5),(0.5,0.375),(0.625,0.375),(0.625,0.5),(0.5,0.5),(0.625,0.375),(0.75,0.375),(0.75,0.5),(0.625,0.5),(0.75,0.375),(0.875,0.375),(0.875,0.5),(0.75,0.5),(0.875,0.375),(1,0.375),(1,0.5),(0.875,0.5),(0,0.5),(0.125,0.5),(0.125,0.625),(0,0.625),(0.125,0.5),(0.25,0.5),(0.25,0.625),(0.125,0.625),(0.25,0.5),(0.375,0.5),(0.375,0.625),(0.25,0.625),(0.375,0.5),(0.5,0.5),(0.5,0.625),(0.375,0.625),(0.5,0.5),(0.625,0.5),(0.625,0.625),(0.5,0.625),(0.625,0.5),(0.75,0.5),(0.75,0.625),(0.625,0.625),(0.75,0.5),(0.875,0.5),(0.875,0.625),(0.75,0.625),(0.875,0.5),(1,0.5),(1,0.625),(0.875,0.625),(0,0.625),(0.125,0.625),(0.125,0.75),(0,0.75),(0.125,0.625),(0.25,0.625),(0.25,0.75),(0.125,0.75),(0.25,0.625),(0.375,0.625),(0.375,0.75),(0.25,0.75),(0.375,0.625),(0.5,0.625),(0.5,0.75),(0.375,0.75),(0.5,0.625),(0.625,0.625),(0.625,0.75),(0.5,0.75),(0.625,0.625),(0.75,0.625),(0.75,0.75),(0.625,0.75),(0.75,0.625),(0.875,0.625),(0.875,0.75),(0.75,0.75),(0.875,0.625),(1,0.625),(1,0.75),(0.875,0.75),(0,0.75),(0.125,0.75),(0.125,0.875),(0,0.875),(0.125,0.75),(0.25,0.75),(0.25,0.875),(0.125,0.875),(0.25,0.75),(0.375,0.75),(0.375,0.875),(0.25,0.875),(0.375,0.75),(0.5,0.75),(0.5,0.875),(0.375,0.875),(0.5,0.75),(0.625,0.75),(0.625,0.875),(0.5,0.875),(0.625,0.75),(0.75,0.75),(0.75,0.875),(0.625,0.875),(0.75,0.75),(0.875,0.75),(0.875,0.875),(0.75,0.875),(0.875,0.75),(1,0.75),(1,0.875),(0.875,0.875),(0,0.875),(0.125,0.875),(0.125,1),(0,1),(0.125,0.875),(0.25,0.875),(0.25,1),(0.125,1),(0.25,0.875),(0.375,0.875),(0.375,1),(0.25,1),(0.375,0.875),(0.5,0.875),(0.5,1),(0.375,1),(0.5,0.875),(0.625,0.875),(0.625,1),(0.5,1),(0.625,0.875),(0.75,0.875),(0.75,1),(0.625,1),(0.75,0.875),(0.875,0.875),(0.875,1),(0.75,1),(0.875,0.875),(1,0.875),(1,1),(0.875,1),(0.875,0.875),(1,0.875),(1,1),(0.875,1)]),
      appearance=Appearance(
        texture=ImageTexture(url=["http://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png", "https://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png", "http://rawgit.com/create3000/Library/master/Textures/Effects/fire2.png", "https://rawgit.com/create3000/Library/master/Textures/Effects/fire2.png"]))),
    Viewpoint(position=(1.89619,2.08715,4.46876),orientation=(-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854),centerOfRotation=(-1.77636e-15,-7.10543e-15,3.55271e-15)),
    ProtoInstance(name='Grid'),
    Transform(USE='Box'),
    DirectionalLight(DEF='_1',direction=(-0.531638,-0.672816,-0.51447),shadowIntensity=0.605),
    NavigationInfo(headlight=False),
    Script(DEF='PhongShadingScript')])
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
