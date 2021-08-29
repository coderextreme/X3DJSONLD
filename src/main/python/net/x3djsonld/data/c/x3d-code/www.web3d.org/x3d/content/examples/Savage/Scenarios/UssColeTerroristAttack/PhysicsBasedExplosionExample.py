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
    meta(content='PhysicsBasedExplosionExample.x3d',name='title'),
    meta(content='Click on the text to trigger an exemplar of the physics-based explosion model prototype.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='28 October 2001',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='http//www.fas.org/man/dod-101/navy/docs/es310/warheads/Warheads.htm',name='reference'),
    meta(content='http//www.fas.org/man/dod-101/navy/docs/es310/dam_crit/dam_crit.htm',name='reference'),
    meta(content='http//www.eqe.com/publications/revf94/blast.htm',name='reference'),
    meta(content='http//www.siggraph.org/education/materials/HyperGraph/animation/particle.htm',name='reference'),
    meta(content='TNT Equivalency Based Explosion, VRML X3D',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Physics-based explosion model',name='TNTBasedExplosion',url=["PhysicsBasedExplosionPrototype.x3d#TNTBasedExplosion","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.x3d#TNTBasedExplosion","PhysicsBasedExplosionPrototype.wrl#TNTBasedExplosion","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.wrl#TNTBasedExplosion"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    NavigationInfo(speed=10,type=["EXAMINE","FLY","ANY"],visibilityLimit=7000),
    Background(groundAngle=[1.309],groundColor=[(0.2,0.2,0.8),(0.2,0.2,1.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Viewpoint(description='Watch the Explosion',position=(0,0,20)),
    ProtoInstance(DEF='TNT',name='TNTBasedExplosion'),
    Transform(
      children=[
      Billboard(
        children=[
        Shape(
          geometry=Text(string=["Click text to","trigger explosion"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))))])]),
    TouchSensor(DEF='MyTouch',description='touch to activate'),
    ROUTE(fromField='touchTime',fromNode='MyTouch',toField='startExplosion',toNode='TNT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PhysicsBasedExplosionExample.py")
