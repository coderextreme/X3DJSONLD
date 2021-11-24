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
    component(level=2,name='RigidBodyPhysics'),
    meta(content='BounceTrimesh.x3d',name='title'),
    meta(content='Example scene for RigidBodyPhysics component',name='description'),
    meta(content='Alan Hudson and Justin Couch',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 January 2008',name='created'),
    meta(content='26 December 2008',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.xj3d.org/extensions/index.html#Physics',name='reference'),
    meta(content='originals/bounce_trimesh.x3dv',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/BounceTrimesh.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Xj3D converter, http://www.xj3d.org',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BounceTrimesh.x3d'),
    Viewpoint(position=(0.0,0.0,4.0)),
    Group(
      children=[
      CollidableShape(DEF='BALL-GEOM',
        shape=Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(1.0,0.0,0.0))),
          geometry=Sphere(radius=0.1))),
      CollidableShape(DEF='GROUND-GEOM',translation=(0.0,-0.5,0.0),
        shape=Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(0.0,1.0,0.0))),
          geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
            coord=Coordinate(point=[(-10.0,0.0,10.0),(10.0,0.0,10.0),(10.0,0.0,-10.0),(-10.0,0.0,10.0),(10.0,0.0,-10.0),(-10.0,0.0,-10.0)]))))]),
    Transform(translation=(1.0,1.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='INDICATOR-MATERIAL',emissiveColor=(0.0,0.0,1.0))),
        geometry=Sphere(radius=0.2))]),
    RigidBodyCollection(DEF='BODY-COLLECTION',
      bodies=[
      RigidBody(DEF='BODY-1',position=(0.0,2.0,0.0),
        geometry=CollidableShape(USE='BALL-GEOM'))]),
    CollisionSensor(DEF='COLLISION-OUTPUT',
      collider=CollisionCollection(DEF='COLLISION-GROUP',bounce=1.0,minBounceSpeed=1.0,
        collidables=[
        CollidableShape(USE='BALL-GEOM'),
        CollidableShape(USE='GROUND-GEOM')])),
    Script(DEF='CONTACT-SCRIPT',directOutput=True,
      field=[
      field(accessType='inputOnly',name='activeSensor',type='SFBool'),
      field(accessType='outputOnly',name='indicatorColor',type='SFColor'),
      field(accessType='inputOnly',name='set_jointContacts',type='MFNode'),
      field(accessType='outputOnly',name='correctedContacts',type='MFNode'),
      field(accessType='initializeOnly',name='ground',type='SFNode',
        children=[
        CollidableShape(USE='GROUND-GEOM')])]),
    ROUTE(fromField='contacts',fromNode='COLLISION-OUTPUT',toField='set_jointContacts',toNode='CONTACT-SCRIPT'),
    ROUTE(fromField='isActive',fromNode='COLLISION-OUTPUT',toField='activeSensor',toNode='CONTACT-SCRIPT'),
    ROUTE(fromField='indicatorColor',fromNode='CONTACT-SCRIPT',toField='emissiveColor',toNode='INDICATOR-MATERIAL'),
    ROUTE(fromField='correctedContacts',fromNode='CONTACT-SCRIPT',toField='set_contacts',toNode='BODY-COLLECTION')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BounceTrimesh.py")
