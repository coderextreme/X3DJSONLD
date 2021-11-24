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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='NetworkedCamera.x3d',name='title'),
    meta(content='Networked control of master/slave viewpoints using DIS EspduTransform node.',name='description'),
    meta(content='Alan Hudson and Don Brutzman',name='creator'),
    meta(content='LT Patrick Sullivan',name='translator'),
    meta(content='19 April 2005',name='created'),
    meta(content='19 April 2005',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development. will split into simple Inline-capable camera scene and usage example. Xj3D chat-server fallback needs to be checked.',name='warning'),
    meta(content='http://www.xj3d.org/extensions/DIS.html',name='reference'),
    meta(content='http://www.yumetech.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/NetworkedCamera.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NetworkedCamera.x3d'),
    Background(groundAngle=[1.45,1.57],groundColor=[(.005,.05,.03),(.01,.13,.09),(.025,.22,.17)],skyAngle=[.9,1.57],skyColor=[(0,0,.2),(.1,.1,.8),(.7,.7,1)]),
    Viewpoint(description='Free Navigation',position=(28.85,3.978,-98.85)),
    Viewpoint(DEF='MasterViewpoint',description='Master Viewpoint',orientation=(0.001188,-1,-0.008389,-2.86),position=(28.85,3.978,-98.85)),
    ProximitySensor(DEF='WorldProximitySensor',size=(1000000,1000000,1000000)),
    EspduTransform(DEF='CameraEspduTransform',address='224.2.181.145',networkMode='networkWriter',port=62040,writeInterval=.01,
      children=[
      Viewpoint(DEF='SlavedViewpoint',description='Slaved Viewpoint',position=(0,0,0))]),
    Script(DEF='ViewpointControlScript',
      field=[
      field(accessType='inputOnly',name='bindMaster',type='SFBool'),
      field(accessType='inputOnly',name='bindSlave',type='SFBool'),
      field(accessType='inputOnly',name='user_translation',type='SFVec3f'),
      field(accessType='inputOnly',name='user_rotation',type='SFRotation'),
      field(accessType='outputOnly',name='sharedTranslation',type='SFVec3f'),
      field(accessType='outputOnly',name='sharedRotation',type='SFRotation'),
      field(accessType='outputOnly',name='networkMode',type='SFString'),
      field(accessType='initializeOnly',name='isMaster',type='SFBool',value=False),
      field(accessType='initializeOnly',name='isSlave',type='SFBool',value=False)]),
    ROUTE(fromField='isBound',fromNode='MasterViewpoint',toField='bindMaster',toNode='ViewpointControlScript'),
    ROUTE(fromField='isBound',fromNode='MasterViewpoint',toField='enabled',toNode='WorldProximitySensor'),
    ROUTE(fromField='isBound',fromNode='SlavedViewpoint',toField='bindSlave',toNode='ViewpointControlScript'),
    ROUTE(fromField='position_changed',fromNode='WorldProximitySensor',toField='user_translation',toNode='ViewpointControlScript'),
    ROUTE(fromField='orientation_changed',fromNode='WorldProximitySensor',toField='user_rotation',toNode='ViewpointControlScript'),
    ROUTE(fromField='sharedTranslation',fromNode='ViewpointControlScript',toField='set_translation',toNode='CameraEspduTransform'),
    ROUTE(fromField='sharedRotation',fromNode='ViewpointControlScript',toField='set_rotation',toNode='CameraEspduTransform'),
    ROUTE(fromField='networkMode',fromNode='ViewpointControlScript',toField='networkMode',toNode='CameraEspduTransform'),
    #  ====================================================== 
    #  Integrate heads-up display with onscreen networkMode selection and position/orientation tracing 
    #  use of HeadsUpDislay and ViewPositionOrientation prototypes will be helpful if Xj3D supports them 
    #  consider entity discovery as well 
    #  ====================================================== 
    #  Example background viewing scene, split out into separate example next 
    Background(groundAngle=[1.45,1.57],groundColor=[(.005,.05,.03),(.01,.13,.09),(.025,.22,.17)],skyAngle=[.9,1.57],skyColor=[(0,0,.2),(.1,.1,.8),(.7,.7,1)]),
    NavigationInfo(speed=10,type=["WALK","ANY"]),
    Transform(translation=(0,-0.1,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(DEF='PT',image=[2,2,3,0x0,0x00FF00,0x0000FF,0xFF0000]),
          textureTransform=TextureTransform(scale=(100,100))),
        geometry=IndexedFaceSet(colorPerVertex=False,coordIndex=[0,1,2,3,0,-1],
          coord=Coordinate(point=[(1000,0,1000),(1000,0,-1000),(-1000,0,-1000),(-1000,0,1000)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NetworkedCamera.py")
