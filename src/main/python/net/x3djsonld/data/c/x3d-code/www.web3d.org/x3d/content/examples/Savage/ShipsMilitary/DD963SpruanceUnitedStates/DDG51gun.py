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
    meta(content='DDG51gun.x3d',name='title'),
    meta(content='5-inch 54 gun from Cruiser model on SAVAGE',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='1 August 2001',name='created'),
    meta(content='8 August 2001',name='modified'),
    meta(content='LT Josh Hansen',name='modified by'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://www.usni.org/Proceedings/Articles01/PROphotocontest4.html',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/mk-42.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/DDG51gun.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Transform(
      children=[
      Transform(rotation=(0,0,1,-.06),
        children=[
        Group(DEF='FIVEINCHGUN',
          children=[
          Transform(DEF='FRONTGUN',rotation=(1,0.05,0,-1.57),scale=(1.3,1.3,1.3),
            children=[
            Transform(DEF='FrontGunBottom1',rotation=(1,0,0,1.57),translation=(0,2.2,-2.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                geometry=Cylinder(height=0.25,radius=4))]),
            Transform(DEF='FrontGunBottom2',rotation=(1,0,0,1.57),translation=(0,2.0,-2.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                geometry=Cylinder(height=0.5,radius=1.25))]),
            Transform(DEF='GunRotation',
              children=[
              Transform(DEF='GunBody',scale=(0.5,0.5,0.7),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                  geometry=Extrusion(creaseAngle=1.5,crossSection=[(-6.0,0.0),(-5.9,0.7),(-5.7,1.2),(-5.3,1.7),(-5,2.1),(-4,2.2),(-3,2.3),(-2,2.4),(0,2.5),(1,2.6),(2,2.65),(3,2.25),(4,1.7),(5,1),(6,0),(7,-2.5),(-5.5,-2.5),(-6,0)],spine=[(0,1,0),(0,7,0)]))]),
              Transform(DEF='Gun_barrel',
                children=[
                Transform(DEF='FrontGunFire',rotation=(-0.3,0,1,1.57),translation=(4,2.1,1),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                    geometry=Cylinder(bottom=False,height=10,radius=0.2,top=False))]),
                CylinderSensor(DEF='BarrelSensor',maxAngle=.4,minAngle=-.3)])])])])])]),
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

print ("python x3d.py load successful for DDG51gun.py")
