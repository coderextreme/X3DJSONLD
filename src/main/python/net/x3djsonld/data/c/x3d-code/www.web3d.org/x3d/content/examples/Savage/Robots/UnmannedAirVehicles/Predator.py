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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='Predator.x3d',name='title'),
    meta(content='RQ-1A Predator Unmanned Aerial Vehicle armed with 4 AGM-114 Hellfire missiles',name='description'),
    meta(content='Duane Davis',name='creator'),
    meta(content='29 July 2004',name='created'),
    meta(content='19 March 2007',name='modified'),
    meta(content='http://www.fas.org/irp/program/collect/predator.htm',name='reference'),
    meta(content='http://www.modelairplanenews.com/click_trips/dec03/uav_1.asp',name='reference'),
    meta(content='Predator, unmanned aerial vehicle',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedAirVehicles/Predator.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      LOD(range=[150],
        children=[
        Group(
          children=[
          Transform(rotation=(1,0,0,-1.571),
            children=[
            Shape(DEF='Fuselage',
              appearance=Appearance(DEF='SlateGray',
                material=Material(diffuseColor=(0.7,0.7,0.7),shininess=0,specularColor=(0.1,0.1,0.1))),
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(-0.25,0),(-0.2,0.25),(-0.17,0.3),(-0.1,0.4),(0,0.5),(0.1,0.4),(0.3,0.3),(0.4,0.2),(0.48,0.1),(0.5,0),(0.48,-0.1),(0.4,-0.2),(0.3,-0.3),(0.1,-0.4),(0,-0.5),(-0.1,-0.4),(-0.17,-0.3),(-0.2,-0.25),(-0.25,0)],scale=[(0.001,0.001),(0.5,0.5),(0.85,0.85),(1.1,1.05),(1.25,1.125),(1.35,1.175),(1.425,1.225),(1.5,1.25),(1.5,1.25),(1.5,1.25),(1.5,1.25),(1.5,1.25),(1.45,1.225),(1.4,1.2),(1.35,1.175),(1.3,1.15),(1.25,1.125),(1.2,1.1),(1.15,1.075),(1.1,1.05),(1.05,1.025),(1,1),(1,1),(0.3,0.2)],spine=[(4.1,0,0),(3.95,0,0),(3.8,0,0),(3.65,0,0),(3.5,0,0),(3.35,0,0),(3.2,0,0),(3.05,0,0),(2.9,0,0),(2.75,0,0),(2.6,0,0),(2.45,0,0),(2.3,0,0),(2.15,0,0),(2.0,0,0),(1.85,0,0),(1.7,0,0),(1.55,0,0),(1.4,0,0),(1.25,0,0),(1.1,0,0),(1.0,0,0),(-3.0,0,0),(-4.1,0,0)])),
            Transform(translation=(1.5,-0.15,0),
              children=[
              Shape(DEF='Wing',
                appearance=Appearance(USE='SlateGray'),
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.25,0),(0.2,-0.05),(0.15,-0.075),(0.05,-0.093),(0,-0.1),(-0.25,-0.08),(-0.75,0.05),(0,0.05),(0.15,0.05),(0.2,0.03),(0.25,0)],scale=[(0.5,0.5),(1.25,1.25),(0.5,0.5)],spine=[(0,0,-7.39),(0,0,0),(0,0,7.39)])),
              Transform(DEF='StbdBombRack1',rotation=(0,1,0,3.1415927),translation=(-0.25,0,1.25),
                children=[
                Shape(DEF='BombRack',
                  appearance=Appearance(USE='SlateGray'),
                  geometry=Extrusion(crossSection=[(0.25,0),(0.225,-0.01),(0.2,-0.0175),(0.175,-0.0225),(0.125,-0.025),(0,-0.025),(-0.25,0),(0,0.025),(0.125,0.025),(0.175,0.0225),(0.2,0.0175),(0.225,0.01),(0.25,0)],spine=[(0,0,0),(0,-0.15,0)])),
                Transform(DEF='StbdMissile1DOF',rotation=(0,0,1,1.571),translation=(0,-0.194275,0),
                  children=[
                  Group(DEF='Hellfire',
                    children=[
                    Shape(
                      appearance=Appearance(DEF='HellfireGreen',
                        material=Material(diffuseColor=(0.1,0.3,0.1))),
                      geometry=Cylinder(height=1.6192,radius=0.08855)),
                    Transform(translation=(0,0.7,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.65,0.65,0))),
                        geometry=Cylinder(height=0.025,radius=0.08856))]),
                    Transform(translation=(0,0.8096,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='HellfireGreen'),
                        geometry=Sphere(radius=0.08855))]),
                    Transform(rotation=(0,1,0,0.7854),translation=(0,-0.8096,0),
                      children=[
                      Shape(DEF='HellfireFin',
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.1,0.2,0.1))),
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,5,6,7,-1],solid=False,
                          coord=Coordinate(point=[(0,0,0),(0,0.4,0),(0,0.325,0.175),(0,0,0.175),(0,1.15,0),(0,1.3,0),(0,1.2,0.125),(0,1.15,0.125)])))]),
                    Transform(rotation=(0,1,0,-0.7854),translation=(0,-0.8096,0),
                      children=[
                      Shape(USE='HellfireFin')]),
                    Transform(rotation=(0,1,0,2.3562),translation=(0,-0.8096,0),
                      children=[
                      Shape(USE='HellfireFin')]),
                    Transform(rotation=(0,1,0,-2.3562),translation=(0,-0.8096,0),
                      children=[
                      Shape(USE='HellfireFin')])])])]),
              Transform(DEF='StarboardBombRack2',rotation=(0,1,0,3.1415927),translation=(-0.25,0,1.75),
                children=[
                Shape(USE='BombRack'),
                Transform(DEF='StarboardMissile2DOF',rotation=(0,0,1,1.571),translation=(0,-0.194725,0),
                  children=[
                  Group(USE='Hellfire')])]),
              Transform(DEF='PortBombRack1',rotation=(0,1,0,3.1415927),translation=(-0.25,0,-1.25),
                children=[
                Shape(USE='BombRack'),
                Transform(DEF='PortMissile1DOF',rotation=(0,0,1,1.571),translation=(0,-0.194725,0),
                  children=[
                  Group(USE='Hellfire')])]),
              Transform(DEF='PortBombRack2',rotation=(0,1,0,3.1415927),translation=(-0.25,0,-1.75),
                children=[
                Shape(USE='BombRack'),
                Transform(DEF='PortMissile2DOF',rotation=(0,0,1,1.571),translation=(0,-0.194725,0),
                  children=[
                  Group(USE='Hellfire')])])]),
            Transform(rotation=(0,0,1,1.571),translation=(-4.1,0.035,0),
              children=[
              Shape(DEF='Propeller',
                appearance=Appearance(DEF='PropArcGray',
                  material=Material(diffuseColor=(0.4,0.4,0.4),specularColor=(0.3,0.3,0.3),transparency=0.75)),
                geometry=Cylinder(height=0.025,radius=0.75)),
              Transform(translation=(0,0.1,0),
                children=[
                Shape(
                  appearance=Appearance(USE='SlateGray'),
                  geometry=Cone(bottomRadius=0.095,height=0.2))])]),
            Transform(rotation=(1,0,0,2.095),translation=(-3.5,0,0),
              children=[
              Transform(DEF='StbdStabDOF',
                children=[
                Shape(DEF='Stabilator',
                  appearance=Appearance(USE='SlateGray'),
                  geometry=Extrusion(creaseAngle=1.5,crossSection=[(0.25,0),(0.225,-0.01),(0.2,-0.0175),(0.175,-0.0225),(0.125,-0.025),(0,-0.025),(-0.25,0),(0,0.025),(0.125,0.025),(0.175,0.0225),(0.2,0.0175),(0.225,0.01),(0.25,0)],spine=[(0,0,0),(0,2.25,0)]))])]),
            Transform(rotation=(1,0,0,-2.095),translation=(-3.5,0,0),
              children=[
              Transform(DEF='PortStabDOF',
                children=[
                Shape(USE='Stabilator')])]),
            Transform(rotation=(1,0,0,3.1415927),scale=(1,0.375,1),translation=(-3.5,0,0),
              children=[
              Transform(DEF='VertStabDOF',
                children=[
                Shape(USE='Stabilator')])]),
            Transform(DEF='FLIRTurret',translation=(3.0,-0.25,0),
              children=[
              Shape(
                appearance=Appearance(DEF='DarkGray',
                  material=Material(diffuseColor=(0.3,0.3,0.3))),
                geometry=Cylinder(height=0.35,radius=0.2)),
              Transform(translation=(0,-0.175,0),
                children=[
                Transform(DEF='FLIRDOF',rotation=(0,0,1,-0.5),
                  children=[
                  Shape(
                    appearance=Appearance(USE='DarkGray'),
                    geometry=Sphere(radius=0.2)),
                  Transform(rotation=(0,0,1,1.571),translation=(0.1,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(USE='SlateGray'),
                      geometry=Cylinder(height=0.2,radius=0.05))])])])]),
            Transform(DEF='Antenna1',rotation=(1,0,0,3.1415927),scale=(4,1,1),translation=(1.5,-0.25,0),
              children=[
              Shape(
                appearance=Appearance(DEF='White',
                  material=Material(diffuseColor=(0.9,0.9,0.9))),
                geometry=Cylinder(height=0.4,radius=0.025)),
              Transform(translation=(0,0.225,0),
                children=[
                Shape(
                  appearance=Appearance(USE='White'),
                  geometry=Sphere(radius=0.05))])]),
            Transform(DEF='Antenna2',translation=(0.9,0.5,0),
              children=[
              Shape(
                appearance=Appearance(DEF='Blue',
                  material=Material(diffuseColor=(0,0,0.6))),
                geometry=Extrusion(crossSection=[(0.05,0),(0.045,-0.002),(0.04,-0.0035),(0.035,-0.0045),(0.025,-0.005),(0,-0.005),(-0.05,0),(0,0.005),(0.025,0.005),(0.035,0.0045),(0.04,0.0035),(0.045,0.002),(0.05,0)],scale=[(1.5,1.5),(1,1)],spine=[(0,0,0),(0,0.2,0)]))]),
            Transform(DEF='Antenna3',rotation=(0,0,1,1.571),translation=(4.1,0.1,0),
              children=[
              Shape(
                appearance=Appearance(USE='White'),
                geometry=Cylinder(height=0.75,radius=0.01))]),
            Group(DEF='RideAlongViewpoints',
              children=[
              Transform(rotation=(0,1,0,-1.571),translation=(-10,6,0),
                children=[
                Viewpoint(description='Predator Over the Shoulder',orientation=(1,0,0,-0.15))]),
              Transform(rotation=(0,1,0,-1.571),translation=(-10,-6,0),
                children=[
                Viewpoint(description='Predator Forward View from Below',orientation=(1,0,0,0.15))]),
              Transform(rotation=(1,0,0,-1.571),translation=(0,15,0),
                children=[
                Viewpoint(description='Predator Top View',orientation=(0,0,1,-1.571))]),
              Transform(rotation=(1,0,0,1.571),translation=(0,-15,0),
                children=[
                Viewpoint(description='Predator Bottom View',orientation=(0,0,1,-1.571))]),
              Transform(translation=(0,0,15),
                children=[
                Viewpoint(description='Predator Starboard Side, 15m')]),
              Transform(rotation=(0,1,0,-0.7854),translation=(-5,1,5),
                children=[
                Viewpoint(description='Predator Starboard Stern, 7m')])])])]),
        Group(
          children=[
          Transform(rotation=(0,0,1,1.571),
            children=[
            Shape(
              appearance=Appearance(USE='SlateGray'),
              geometry=Cylinder(height=8.2,radius=0.5)),
            Transform(translation=(0,-1.5,0),
              children=[
              Shape(
                appearance=Appearance(USE='SlateGray'),
                geometry=Box(size=(14.78,0.75,0.05)))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Predator.py")
