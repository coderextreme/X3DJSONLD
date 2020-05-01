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
    component(name='EnvironmentalEffects',level=1),
    component(name='EnvironmentalEffects',level=3),
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    meta(name='title',content='bubbles.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/bubbles.x3d'),
    meta(name='description',content='not sure what this is')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=["EXAMINE"]),
    Viewpoint(DEF='Tour',description='Tour Views'),
    Viewpoint(position=(0,0,4),description='sphere in road'),
    Background(backUrl=["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"],bottomUrl=["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"],frontUrl=["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"],leftUrl=["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"],rightUrl=["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"],topUrl=["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"]),
    Transform(DEF='Rose01',
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(DEF='_01_-_Default',
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5)),
          texture=ComposedCubeMapTexture(
            back=ImageTexture(url=["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"]),
            bottom=ImageTexture(url=["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"]),
            front=ImageTexture(url=["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"]),
            left=ImageTexture(url=["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"]),
            right=ImageTexture(url=["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"]),
            top=ImageTexture(url=["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"])),
          shaders=ComposedShader(DEF='x_ite',language='GLSL',
            field=[
            field(name='cube',accessType='inputOutput',type='SFInt32',value=0),
            field(name='chromaticDispertion',accessType='inputOutput',type='SFVec3f',value=(0.98,1,1.033)),
            field(name='bias',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='scale',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='power',accessType='inputOutput',type='SFFloat',value=2)],
            parts=ShaderPart(url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]),
            ShaderPart(url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"],type='FRAGMENT')),
          ComposedShader(DEF='x3dom',language='GLSL',
            field=[
            field(name='cube',accessType='inputOutput',type='SFInt32',value=0),
            field(name='chromaticDispertion',accessType='inputOutput',type='SFVec3f',value=(0.98,1,1.033)),
            field(name='bias',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='scale',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='power',accessType='inputOutput',type='SFFloat',value=2)],
            parts=ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]),
            ShaderPart(url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"],type='FRAGMENT'))))]),
    TimeSensor(DEF='TourTime',cycleInterval=5,loop=True),
    PositionInterpolator(DEF='TourPosition',key=[0,1],keyValue=[(0,0,10),(0,0,-10)]),
    OrientationInterpolator(DEF='TourOrientation',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,3.1416)]),
    Script(DEF='RandomTourTime',
      field=[
      field(name='set_cycle',accessType='inputOnly',type='SFTime'),
      field(name='lastKey',accessType='inputOutput',type='SFFloat',value=0),
      field(name='orientations',accessType='inputOutput',type='MFRotation',value=[(0,1,0,0),(0,1,0,-1.57),(0,1,0,3.14),(0,1,0,1.57),(0,1,0,0),(1,0,0,-1.57),(0,1,0,0),(1,0,0,1.57),(0,1,0,0)]),
      field(name='positions',accessType='inputOutput',type='MFVec3f',value=[(0,0,10),(-10,0,0),(0,0,-10),(10,0,0),(0,0,10),(0,10,0),(0,0,10),(0,-10,0),(0,0,10)]),
      field(name='position_changed',accessType='outputOnly',type='MFVec3f'),
      field(name='set_orientation',accessType='inputOnly',type='MFRotation'),
      field(name='orientation_changed',accessType='outputOnly',type='MFRotation')]),
    ROUTE(fromNode='TourTime',fromField='cycleTime_changed',toNode='RandomTourTime',toField='set_cycle'),
    ROUTE(fromNode='RandomTourTime',fromField='orientation_changed',toNode='TourOrientation',toField='set_keyValue'),
    ROUTE(fromNode='RandomTourTime',fromField='position_changed',toNode='TourPosition',toField='set_keyValue'),
    ROUTE(fromNode='TourTime',fromField='fraction_changed',toNode='TourOrientation',toField='set_fraction'),
    ROUTE(fromNode='TourOrientation',fromField='value_changed',toNode='Tour',toField='set_orientation'),
    ROUTE(fromNode='TourTime',fromField='fraction_changed',toNode='TourPosition',toField='set_fraction'),
    ROUTE(fromNode='TourPosition',fromField='value_changed',toNode='Tour',toField='set_position')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for bubbles.py")
