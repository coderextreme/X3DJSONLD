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
    meta(content='FiveInchGun.x3d',name='title'),
    meta(content='5 inch 54 MK 42 gun from Cruiser model.',name='description'),
    meta(content='James Harney, Josh Hansen',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='1 August 2001',name='created'),
    meta(content='13 October 2002',name='translated'),
    meta(content='25 April 2017',name='modified'),
    meta(content='http://www.usni.org/Proceedings/Articles01/PROphotocontest4.html',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/mk-42.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/FiveInchGun.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(rotation=(0.0,0.0,1.0,-0.06),
        children=[
        Group(DEF='FIVEINCHGUN',
          children=[
          Transform(DEF='FRONTGUN',rotation=(1.0,0.05,0.0,-1.57),scale=(1.3,1.3,1.3),
            children=[
            Transform(DEF='FrontGunBottom1',rotation=(1.0,0.0,0.0,1.57),translation=(0.0,2.2,-2.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.7,0.7,0.7),shininess=0.3)),
                geometry=Cylinder(height=0.25,radius=4.0))]),
            Transform(DEF='FrontGunBottom2',rotation=(1.0,0.0,0.0,1.57),translation=(0.0,2.0,-2.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.7,0.7,0.7),shininess=0.3)),
                geometry=Cylinder(height=0.5,radius=1.25))]),
            Transform(DEF='GunRotation',
              children=[
              Transform(DEF='GunBody',scale=(0.5,0.5,0.7),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.7,0.7,0.7),shininess=0.3)),
                  geometry=Extrusion(creaseAngle=1.5,crossSection=[(-6.0,0.0),(-5.9,0.7),(-5.7,1.2),(-5.3,1.7),(-5.0,2.1),(-4.0,2.2),(-3.0,2.3),(-2.0,2.4),(0.0,2.5),(1.0,2.6),(2.0,2.65),(3.0,2.25),(4.0,1.7),(5.0,1.0),(6.0,0.0),(7.0,-2.5),(-5.5,-2.5),(-6.0,0.0)],spine=[(0.0,1.0,0.0),(0.0,7.0,0.0)]))]),
              Transform(DEF='Gun_barrel',
                children=[
                Transform(DEF='FrontGunFire',rotation=(-0.3,0.0,1.0,1.57),translation=(4.0,2.1,1.0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.7,0.7,0.7),shininess=0.3)),
                    geometry=Cylinder(bottom=False,height=10.0,radius=0.2,top=False))]),
                CylinderSensor(DEF='BarrelSensor',description='barrel sensor',maxAngle=0.4,minAngle=-0.3)])])])])])]),
    ROUTE(fromField='rotation_changed',fromNode='BarrelSensor',toField='set_rotation',toNode='Gun_barrel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FiveInchGun.py")
