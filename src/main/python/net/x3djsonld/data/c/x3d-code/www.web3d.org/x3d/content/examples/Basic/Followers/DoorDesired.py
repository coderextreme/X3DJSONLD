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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='DoorDesired.x3d',name='title'),
    meta(content='X3D Follower example',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/door_desired.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development, instantReality works but BS Contact fails silently',name='warning'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-1.2-X3D-AbstractSpecification/Part01/components/followers.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/originals/DoorDesired.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='DoorDesired.x3d'),
    Background(DEF='Bgnd',skyAngle=[1.1,1.4,1.57],skyColor=[(0.176,0.314,0.529),(0.176,0.314,0.529),(0.314,0.549,0.784),(0.706,0.824,0.922)]),
    Viewpoint(description='initial View',fieldOfView=0.844,orientation=(-0.0040,1.0,0.0030,0.439),position=(3.163,1.65,5.877)),
    Viewpoint(description='from the top',fieldOfView=0.844,orientation=(-0.979,-0.051,0.198,1.263),position=(-1.216,9.189,2.77)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.318,0.663,0.0))),
      geometry=Box(size=(100.0,0.1,100.0))),
    Group(
      children=[
      TouchSensor(DEF='TchCyls',description='touch to activate'),
      Transform(translation=(-1.25,1.0,0.0),
        children=[
        Shape(DEF='ShCyl',
          appearance=Appearance(
            material=Material(ambientIntensity=0.00333,diffuseColor=(0.52,0.26,0.0),emissiveColor=(0.24,0.0,0.0),shininess=0.12,specularColor=(0.97,0.98,0.12))),
          geometry=Cylinder(radius=0.375))]),
      Transform(translation=(1.25,1.0,0.0),
        children=[
        Shape(USE='ShCyl')]),
      Transform(translation=(-4.25,1.0,0.0),
        children=[
        Shape(DEF='ShWall',
          appearance=Appearance(
            material=Material(ambientIntensity=0.00333,diffuseColor=(0.425,0.182,0.0075),emissiveColor=(0.425,0.182,0.0075),shininess=0.12)),
          geometry=Box(size=(6.0,1.99,0.1)))])]),
    Transform(translation=(4.25,1.0,0.0),
      children=[
      Shape(USE='ShWall')]),
    Transform(translation=(-1.25,0.0,0.0),
      children=[
      TouchSensor(DEF='TchDoor',description='touch to activate'),
      Transform(DEF='TransDoor',
        children=[
        Transform(translation=(1.25,1.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.024,0.2,0.334),emissiveColor=(0.05,0.4,0.666))),
            geometry=Box(size=(1.75,2.0,0.075)))])])]),
    OrientationChaser(DEF='DmpODoor',duration=1.3),
    Script(DEF='Worker',
      field=[
      field(accessType='initializeOnly',name='cOriOpen',type='SFRotation',value=(0.0,-1.0,0.0,2.5)),
      field(accessType='inputOnly',name='touched',type='SFTime'),
      field(accessType='initializeOnly',name='IsOpen',type='SFBool',value=False),
      field(accessType='outputOnly',name='oriToGoTo',type='SFRotation'),
      field(accessType='initializeOnly',name='cOriClosed',type='SFRotation',value=(0.0,0.0,1.0,0.0))]),
    ROUTE(fromField='touchTime',fromNode='TchDoor',toField='touched',toNode='Worker'),
    ROUTE(fromField='touchTime',fromNode='TchCyls',toField='touched',toNode='Worker'),
    ROUTE(fromField='oriToGoTo',fromNode='Worker',toField='set_destination',toNode='DmpODoor'),
    ROUTE(fromField='value_changed',fromNode='DmpODoor',toField='rotation',toNode='TransDoor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DoorDesired.py")
