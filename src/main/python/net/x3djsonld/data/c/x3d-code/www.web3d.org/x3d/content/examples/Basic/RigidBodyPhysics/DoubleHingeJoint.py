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
    meta(content='DoubleHingeJoint.x3d',name='title'),
    meta(content='Example scene for RigidBodyPhysics component',name='description'),
    meta(content='Alan Hudson and Justin Couch',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 January 2008',name='created'),
    meta(content='26 December 2008',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.xj3d.org/extensions/index.html#Physics',name='reference'),
    meta(content='originals/double_hinge_joint.x3dv',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/DoubleHingeJoint.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Xj3D converter, http://www.xj3d.org',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='DoubleHingeJoint.x3d'),
    Group(
      children=[
      CollidableShape(DEF='SPHERE-GEOM-1',
        shape=Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(1.0,0.0,0.0))),
          geometry=Sphere(radius=0.2))),
      CollidableShape(DEF='SPHERE-GEOM-2',
        shape=Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(0.0,0.0,1.0))),
          geometry=Sphere(radius=0.2)))]),
    RigidBodyCollection(
      bodies=[
      RigidBody(DEF='BODY-1',mass=0.1,position=(-0.3,0.0,0.0),useGlobalGravity=False,
        geometry=CollidableShape(USE='SPHERE-GEOM-1')),
      RigidBody(DEF='BODY-2',angularDampingFactor=0,linearVelocity=(0.1,0.0,0.0),mass=0.1,position=(0.3,0.0,0.0),useGlobalGravity=False,
        geometry=CollidableShape(USE='SPHERE-GEOM-2'))],
      joints=[
      SliderJoint(axis=(1.0,0.0,0.0),
        body1=RigidBody(USE='BODY-1'),
        body2=RigidBody(USE='BODY-2'))]),
    TimeSensor(DEF='TS',cycleInterval=10.0,loop=True),
    PositionInterpolator(DEF='PI',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(-1.0,0.0,0.0),(0.0,1.0,0.0),(1.0,0.0,0.0),(0.0,-1.0,0.0),(-1.0,0.0,0.0)]),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='PI'),
    ROUTE(fromField='value_changed',fromNode='PI',toField='linearVelocity',toNode='BODY-2')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DoubleHingeJoint.py")
