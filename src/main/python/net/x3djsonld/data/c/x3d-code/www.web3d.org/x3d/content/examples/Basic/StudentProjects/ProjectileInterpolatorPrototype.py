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
    meta(content='ProjectileInterpolatorPrototype.x3d',name='title'),
    meta(content='A proto which simulates x-y plane projectile motion.',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='10 December 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProjectileInterpolatorPrototype.x3d'),
    ProtoDeclare(appinfo='This prototype is a Projectile Motion Interpolator. It takes Inputs : Initial Velocity and Angle then calculates trajectory of the projectile on x-y plane according to given dt time and B_m. It outputs value_changed values(SFVec3f).',name='ProjectileInterpolator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Initial Velocity value of the object.',name='Vi',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Launch Angle. The angle between horizantal and launch direction',name='theta',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='Proportional to drag force = B2/m',name='B_m',type='SFFloat',value=0.00004),
        field(accessType='initializeOnly',appinfo='Time step.',name='dt',type='SFFloat',value=0.1),
        field(accessType='initializeOnly',appinfo='SFFloat Values ranging [0..1].',name='fraction',type='SFFloat'),
        field(accessType='inputOnly',appinfo='The set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.',name='set_fraction',type='SFFloat'),
        field(accessType='inputOnly',appinfo='Sets theta to the value of eventIn.',name='set_theta',type='SFFloat'),
        field(accessType='inputOnly',appinfo='Sets Vi to the value of eventIn.',name='set_Vi',type='SFFloat'),
        field(accessType='outputOnly',appinfo='The interpolator function eventOut results as Vector3Float.',name='value_changed',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='ProjectileMotionTrackerScript',
          field=[
          field(accessType='initializeOnly',name='Vi',type='SFFloat'),
          field(accessType='initializeOnly',name='theta',type='SFFloat'),
          field(accessType='initializeOnly',name='B_m',type='SFFloat'),
          field(accessType='initializeOnly',name='dt',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='In range [01]',name='fraction',type='SFFloat'),
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='inputOnly',name='set_theta',type='SFFloat'),
          field(accessType='inputOnly',name='set_Vi',type='SFFloat'),
          field(accessType='outputOnly',name='value_changed',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='Vi',protoField='Vi'),
            connect(nodeField='theta',protoField='theta'),
            connect(nodeField='B_m',protoField='B_m'),
            connect(nodeField='dt',protoField='dt'),
            connect(nodeField='fraction',protoField='fraction'),
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='set_theta',protoField='set_theta'),
            connect(nodeField='set_Vi',protoField='set_Vi'),
            connect(nodeField='value_changed',protoField='value_changed')]))])),
    #  ==================== 
    Anchor(description='ProjectileInterpolatorArena',parameter=["target=_blank"],url=["ProjectileInterpolatorArena.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.wrl","ProjectileInterpolatorArena.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.x3d"],
      children=[
      Shape(
        geometry=Text(string=["ProjectileInterpolatorPrototype","defines a prototype","","Click on this text to see","ProjectileInterpolatorArena"," scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))]),
    PositionInterpolator(),])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProjectileInterpolatorPrototype.py")
